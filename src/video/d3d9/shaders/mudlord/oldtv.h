{
"/* COMPATIBILITY\n"
"   - HLSL compilers\n"
"   - Cg   compilers\n"
" */\n"
"\n"
"#pragma parameter OLDTV_CHROMA \"OldTV Chroma\"   4.0   0.0 10.0 0.01\n"
"#pragma parameter OLDTV_CHROMA_SHIFT \"OldTV Chroma Shift\" 2048.0 0.0 4096.0 1.00\n"
"#pragma parameter OLDTV_BARREL_VALUE \"OldTV Barrel Value #1\" 0.006 0.0 1.0 0.001\n"
"#pragma parameter OLDTV_BARREL_VALUE2 \"OldTV Barrel Value #2\" 0.5 0.0 1.0 0.01\n"
"#pragma parameter OLDTV_USE_BARREL \"OldTV Enable Barrel\" 0.0 0.0 1.0 1.0\n"
"#pragma parameter OLDTV_USE_RAND   \"OldTV Enable Rand\" 1.0 0.0 1.0 1.0\n"
"#pragma parameter OLDTV_USE_LUMA   \"OldTV Enable Luma\" 0.0 0.0 1.0 1.0\n"
"#pragma parameter OLDTV_FRAME_LIMIT \"OldTV Frame Limit\" 0.16 0.0 1.0 0.01\n"
"#pragma parameter OLDTV_FRAME_SHAPE \"OldTV Frame Shape\" 0.44 0.0 1.0 0.01\n"
"#pragma parameter OLDTV_FRAME_SHARPNESS \"OldTV Frame Sharpness\" 0.80 0.0 10.0 0.01\n"
"#pragma parameter OLDTV_INTERFERENCE \"OldTV Interference\" 1.0 0.0 10.0 0.01\n"
"\n"
"#ifdef PARAMETER_UNIFORM\n"
"uniform float OLDTV_CHROMA;\n"
"uniform float OLDTV_CHROMA_SHIFT;\n"
"uniform float OLDTV_USE_BARREL;\n"
"uniform float OLDTV_BARREL_VALUE;\n"
"uniform float OLDTV_BARREL_VALUE2;\n"
"uniform float OLDTV_USE_RAND;\n"
"uniform float OLDTV_USE_LUMA;\n"
"uniform float OLDTV_FRAME_LIMIT;\n"
"uniform float OLDTV_FRAME_SHAPE;\n"
"uniform float OLDTV_FRAME_SHARPNESS;\n"
"uniform float OLDTV_INTERFERENCE;\n"
"#else\n"
"#define OLDTV_CHROMA 4.0\n"
"#define OLDTV_CHROMA_SHIFT 2048\n"
"#define OLDTV_USE_BARREL 0\n"
"#define OLDTV_BARREL_VALUE 0.006\n"
"#define OLDTV_BARREL_VALUE2 0.5\n"
"#define OLDTV_USE_RAND 1\n"
"#define OLDTV_USE_LUMA 0\n"
"#define OLDTV_FRAME_LIMIT 0.16\n"
"#define OLDTV_FRAME_SHAPE 0.44\n"
"#define OLDTV_FRAME_SHARPNESS 0.80\n"
"#define OLDTV_INTERFERENCE 1.0\n"
"#endif\n"
"\n"
"struct input\n"
"{\n"
"   float2 video_size;\n"
"   float2 texture_size;\n"
"   float2 output_size;\n"
"   float frame_count;\n"
"   float frame_direction;\n"
"   float frame_rotation;\n"
"};\n"
"     \n"
"struct VERTEX_OUTPUT {\n"
"   float4 position : POSITION;\n"
"   float4 vpos : TEXCOORD1;\n"
"   float2 texCoord : TEXCOORD0;\n"
"};\n"
"     \n"
"   VERTEX_OUTPUT main_vertex\n"
"(\n"
" float4 position : POSITION,\n"
" float2 texCoord : TEXCOORD0,\n"
" float4 vpos : TEXCOORD1,\n"
" uniform input IN,\n"
" uniform float4x4 modelViewProj\n"
" )\n"
"{\n"
"   VERTEX_OUTPUT OUT;\n"
"   OUT.position = mul(modelViewProj, position);\n"
"   OUT.vpos = OUT.position;\n"
"   OUT.texCoord = texCoord;\n"
"   return OUT;\n"
"}\n"
"\n"
"struct output\n"
"{\n"
"   float4 color : COLOR;\n"
"};\n"
"\n"
"\n"
"float4 rgbdistort(float2 tc, sampler2D tex)\n"
"{\n"
"   float chroma = OLDTV_CHROMA;\n"
"   float shift = chroma / OLDTV_CHROMA_SHIFT;\n"
"   float red = tex2D(tex, tc+shift).r;\n"
"   float green = tex2D(tex,tc).g;\n"
"   float blue = tex2D(tex,tc-shift).b;\n"
"   return float4(red,green ,blue , 1.0);\n"
"}\n"
"\n"
"\n"
"float seed_random (float2 coords, float frame_cnt)\n"
"{\n"
"   frame_cnt = cos(frame_cnt);\n"
"   float2 constant1 = frame_cnt * float2(142.0/11.0, 1017.0/13.0);\n"
"   float constant2 = frame_cnt * 481344.0 / 11.0;\n"
"   return clamp(frac(sin(dot(coords, constant1)) * constant2) + 0.2, 0.0 ,1.0);\n"
"}\n"
"\n"
"float2 barrelDistortion(float2 coord)\n"
"{\n"
"   float distortion = OLDTV_BARREL_VALUE;\n"
"   float2 cc = coord - OLDTV_BARREL_VALUE2;\n"
"   float dist = cc;\n"
"   return coord + cc * (dist + distortion * dist * dist) * distortion;\n"
"}\n"
"\n"
"output main_fragment(in VERTEX_OUTPUT VAR, uniform sampler2D decal : TEXUNIT0, uniform input IN)\n"
"{\n"
"   //yes Cg is THIS retarded, passing position as texturecoord\n"
"   output OUT;\n"
"   VAR.vpos /= VAR.vpos.w;\n"
"   float2 p = VAR.texCoord;\n"
"   if (OLDTV_USE_BARREL == 1)\n"
"   {\n"
"      p = barrelDistortion(VAR.texCoord);\n"
"   }\n"
"\n"
"   float rand = 1;\n"
"\n"
"   float f = (1.0 - VAR.vpos.x *VAR.vpos.x) * (1.0 - VAR.vpos.y * VAR.vpos.y);\n"
"   float frame = clamp(OLDTV_FRAME_SHARPNESS * (pow(f, OLDTV_FRAME_SHAPE) - OLDTV_FRAME_LIMIT), 0.0, 1.0);\n"
"\n"
"   if (OLDTV_USE_RAND == 1)\n"
"   {\n"
"      rand = seed_random(p, IN.frame_count);\n"
"   }\n"
"\n"
"   if (OLDTV_USE_LUMA == 1)\n"
"   {\n"
"      float4 image = tex2D(decal,p);\n"
"      float luminance = dot(image.rgb, float3(0.299, 0.587, 0.114));\n"
"      image.rgb = float3(luminance,luminance,luminance);\n"
"      float4 distortion = rgbdistort(p,decal);\n"
"      OUT.color = frame * (OLDTV_INTERFERENCE *distortion*rand+ image);\n"
"   }\n"
"   else\n"
"   {\n"
"      float4 distortion = rgbdistort(p,decal);\n"
"      OUT.color = frame * (OLDTV_INTERFERENCE *distortion*rand);\n"
"   }\n"
"\n"
"   return OUT;\n"
"}\n"
},
