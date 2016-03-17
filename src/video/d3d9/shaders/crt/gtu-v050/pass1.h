{
"////////////////////////////////////////////////////////\n"
"//	GTU version 0.50	\n"
"//	Author: aliaspider - aliaspider@gmail.com\n"
"//	License: GPLv3      \n"
"////////////////////////////////////////////////////////\n"
"\n"
"\n"
#include "config.h"
"\n"
"\n"
"#define RGB_to_YIQ 	transpose(float3x3( 0.299 , 0.595716 , 0.211456 ,	0.587    , -0.274453 , -0.522591 ,		0.114    , -0.321263 , 0.311135 ))\n"
"\n"
"void main_vertex\n"
"(\n"
"   float4 position : POSITION,\n"
"   out float4 oPosition : POSITION,\n"
"   uniform float4x4 modelViewProj,\n"
"   float2 tex : TEXCOORD,\n"
"   out float2 oTex : TEXCOORD\n"
")\n"
"{\n"
"   oPosition = mul(modelViewProj, position);\n"
"   oTex = tex;\n"
"}\n"
"\n"
"float4 main_fragment (float2 tex : TEXCOORD, uniform sampler2D s0 : TEXUNIT0) : COLOR\n"
"{\n"
"   	float4 c=tex2D(s0, tex);\n"
"#ifdef compositeConnection\n"
"	c.rgb=mul(RGB_to_YIQ,c.rgb);\n"
"#endif\n"
"	return c;\n"
"}\n"
"\n"
},
