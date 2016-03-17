{
"// GLSL shader autogenerated by cg2glsl.py.\n"
"#if defined(VERTEX)\n"
"\n"
"#if __VERSION__ >= 130\n"
"#define COMPAT_VARYING out\n"
"#define COMPAT_ATTRIBUTE in\n"
"#define COMPAT_TEXTURE texture\n"
"#else\n"
"#define COMPAT_VARYING varying\n"
"#define COMPAT_ATTRIBUTE attribute\n"
"#define COMPAT_TEXTURE texture2D\n"
"#endif\n"
"\n"
"#ifdef GL_ES\n"
"#define COMPAT_PRECISION mediump\n"
"#else\n"
"#define COMPAT_PRECISION\n"
"#endif\n"
"COMPAT_VARYING     vec2 VARorig_tex;\n"
"COMPAT_VARYING     vec4 _t3;\n"
"COMPAT_VARYING     vec4 _t2;\n"
"COMPAT_VARYING     vec4 _t1;\n"
"COMPAT_VARYING     vec2 _texCoord1;\n"
"COMPAT_VARYING     vec4 _color1;\n"
"COMPAT_VARYING     vec4 _position1;\n"
"COMPAT_VARYING     float _frame_rotation;\n"
"COMPAT_VARYING     vec2 _tex_coord;\n"
"struct orig {\n"
"    vec2 _tex_coord;\n"
"    vec2 _texture_size;\n"
"float _placeholder32;\n"
"};\n"
"struct input_dummy {\n"
"    vec2 _video_size;\n"
"    vec2 _texture_size1;\n"
"    vec2 _output_dummy_size;\n"
"    float _frame_count;\n"
"    float _frame_direction;\n"
"    float _frame_rotation;\n"
"};\n"
"struct out_vertex {\n"
"    vec4 _position1;\n"
"    vec4 _color1;\n"
"    vec2 _texCoord1;\n"
"    vec4 _t1;\n"
"    vec4 _t2;\n"
"    vec4 _t3;\n"
"    vec2 VARorig_tex;\n"
"};\n"
"out_vertex _co1;\n"
"orig _ORIG1;\n"
"vec4 _r0008;\n"
"COMPAT_ATTRIBUTE vec4 VertexCoord;\n"
"COMPAT_ATTRIBUTE vec4 COLOR;\n"
"COMPAT_ATTRIBUTE vec4 TexCoord;\n"
"COMPAT_VARYING vec4 COL0;\n"
"COMPAT_VARYING vec4 TEX0;\n"
"COMPAT_VARYING vec4 TEX1;\n"
"COMPAT_VARYING vec4 TEX2;\n"
" \n"
"uniform mat4 MVPMatrix;\n"
"uniform int FrameDirection;\n"
"uniform int FrameCount;\n"
"uniform COMPAT_PRECISION vec2 OutputSize;\n"
"uniform COMPAT_PRECISION vec2 TextureSize;\n"
"uniform COMPAT_PRECISION vec2 InputSize;\n"
"uniform COMPAT_PRECISION vec2 OrigTextureSize;\n"
"COMPAT_ATTRIBUTE vec2 OrigTexCoord;\n"
"void main()\n"
"{\n"
"    vec2 _ps;\n"
"    _r0008 = VertexCoord.x*MVPMatrix[0];\n"
"    _r0008 = _r0008 + VertexCoord.y*MVPMatrix[1];\n"
"    _r0008 = _r0008 + VertexCoord.z*MVPMatrix[2];\n"
"    _r0008 = _r0008 + VertexCoord.w*MVPMatrix[3];\n"
"    _co1._position1 = _r0008;\n"
"    _co1._color1 = COLOR;\n"
"    _ps = vec2(1.00000000E+00/OrigTextureSize.x, 1.00000000E+00/OrigTextureSize.y);\n"
"    _co1._texCoord1 = TexCoord.xy;\n"
"    VARorig_tex = OrigTexCoord;\n"
"    _co1._t1 = OrigTexCoord.xyyy + vec4(0.00000000E+00, -_ps.y, 0.00000000E+00, _ps.y);\n"
"    _co1._t2 = OrigTexCoord.xxxy + vec4(-_ps.x, 0.00000000E+00, _ps.x, 0.00000000E+00);\n"
"    gl_Position = _r0008;\n"
"    COL0 = COLOR;\n"
"    TEX0.xy = TexCoord.xy;\n"
"    TEX1 = _co1._t1;\n"
"    TEX2 = _co1._t2;\n"
"} \n"
"#elif defined(FRAGMENT)\n"
"\n"
"#if __VERSION__ >= 130\n"
"#define COMPAT_VARYING in\n"
"#define COMPAT_TEXTURE texture\n"
"out vec4 FragColor;\n"
"#else\n"
"#define COMPAT_VARYING varying\n"
"#define FragColor gl_FragColor\n"
"#define COMPAT_TEXTURE texture2D\n"
"#endif\n"
"\n"
"#ifdef GL_ES\n"
"#ifdef GL_FRAGMENT_PRECISION_HIGH\n"
"precision highp float;\n"
"#else\n"
"precision mediump float;\n"
"#endif\n"
"#define COMPAT_PRECISION mediump\n"
"#else\n"
"#define COMPAT_PRECISION\n"
"#endif\n"
"COMPAT_VARYING     vec2 _orig_tex;\n"
"COMPAT_VARYING     vec4 _t3;\n"
"COMPAT_VARYING     vec4 _t2;\n"
"COMPAT_VARYING     vec4 _t1;\n"
"COMPAT_VARYING     vec2 _texCoord;\n"
"COMPAT_VARYING     vec4 _color;\n"
"COMPAT_VARYING     float _frame_rotation;\n"
"COMPAT_VARYING     vec2 _tex_coord;\n"
"struct orig {\n"
"    vec2 _tex_coord;\n"
"    vec2 _texture_size;\n"
"float _placeholder36;\n"
"};\n"
"struct input_dummy {\n"
"    vec2 _video_size;\n"
"    vec2 _texture_size1;\n"
"    vec2 _output_dummy_size;\n"
"    float _frame_count;\n"
"    float _frame_direction;\n"
"    float _frame_rotation;\n"
"};\n"
"struct out_vertex {\n"
"    vec4 _color;\n"
"    vec2 _texCoord;\n"
"    vec4 _t1;\n"
"    vec4 _t2;\n"
"    vec4 _t3;\n"
"    vec2 _orig_tex;\n"
"};\n"
"vec4 _ret_0;\n"
"vec3 _TMP15;\n"
"vec3 _TMP13;\n"
"vec3 _TMP11;\n"
"vec3 _TMP9;\n"
"vec3 _TMP14;\n"
"vec3 _TMP12;\n"
"vec3 _TMP10;\n"
"vec3 _TMP8;\n"
"vec4 _TMP7;\n"
"float _TMP19;\n"
"float _TMP21;\n"
"float _TMP22;\n"
"float _TMP18;\n"
"float _TMP17;\n"
"vec3 _TMP16;\n"
"vec4 _TMP20;\n"
"vec4 _TMP4;\n"
"vec4 _TMP3;\n"
"vec4 _TMP2;\n"
"vec4 _TMP1;\n"
"vec4 _TMP0;\n"
"uniform sampler2D Texture;\n"
"orig _ORIG1;\n"
"input_dummy _IN1;\n"
"vec2 _x0034;\n"
"vec4 _r0046;\n"
"vec4 _r0056;\n"
"vec4 _x0066;\n"
"vec4 _TMP67;\n"
"vec4 _x0074;\n"
"vec4 _TMP75;\n"
"vec4 _x0082;\n"
"vec4 _TMP83;\n"
"vec3 _TMP91;\n"
"vec3 _x0096;\n"
"vec4 _info0098;\n"
"float _x0100;\n"
"float _x0104;\n"
"float _x0108;\n"
"float _x0110;\n"
"float _x0114;\n"
"float _x0118;\n"
"float _x0120;\n"
"float _x0124;\n"
"float _x0128;\n"
"vec4 _info0130;\n"
"float _x0132;\n"
"float _x0136;\n"
"float _x0140;\n"
"float _x0142;\n"
"float _x0146;\n"
"float _x0150;\n"
"float _x0152;\n"
"float _x0156;\n"
"float _x0160;\n"
"vec4 _info0162;\n"
"float _x0164;\n"
"float _x0168;\n"
"float _x0172;\n"
"float _x0174;\n"
"float _x0178;\n"
"float _x0182;\n"
"float _x0184;\n"
"float _x0188;\n"
"float _x0192;\n"
"vec4 _TMP193;\n"
"vec4 _a0196;\n"
"vec4 _TMP197;\n"
"vec4 _a0200;\n"
"float _t0206;\n"
"float _t0210;\n"
"float _t0214;\n"
"float _t0218;\n"
"vec4 _r0222;\n"
"vec4 _TMP231;\n"
"vec4 _a0234;\n"
"COMPAT_VARYING vec4 TEX0;\n"
"COMPAT_VARYING vec4 TEX1;\n"
"COMPAT_VARYING vec4 TEX2;\n"
" \n"
"uniform sampler2D OrigTexture;\n"
"uniform int FrameDirection;\n"
"uniform int FrameCount;\n"
"uniform COMPAT_PRECISION vec2 OutputSize;\n"
"uniform COMPAT_PRECISION vec2 TextureSize;\n"
"uniform COMPAT_PRECISION vec2 InputSize;\n"
"void main()\n"
"{\n"
"    bvec4 _px;\n"
"    vec4 _fx;\n"
"    vec4 _fx_left;\n"
"    vec4 _fx_up;\n"
"    vec2 _fp;\n"
"    vec2 _delta;\n"
"    vec4 _fx45;\n"
"    vec4 _fx30;\n"
"    vec4 _fx60;\n"
"    vec4 _info1;\n"
"    vec4 _maximo;\n"
"    vec3 _res;\n"
"    float _mx;\n"
"    _x0034 = TEX0.xy*TextureSize;\n"
"    _fp = fract(_x0034);\n"
"    _TMP0 = COMPAT_TEXTURE(OrigTexture, TEX1.xy);\n"
"    _TMP1 = COMPAT_TEXTURE(OrigTexture, TEX2.xw);\n"
"    _TMP2 = COMPAT_TEXTURE(OrigTexture, TEX2.yw);\n"
"    _TMP3 = COMPAT_TEXTURE(OrigTexture, TEX2.zw);\n"
"    _TMP4 = COMPAT_TEXTURE(OrigTexture, TEX1.xw);\n"
"    _r0046.x = dot(_TMP0.xyz, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _r0046.y = dot(_TMP1.xyz, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _r0046.z = dot(_TMP4.xyz, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _r0046.w = dot(_TMP3.xyz, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _r0056.x = dot(_TMP2.xyz, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _r0056.y = dot(_TMP2.xyz, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _r0056.z = dot(_TMP2.xyz, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _r0056.w = dot(_TMP2.xyz, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _fx = vec4( 1.00000000E+00, -1.00000000E+00, -1.00000000E+00, 1.00000000E+00)*_fp.y + vec4( 1.00000000E+00, 1.00000000E+00, -1.00000000E+00, -1.00000000E+00)*_fp.x;\n"
"    _fx_left = vec4( 1.00000000E+00, -1.00000000E+00, -1.00000000E+00, 1.00000000E+00)*_fp.y + vec4( 5.00000000E-01, 2.00000000E+00, -5.00000000E-01, -2.00000000E+00)*_fp.x;\n"
"    _fx_up = vec4( 1.00000000E+00, -1.00000000E+00, -1.00000000E+00, 1.00000000E+00)*_fp.y + vec4( 2.00000000E+00, 5.00000000E-01, -2.00000000E+00, -5.00000000E-01)*_fp.x;\n"
"    _delta = vec2(InputSize.x/OutputSize.x, (5.00000000E-01*InputSize.x)/OutputSize.x);\n"
"    _x0066 = ((_fx + _delta.xxxx) - vec4( 1.50000000E+00, 5.00000000E-01, -5.00000000E-01, 5.00000000E-01))/(2.00000000E+00*_delta.xxxx);\n"
"    _TMP20 = min(vec4( 1.00000000E+00, 1.00000000E+00, 1.00000000E+00, 1.00000000E+00), _x0066);\n"
"    _TMP67 = max(vec4( 0.00000000E+00, 0.00000000E+00, 0.00000000E+00, 0.00000000E+00), _TMP20);\n"
"    _x0074 = ((_fx_left + _delta.yxyx) - vec4( 1.00000000E+00, 1.00000000E+00, -5.00000000E-01, 0.00000000E+00))/(2.00000000E+00*_delta.yxyx);\n"
"    _TMP20 = min(vec4( 1.00000000E+00, 1.00000000E+00, 1.00000000E+00, 1.00000000E+00), _x0074);\n"
"    _TMP75 = max(vec4( 0.00000000E+00, 0.00000000E+00, 0.00000000E+00, 0.00000000E+00), _TMP20);\n"
"    _x0082 = ((_fx_up + _delta.xyxy) - vec4( 2.00000000E+00, 0.00000000E+00, -1.00000000E+00, 5.00000000E-01))/(2.00000000E+00*_delta.xyxy);\n"
"    _TMP20 = min(vec4( 1.00000000E+00, 1.00000000E+00, 1.00000000E+00, 1.00000000E+00), _x0082);\n"
"    _TMP83 = max(vec4( 0.00000000E+00, 0.00000000E+00, 0.00000000E+00, 0.00000000E+00), _TMP20);\n"
"    _info1 = COMPAT_TEXTURE(Texture, TEX0.xy);\n"
"    _TMP16 = _info1.xyz*vec3( 2.55000000E+02, 2.55000000E+02, 2.55000000E+02);\n"
"    _x0096 = _TMP16 + 5.00000000E-01;\n"
"    _TMP91 = floor(_x0096);\n"
"    _x0100 = _TMP91.x/2.00000000E+00;\n"
"    if (_x0100 < 0.00000000E+00) { \n"
"        _x0104 = -_x0100;\n"
"        _TMP22 = floor(_x0104);\n"
"        _TMP21 = -_TMP22;\n"
"    } else {\n"
"        _TMP21 = floor(_x0100);\n"
"    } \n"
"    _TMP17 = _x0100 - _TMP21;\n"
"    _x0108 = _TMP17 + 5.00000000E-01;\n"
"    _info0098.w = floor(_x0108);\n"
"    _x0110 = _TMP21/2.00000000E+00;\n"
"    if (_x0110 < 0.00000000E+00) { \n"
"        _x0114 = -_x0110;\n"
"        _TMP22 = floor(_x0114);\n"
"        _TMP21 = -_TMP22;\n"
"    } else {\n"
"        _TMP21 = floor(_x0110);\n"
"    } \n"
"    _TMP18 = _x0110 - _TMP21;\n"
"    _x0118 = _TMP18 + 5.00000000E-01;\n"
"    _info0098.z = floor(_x0118);\n"
"    _x0120 = _TMP21/2.00000000E+00;\n"
"    if (_x0120 < 0.00000000E+00) { \n"
"        _x0124 = -_x0120;\n"
"        _TMP22 = floor(_x0124);\n"
"        _TMP21 = -_TMP22;\n"
"    } else {\n"
"        _TMP21 = floor(_x0120);\n"
"    } \n"
"    _TMP19 = _x0120 - _TMP21;\n"
"    _x0128 = _TMP19 + 5.00000000E-01;\n"
"    _info0098.y = floor(_x0128);\n"
"    _info0098.x = _TMP21;\n"
"    _x0132 = _TMP91.y/2.00000000E+00;\n"
"    if (_x0132 < 0.00000000E+00) { \n"
"        _x0136 = -_x0132;\n"
"        _TMP22 = floor(_x0136);\n"
"        _TMP21 = -_TMP22;\n"
"    } else {\n"
"        _TMP21 = floor(_x0132);\n"
"    } \n"
"    _TMP17 = _x0132 - _TMP21;\n"
"    _x0140 = _TMP17 + 5.00000000E-01;\n"
"    _info0130.w = floor(_x0140);\n"
"    _x0142 = _TMP21/2.00000000E+00;\n"
"    if (_x0142 < 0.00000000E+00) { \n"
"        _x0146 = -_x0142;\n"
"        _TMP22 = floor(_x0146);\n"
"        _TMP21 = -_TMP22;\n"
"    } else {\n"
"        _TMP21 = floor(_x0142);\n"
"    } \n"
"    _TMP18 = _x0142 - _TMP21;\n"
"    _x0150 = _TMP18 + 5.00000000E-01;\n"
"    _info0130.z = floor(_x0150);\n"
"    _x0152 = _TMP21/2.00000000E+00;\n"
"    if (_x0152 < 0.00000000E+00) { \n"
"        _x0156 = -_x0152;\n"
"        _TMP22 = floor(_x0156);\n"
"        _TMP21 = -_TMP22;\n"
"    } else {\n"
"        _TMP21 = floor(_x0152);\n"
"    } \n"
"    _TMP19 = _x0152 - _TMP21;\n"
"    _x0160 = _TMP19 + 5.00000000E-01;\n"
"    _info0130.y = floor(_x0160);\n"
"    _info0130.x = _TMP21;\n"
"    _x0164 = _TMP91.z/2.00000000E+00;\n"
"    if (_x0164 < 0.00000000E+00) { \n"
"        _x0168 = -_x0164;\n"
"        _TMP22 = floor(_x0168);\n"
"        _TMP21 = -_TMP22;\n"
"    } else {\n"
"        _TMP21 = floor(_x0164);\n"
"    } \n"
"    _TMP17 = _x0164 - _TMP21;\n"
"    _x0172 = _TMP17 + 5.00000000E-01;\n"
"    _info0162.w = floor(_x0172);\n"
"    _x0174 = _TMP21/2.00000000E+00;\n"
"    if (_x0174 < 0.00000000E+00) { \n"
"        _x0178 = -_x0174;\n"
"        _TMP22 = floor(_x0178);\n"
"        _TMP21 = -_TMP22;\n"
"    } else {\n"
"        _TMP21 = floor(_x0174);\n"
"    } \n"
"    _TMP18 = _x0174 - _TMP21;\n"
"    _x0182 = _TMP18 + 5.00000000E-01;\n"
"    _info0162.z = floor(_x0182);\n"
"    _x0184 = _TMP21/2.00000000E+00;\n"
"    if (_x0184 < 0.00000000E+00) { \n"
"        _x0188 = -_x0184;\n"
"        _TMP22 = floor(_x0188);\n"
"        _TMP21 = -_TMP22;\n"
"    } else {\n"
"        _TMP21 = floor(_x0184);\n"
"    } \n"
"    _TMP19 = _x0184 - _TMP21;\n"
"    _x0192 = _TMP19 + 5.00000000E-01;\n"
"    _info0162.y = floor(_x0192);\n"
"    _info0162.x = _TMP21;\n"
"    _fx45 = _info0098*_TMP67;\n"
"    _fx30 = _info0130*_TMP75;\n"
"    _fx60 = _info0162*_TMP83;\n"
"    _a0196 = _r0056 - _r0046.wxyz;\n"
"    _TMP193 = abs(_a0196);\n"
"    _a0200 = _r0056 - _r0046.zwxy;\n"
"    _TMP197 = abs(_a0200);\n"
"    _px = bvec4(_TMP193.x <= _TMP197.x, _TMP193.y <= _TMP197.y, _TMP193.z <= _TMP197.z, _TMP193.w <= _TMP197.w);\n"
"    _TMP7 = max(_fx30, _fx60);\n"
"    _maximo = max(_TMP7, _fx45);\n"
"    _t0206 = float(_px.x);\n"
"    _TMP8 = _TMP4.xyz + _t0206*(_TMP3.xyz - _TMP4.xyz);\n"
"    _TMP9 = _TMP2.xyz + _maximo.x*(_TMP8 - _TMP2.xyz);\n"
"    _t0210 = float(_px.y);\n"
"    _TMP10 = _TMP3.xyz + _t0210*(_TMP0.xyz - _TMP3.xyz);\n"
"    _TMP11 = _TMP2.xyz + _maximo.y*(_TMP10 - _TMP2.xyz);\n"
"    _t0214 = float(_px.z);\n"
"    _TMP12 = _TMP0.xyz + _t0214*(_TMP1.xyz - _TMP0.xyz);\n"
"    _TMP13 = _TMP2.xyz + _maximo.z*(_TMP12 - _TMP2.xyz);\n"
"    _t0218 = float(_px.w);\n"
"    _TMP14 = _TMP1.xyz + _t0218*(_TMP4.xyz - _TMP1.xyz);\n"
"    _TMP15 = _TMP2.xyz + _maximo.w*(_TMP14 - _TMP2.xyz);\n"
"    _r0222.x = dot(_TMP9, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _r0222.y = dot(_TMP11, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _r0222.z = dot(_TMP13, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _r0222.w = dot(_TMP15, vec3( 1.43519993E+01, 2.81760006E+01, 5.47200012E+00));\n"
"    _a0234 = _r0222 - _r0056;\n"
"    _TMP231 = abs(_a0234);\n"
"    _res = _TMP9;\n"
"    _mx = _TMP231.x;\n"
"    if (_TMP231.y > _TMP231.x) { \n"
"        _res = _TMP11;\n"
"        _mx = _TMP231.y;\n"
"    } \n"
"    if (_TMP231.z > _mx) { \n"
"        _res = _TMP13;\n"
"        _mx = _TMP231.z;\n"
"    } \n"
"    if (_TMP231.w > _mx) { \n"
"        _res = _TMP15;\n"
"    } \n"
"    _ret_0 = vec4(_res.x, _res.y, _res.z, 1.00000000E+00);\n"
"    FragColor = _ret_0;\n"
"    return;\n"
"} \n"
"#endif\n"
},
