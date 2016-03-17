{
"#pragma parameter box_scale \"Box Scale\" 4.0 1.0 10.0 1.0\n"
"#pragma parameter location \"Location\" 0.5 0.2 0.5 0.3\n"
"#pragma parameter in_res_x \"Horiz. Input Res\" 320 200 600 1.0\n"
"#pragma parameter in_res_y \"Vert. Input Res\" 240 120 480 1.0\n"
"#pragma parameter out_res_x \"Horiz. Output Res\" 1920.0 640.0 3840.0 40.0\n"
"#pragma parameter out_res_y \"Vert. Output Res\" 1080.0 480.0 2160.0 40.0\n"
"#pragma parameter border_on_top \"Border On Top\" 1.0 0.0 1.0 1.0\n"
"#ifdef PARAMETER_UNIFORM\n"
"uniform float box_scale;\n"
"uniform float location;\n"
"uniform float out_res_x;\n"
"uniform float out_res_y;\n"
"uniform float in_res_x;\n"
"uniform float in_res_y;\n"
"uniform float border_on_top;\n"
"#else\n"
"#define box_scale 4.0\n"
"#define location 0.5\n"
"#define out_res_x 1920.0\n"
"#define out_res_y 1080.0\n"
"#define in_res_x 320\n"
"#define in_res_y 240\n"
"#define border_on_top 1.0\n"
"#endif\n"
"// END PARAMETERS //\n"
#include "voronoi.inc"
},
