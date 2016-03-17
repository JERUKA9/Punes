{
"/* COMPATIBILITY \n"
"   - HLSL compilers\n"
"   - Cg   compilers\n"
"*/\n"
"\n"
"/*\n"
"   Copyright (C) 2006 guest(r) - guest.r@gmail.com\n"
"\n"
"   This program is free software; you can redistribute it and/or\n"
"   modify it under the terms of the GNU General Public License\n"
"   as published by the Free Software Foundation; either version 2\n"
"   of the License, or (at your option) any later version.\n"
"\n"
"   This program is distributed in the hope that it will be useful,\n"
"   but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"   GNU General Public License for more details.\n"
"\n"
"   You should have received a copy of the GNU General Public License\n"
"   along with this program; if not, write to the Free Software\n"
"   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.\n"
"*/\n"
"\n"
"float3  dt = float3(1,1,1);\n"
"\n"
"/*\n"
"   The AdvancedAA shader is well used to:\n"
"   - AA 2xscaled gfx. to its 4x absolute size,   \n"
"   - AA hi-res \"screens\" (640x480) to their 2x size or,\n"
"   - AA gfx. back to it's original size (looks nice above 640x480, set scaling to 1.0) \n"
"*/\n"
"\n"
"/*\n"
"	VERTEX_SHADER\n"
"*/\n"
"\n"
"struct input\n"
"{\n"
"  float2 video_size;\n"
"  float2 texture_size;\n"
"  float2 output_size;\n"
"  float  frame_count;\n"
"  float  frame_direction;\n"
"  float frame_rotation;\n"
"};\n"
"\n"
"\n"
"struct VERTEX_OUTPUT\n"
"{\n"
"  float4 position : POSITION;\n"
"  float4 color    : COLOR;\n"
"  float2 texCoord : TEXCOORD0;\n"
"  float4 t1 : TEXCOORD1;\n"
"  float4 t2 : TEXCOORD2;\n"
"  float4 t3 : TEXCOORD3;\n"
"  float4 t4 : TEXCOORD4;\n"
"};\n"
"\n"
"#pragma parameter AA_RESOLUTION_X \"AdvancedAA Input Resolution X\" 0.0 0.0 1920.0 1.0\n"
"#pragma parameter AA_RESOLUTION_Y \"AdvancedAA Input Resolution Y\" 0.0 0.0 1920.0 1.0\n"
"\n"
"#define AA_RESOLUTION_X_DEF IN.texture_size.x\n"
"#define AA_RESOLUTION_Y_DEF IN.texture_size.y\n"
"#ifdef PARAMETER_UNIFORM\n"
"uniform float AA_RESOLUTION_X;\n"
"uniform float AA_RESOLUTION_Y;\n"
"#else\n"
"#define AA_RESOLUTION_X AA_RESOLUTION_X_DEF\n"
"#define AA_RESOLUTION_Y AA_RESOLUTION_Y_DEF\n"
"#endif\n"
"\n"
"VERTEX_OUTPUT main_vertex\n"
"(\n"
"	float4 position	: POSITION,\n"
"	float4 color	: COLOR,\n"
"	float2 texCoord1 : TEXCOORD0,\n"
"\n"
"   	uniform float4x4 modelViewProj,\n"
"	uniform input IN\n"
")\n"
"{\n"
"	VERTEX_OUTPUT OUT;\n"
"\n"
"	OUT.position = mul(modelViewProj, position);\n"
"	OUT.color = color;\n"
"\n"
"	float2 ps = float2(1.0/((AA_RESOLUTION_X == 0) ? AA_RESOLUTION_X_DEF : AA_RESOLUTION_X), 1.0/((AA_RESOLUTION_Y == 0) ? AA_RESOLUTION_Y_DEF : AA_RESOLUTION_Y));\n"
"	float dx = ps.x*0.5;\n"
"	float dy = ps.y*0.5;\n"
"\n"
"	// This line fix a bug in ATI cards.\n"
"	float2 texCoord = texCoord1 + float2(0.0000001, 0.0000001);\n"
"\n"
"	OUT.texCoord = texCoord;\n"
"	OUT.t1.xy = texCoord + float2(-dx, 0);\n"
"	OUT.t2.xy = texCoord + float2( dx, 0);\n"
"	OUT.t3.xy = texCoord + float2( 0,-dy);\n"
"	OUT.t4.xy = texCoord + float2( 0, dy);\n"
"	OUT.t1.zw = texCoord + float2(-dx,-dy);\n"
"	OUT.t2.zw = texCoord + float2(-dx, dy);\n"
"	OUT.t3.zw = texCoord + float2( dx,-dy);\n"
"	OUT.t4.zw = texCoord + float2( dx, dy);\n"
"\n"
"	return OUT;\n"
"}\n"
"\n"
"\n"
"/* \n"
"	FRAGMENT SHADER\n"
"*/\n"
"\n"
"struct output \n"
"{\n"
"  float4 color    : COLOR;\n"
"};\n"
"\n"
"\n"
"struct VERTEX_INPUT\n"
"{\n"
"	float4 position : POSITION;\n"
"	float2 CT : TEXCOORD0;\n"
"	float4 t1 : TEXCOORD1;\n"
"	float4 t2 : TEXCOORD2;\n"
"	float4 t3 : TEXCOORD3;\n"
"	float4 t4 : TEXCOORD4;\n"
"};\n"
"\n"
"\n"
"output main_fragment(in VERTEX_INPUT VAR, uniform sampler2D decal : TEXUNIT0, uniform input IN) \n"
"{\n"
"   output OUT;\n"
"   float3 c00 = tex2D(decal, VAR.t1.zw).xyz; \n"
"   float3 c10 = tex2D(decal, VAR.t3.xy).xyz;\n"
"   float3 c20 = tex2D(decal, VAR.t3.zw).xyz;\n"
"   float3 c01 = tex2D(decal, VAR.t1.xy).xyz;\n"
"   float3 c11 = tex2D(decal, VAR.CT).xyz;\n"
"   float3 c21 = tex2D(decal, VAR.t2.xy).xyz;\n"
"   float3 c02 = tex2D(decal, VAR.t2.zw).xyz;\n"
"   float3 c12 = tex2D(decal, VAR.t4.xy).xyz;\n"
"   float3 c22 = tex2D(decal, VAR.t4.zw).xyz;\n"
"\n"
"   float d1=dot(abs(c00-c22),dt)+0.0001;\n"
"   float d2=dot(abs(c20-c02),dt)+0.0001;\n"
"   float hl=dot(abs(c01-c21),dt)+0.0001;\n"
"   float vl=dot(abs(c10-c12),dt)+0.0001;\n"
"\n"
"   float k1=0.5*(hl+vl);\n"
"   float k2=0.5*(d1+d2);\n"
"\n"
"   float3 t1=(hl*(c10+c12)+vl*(c01+c21)+k1*c11)/(2.5*(hl+vl));\n"
"   float3 t2=(d1*(c20+c02)+d2*(c00+c22)+k2*c11)/(2.5*(d1+d2));\n"
"\n"
"   k1=dot(abs(t1-c11),dt)+0.0001;\n"
"   k2=dot(abs(t2-c11),dt)+0.0001;\n"
"\n"
"   OUT.color = float4((k1*t2+k2*t1)/(k1+k2),1);\n"
"   return OUT;\n"
"}\n"
},
