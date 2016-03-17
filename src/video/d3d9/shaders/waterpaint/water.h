{
"/* COMPATIBILITY \n"
"   - HLSL compilers\n"
"   - Cg   compilers\n"
"*/\n"
"\n"
"/*\n"
"   Author: Themaister\n"
"   License: Public domain\n"
"*/\n"
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
"\n"
"void main_vertex\n"
"(\n"
"   float4 position : POSITION,\n"
"   out float4 oPosition : POSITION,\n"
"   uniform float4x4 modelViewProj,\n"
"\n"
"   float4 color : COLOR,\n"
"   out float4 oColor : COLOR,\n"
"\n"
"   float2 tex : TEXCOORD,\n"
"   out float2 oTex : TEXCOORD,\n"
"\n"
"   uniform input IN\n"
")\n"
"{\n"
"   oPosition = mul(modelViewProj, position);\n"
"   oColor = color;\n"
"   oTex = tex;\n"
"}\n"
"\n"
"const float2 src0 = float2(0.6, 0.7);\n"
"const float2 src1 = float2(0.9, 0.9);\n"
"const float2 src2 = float2(-0.6, 0.3);\n"
"const float2 src3 = float2(0.1, 0.4);\n"
"const float2 src4 = float2(0.1, 0.4);\n"
"const float2 src5 = float2(0.5, 0.5);\n"
"const float2 src6 = float2(-1.0, 1.0);\n"
"\n"
"float apply_wave(float2 pos, float2 src, float cnt)\n"
"{\n"
"   float2 diff = pos - src;\n"
"   float dist = 300.0 * sqrt(dot(diff, diff));\n"
"   dist -= 0.15 * cnt;\n"
"   return sin(dist);\n"
"}\n"
"\n"
"float4 main_fragment (uniform input IN, float2 tex : TEXCOORD,\n"
"   uniform sampler2D s0 : TEXUNIT0) : COLOR\n"
"{\n"
"   float4 output = tex2D(s0, tex);\n"
"   float2 scale = tex * IN.texture_size / IN.video_size;\n"
"\n"
"   float cnt = IN.frame_count;\n"
"   float res = apply_wave(scale, src0, cnt);\n"
"   res += apply_wave(scale, src1, cnt);\n"
"   res += apply_wave(scale, src2, cnt);\n"
"   res += apply_wave(scale, src3, cnt);\n"
"   res += apply_wave(scale, src4, cnt);\n"
"   res += apply_wave(scale, src5, cnt);\n"
"   res += apply_wave(scale, src6, cnt);\n"
"\n"
"   return output * (0.9 + 0.012 * res);\n"
"}\n"
},
