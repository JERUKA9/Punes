{
#include "ntsc-pass2-vertex.inc"
#include "ntsc-decode-filter-3phase.inc"
#include "ntsc-rgbyuv.inc"
"\n"
"#define fetch_offset(offset, one_x) \\\n"
"   tex2D(s0, vertex.tex + float2((offset) * (one_x), 0.0)).xyz\n"
"\n"
"#pragma parameter NTSC_CRT_GAMMA \"NTSC CRT Gamma\" 2.4 2.0 3.0 0.02\n"
"##ifdef PARAMETER_UNIFORM\n"
"uniform float NTSC_CRT_GAMMA;\n"
"#else\n"
"#define NTSC_CRT_GAMMA 2.4\n"
"#endif\n"
"\n"
"float4 main_fragment (uniform input IN, in data vertex, uniform sampler2D s0 : TEXUNIT0) : COLOR\n"
"{\n"
#include "ntsc-pass2-decode.inc"
"   float3 rgb = yiq2rgb(signal);\n"
"   return float4(pow(rgb, NTSC_CRT_GAMMA), 1.0);\n"
"}\n"
},
