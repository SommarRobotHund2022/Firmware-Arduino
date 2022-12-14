#define BITTLE
//number of skills: 35

const int8_t bdF[] PROGMEM = { 
15, 0, 0, 1,
  56,  56,  72,  72, -21, -21, -35, -35,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   5,   5,   9,   9,
  50,  50,  56,  56,  -4,  -4,  -1,  -1,
  53,  53,  60,  60, -12, -12,  -9,  -9,
  55,  55,  64,  64, -19, -19, -17, -17,
  58,  58,  67,  67, -26, -26, -25, -25,
  60,  60,  70,  70, -33, -33, -32, -32,
  61,  61,  72,  72, -35, -35, -35, -35,
  61,  61,  72,  72, -35, -35, -35, -35,
  61,  61,  72,  72, -35, -35, -35, -35,
};
const int8_t bk[] PROGMEM = { 
22, 0, 0, 1,
  36,  40,  36,  62,   6,  -3,   6,   1,
  34,  47,  32,  63,   7,  -4,   7,   4,
  30,  53,  28,  59,   8,  -3,   9,   9,
  26,  58,  25,  57,  10,  -2,  10,  10,
  22,  57,  26,  55,  12,   2,   6,   8,
  18,  51,  29,  52,  14,   8,   2,   7,
  15,  51,  36,  50,  15,   6,  -2,   6,
  17,  48,  43,  47,   9,   5,  -3,   5,
  21,  45,  49,  44,   5,   5,  -4,   5,
  29,  43,  55,  42,   2,   5,  -3,   5,
  35,  39,  60,  38,  -1,   6,  -1,   6,
  42,  36,  63,  35,  -3,   6,   1,   6,
  49,  32,  62,  31,  -4,   7,   6,   8,
  54,  28,  58,  28,  -3,   9,  10,   9,
  57,  26,  57,  24,   0,  10,   9,  11,
  56,  21,  54,  26,   3,  12,   8,   4,
  51,  17,  52,  31,   8,  15,   6,   1,
  50,  15,  49,  38,   6,  14,   6,  -2,
  47,  18,  47,  44,   5,   8,   5,  -3,
  45,  24,  44,  51,   5,   4,   5,  -4,
  42,  30,  41,  56,   5,   1,   5,  -3,
  38,  37,  37,  60,   6,  -2,   6,  -1,
};
const int8_t bkL[] PROGMEM = { 
24, 0, 0, 1,
  45,  54,  45,  56,  -4, -13,   5, -10,
  44,  61,  43,  58,  -3, -12,   5, -10,
  43,  67,  39,  60,  -3, -10,   6,  -9,
  42,  72,  36,  62,  -3,  -6,   6,  -8,
  41,  70,  32,  62,  -3,   0,   7,  -4,
  40,  63,  30,  60,  -3,   8,   8,  -3,
  38,  58,  26,  58,  -2,  10,  10,  -2,
  37,  56,  21,  57,  -3,   9,  10,  -2,
  36,  54,  22,  56,  -4,   8,   2,  -3,
  39,  52,  28,  55,  -8,   6,  -6,  -3,
  41,  49,  37,  55,  -9,   6, -10,  -3,
  44,  47,  46,  54,  -9,   5, -12,  -3,
  48,  44,  54,  53, -10,   5, -13,  -3,
  49,  42,  61,  52, -10,   5, -12,  -3,
  52,  38,  67,  51, -10,   6, -10,  -4,
  55,  35,  72,  51, -10,   6,  -6,  -4,
  54,  31,  70,  49,  -7,   8,   0,  -4,
  53,  28,  63,  48,  -5,   9,   8,  -4,
  51,  25,  58,  46,  -4,  10,  10,  -4,
  50,  21,  56,  46,  -4,   9,   9,  -5,
  49,  23,  54,  48,  -4,  -1,   8,  -9,
  48,  30,  52,  48,  -4,  -7,   6, -10,
  47,  39,  49,  51,  -4, -11,   6, -10,
  46,  48,  47,  54,  -4, -13,   5, -10,
};
const int8_t crF[] PROGMEM = { 
35, 0, -3, 1,
  52,  56,  47,  53, -12, -16,  -2, -10,
  56,  49,  49,  48, -12, -16,  -2, -10,
  60,  43,  53,  41, -11, -14,  -2,  -9,
  63,  36,  56,  35, -10, -12,  -1,  -6,
  65,  29,  58,  28,  -9,  -9,   1,  -4,
  68,  22,  60,  21,  -7,  -5,   2,   1,
  70,  16,  63,  14,  -5,  -1,   3,   5,
  72,  14,  65,  12,  -2,   1,   6,   9,
  74,  15,  66,  13,   0,   4,   9,  13,
  75,  15,  67,  14,   3,   3,  12,  12,
  76,  21,  69,  19,   3,  -1,  12,   9,
  78,  25,  73,  23,   2,  -3,   8,   6,
  78,  30,  74,  27,  -1,  -6,   5,   3,
  76,  34,  72,  32,  -6,  -8,  -1,   1,
  73,  39,  69,  35, -10,  -9,  -4,   0,
  70,  43,  65,  39, -13, -10,  -7,  -1,
  65,  47,  61,  42, -15, -11,  -9,  -2,
  59,  51,  56,  46, -16, -12, -10,  -2,
  52,  55,  50,  49, -16, -12, -10,  -2,
  46,  58,  44,  52, -15, -11,  -9,  -2,
  39,  62,  38,  55, -13, -10,  -8,  -1,
  32,  65,  31,  58, -11,  -9,  -5,   0,
  25,  67,  25,  60,  -7,  -8,  -2,   1,
  18,  70,  18,  62,  -2,  -5,   3,   3,
  14,  72,  13,  64,   1,  -3,   8,   5,
  14,  73,  13,  66,   3,   0,  10,   8,
  15,  75,  14,  67,   4,   3,  12,  11,
  18,  76,  16,  69,   1,   3,  10,  12,
  23,  78,  21,  71,  -2,   2,   8,  10,
  27,  79,  25,  74,  -4,  -1,   5,   6,
  32,  76,  29,  72,  -6,  -5,   2,   1,
  36,  74,  32,  69,  -8,  -9,   1,  -3,
  41,  70,  36,  66, -10, -12,   0,  -6,
  45,  66,  41,  62, -11, -15,  -1,  -9,
  49,  60,  44,  57, -12, -16,  -2, -10,
};
const int8_t crL[] PROGMEM = { 
28, 0, -3, 1,
  59,  56,  47,  48, -15, -16,  -2,  -9,
  60,  48,  50,  45, -14, -16,  -2,  -8,
  61,  39,  54,  44, -15, -13,  -1,  -8,
  62,  31,  58,  42, -14, -10,   0,  -8,
  63,  22,  60,  41, -14,  -5,   2,  -7,
  64,  14,  63,  38, -13,   0,   4,  -6,
  65,  14,  65,  38, -13,   3,   8,  -5,
  66,  15,  67,  38, -12,   4,  11,  -5,
  66,  21,  69,  39, -12,  -1,  12,  -5,
  67,  26,  74,  40, -12,  -4,   6,  -5,
  66,  32,  73,  41, -12,  -6,   2,  -6,
  65,  38,  69,  42, -13,  -9,  -3,  -6,
  63,  43,  65,  44, -14, -10,  -7,  -6,
  61,  48,  59,  45, -14, -11,  -9,  -6,
  60,  53,  53,  46, -14, -12, -10,  -6,
  59,  58,  45,  47, -15, -11, -10,  -7,
  57,  62,  38,  49, -15, -10,  -8,  -7,
  55,  65,  29,  50, -15,  -9,  -4,  -7,
  53,  69,  21,  51, -15,  -6,   1,  -7,
  51,  71,  13,  51, -15,  -4,   7,  -7,
  51,  73,  13,  53, -15,   0,  10,  -7,
  51,  75,  14,  54, -15,   3,  12,  -7,
  52,  76,  19,  54, -15,   3,   9,  -7,
  53,  79,  24,  55, -15,  -1,   5,  -9,
  54,  76,  29,  54, -15,  -5,   2,  -9,
  55,  73,  34,  52, -15, -10,   1,  -9,
  57,  68,  39,  51, -15, -14,  -1,  -9,
  58,  62,  43,  49, -15, -16,  -2,  -9,
};
const int8_t mhF[] PROGMEM = { 
34, 0, 10, 1,
  41,  49,  65,  74,  16,   1,  12,   0,
  43,  44,  66,  71,  17,   1,  14,  -4,
  45,  39,  67,  68,  18,   2,  18,  -7,
  47,  33,  67,  63,  19,   4,  22,  -8,
  49,  27,  68,  59,  20,   7,  24, -10,
  51,  21,  68,  53,  22,  10,  30, -10,
  52,  14,  67,  48,  24,  17,  34,  -9,
  53,  11,  65,  44,  28,  26,  41,  -2,
  54,  12,  63,  45,  31,  29,  50,   3,
  54,  16,  60,  48,  36,  24,  60,   2,
  58,  20,  62,  51,  32,  22,  60,   2,
  65,  24,  72,  54,  21,  20,  45,   2,
  65,  26,  75,  56,  17,  19,  37,   3,
  64,  30,  77,  58,  12,  17,  26,   5,
  61,  33,  78,  60,   8,  17,  17,   7,
  58,  36,  77,  63,   5,  16,  12,   7,
  54,  39,  77,  64,   3,  16,   5,  10,
  50,  41,  76,  65,   1,  16,  -1,  12,
  45,  44,  72,  66,   1,  17,  -3,  15,
  40,  46,  69,  67,   2,  18,  -6,  19,
  34,  48,  64,  69,   3,  19,  -8,  20,
  28,  49,  59,  68,   6,  21,  -9,  26,
  21,  51,  54,  67,  10,  23, -10,  31,
  15,  52,  49,  67,  17,  26,  -9,  36,
  12,  53,  45,  65,  23,  29,  -4,  43,
  10,  54,  43,  62,  30,  32,   3,  52,
  14,  54,  46,  61,  27,  37,   3,  59,
  18,  61,  50,  65,  23,  28,   1,  55,
  23,  66,  53,  73,  20,  20,   2,  43,
  26,  65,  55,  75,  19,  16,   3,  34,
  29,  63,  58,  77,  18,  12,   5,  24,
  32,  61,  60,  78,  17,   8,   7,  16,
  35,  58,  62,  78,  16,   5,   6,  10,
  38,  54,  64,  77,  16,   2,   9,   5,
};
const int8_t mhL[] PROGMEM = { 
33, 0, 10, 1,
  46,  46,  65,  71,  11,   1,  12,  -2,
  47,  41,  66,  70,  11,   2,  15,  -3,
  47,  35,  67,  69,  11,   3,  18,  -4,
  48,  29,  69,  68,  12,   6,  20,  -5,
  48,  23,  68,  67,  12,   9,  26,  -6,
  50,  16,  68,  65,  12,  13,  30,  -7,
  50,   9,  67,  63,  13,  21,  36,  -6,
  51,   5,  65,  61,  13,  31,  43,  -3,
  52,   7,  62,  60,  13,  33,  52,  -1,
  52,  12,   0,  60,  14,  27,  90,  -1,
  54,  16,  65,  63,  13,  24,  55,  -2,
  56,  20,  73,  63,   9,  22,  43,  -1,
  55,  24,  76,  64,   8,  20,  31,  -1,
  54,  26,  78,  65,   7,  19,  22,   0,
  52,  30,  77,  65,   7,  17,  15,   1,
  51,  33,  77,  66,   6,  17,   9,   1,
  49,  37,  76,  66,   6,  16,   2,   2,
  48,  39,  73,  67,   5,  16,  -1,   3,
  47,  42,  70,  67,   5,  16,  -5,   4,
  45,  45,  67,  68,   5,  17,  -8,   5,
  44,  47,  62,  68,   5,  18,  -9,   5,
  42,  48,  57,  69,   5,  19, -10,   7,
  39,  50,  49,  69,   7,  21,  -9,   8,
  37,  52,  46,  70,   9,  24,  -5,   9,
  37,  53,  44,  70,  11,  27,   1,  10,
  38,  54,  46,  70,  11,  30,   3,  11,
  39,  57,  50,  72,  11,  29,   1,  11,
  39,  64,  53,  74,  11,  19,   2,   7,
  41,  64,  56,  74,  10,  13,   3,   7,
  42,  62,  58,  74,  10,   9,   5,   5,
  43,  59,  60,  73,  11,   6,   7,   3,
  44,  55,  63,  72,  11,   3,   7,   1,
  44,  51,  64,  72,  11,   2,   9,  -1,
};
const int8_t pcF[] PROGMEM = { 
15, 0, 0, 1,
  42,  60,  49,  70,   9, -25,  10, -24,
  49,  21,  55,  32,  10, -13,  13, -19,
  55,  -5,  59,   6,  14,  17,  19,   6,
  59,  -1,  60,  10,  20,  32,  29,  22,
  60,  11,  58,  21,  32,  22,  46,  15,
  77,  22,  74,  31,  22,  15,  37,  11,
  86,  33,  87,  41,  -9,  10,   0,   9,
  64,  41,  73,  48, -25,   9, -23,   9,
  25,  49,  36,  54, -15,  10, -21,  13,
  -5,  55,   6,  58,  16,  13,   5,  19,
  -1,  59,   9,  60,  31,  19,  21,  28,
  11,  59,  20,  56,  22,  33,  16,  47,
  22,  74,  31,  70,  15,  25,  11,  41,
  32,  87,  40,  87,  10,  -7,   9,   3,
  41,  66,  47,  74,   9, -25,   9, -22,
};
const int8_t trF[] PROGMEM = { 
21, 0, 0, 1,
  41,  47,  52,  59,  10,   0,  14,   3,
  46,  35,  55,  49,  11,   2,  17,   0,
  51,  21,  58,  38,  13,   9,  23,   1,
  54,  11,  58,  30,  16,  16,  30,   3,
  57,   8,  58,  26,  21,  22,  40,  10,
  57,   8,  54,  25,  28,  25,  51,  13,
  60,   9,  57,  27,  26,  25,  48,  14,
  62,  16,  61,  33,  22,  20,  43,  12,
  65,  24,  64,  39,  16,  15,  36,  11,
  60,  31,  65,  45,   7,  12,  18,  11,
  52,  38,  61,  50,   2,  11,   8,  13,
  42,  44,  55,  54,   0,  11,   1,  16,
  28,  49,  44,  57,   5,  12,   0,  20,
  13,  53,  31,  58,  14,  15,   3,  27,
   9,  56,  27,  58,  18,  19,   7,  36,
   8,  57,  25,  55,  24,  27,  12,  49,
   8,  58,  26,  56,  26,  27,  14,  49,
  12,  62,  29,  61,  23,  22,  13,  43,
  20,  64,  36,  63,  17,  19,  11,  39,
  27,  62,  42,  65,  14,  10,  10,  24,
  35,  55,  48,  63,  11,   3,  12,  12,
};
const int8_t trL[] PROGMEM = { 
22, 0, 0, 1,
  47,  52,  50,  52,   7,   2,  13,   5,
  48,  41,  53,  49,   8,   0,  15,   3,
  50,  26,  55,  45,   8,   6,  18,   3,
  51,  11,  57,  42,   8,  16,  21,   3,
  52,   8,  58,  41,   9,  24,  27,   5,
  54,   9,  59,  40,  10,  25,  33,   7,
  55,  14,  56,  41,  10,  22,  43,   7,
  55,  20,  57,  42,  11,  17,  46,   7,
  57,  26,  62,  44,   9,  14,  39,   7,
  58,  31,  63,  46,   8,  12,  36,   7,
  56,  36,  66,  47,   6,  11,  20,   7,
  52,  41,  61,  48,   5,  10,   8,   8,
  49,  45,  54,  50,   3,  11,   0,   8,
  45,  49,  41,  51,   3,  12,   0,   8,
  41,  52,  26,  52,   3,  14,   5,   9,
  40,  55,  24,  53,   3,  16,  11,   9,
  39,  57,  23,  54,   7,  20,  16,  10,
  40,  57,  27,  55,   7,  27,  14,  11,
  42,  58,  33,  56,   7,  27,  12,  11,
  43,  62,  38,  57,   7,  22,  11,  10,
  45,  64,  42,  58,   7,  19,  10,   8,
  46,  61,  47,  56,   7,   8,  11,   6,
};
const int8_t vt[] PROGMEM = { 
15, 0, 0, 1,
  48,  39,  63,  52, -10,   7,  -8,   9,
  41,  39,  55,  52,   3,   7,   5,   9,
  39,  39,  52,  52,   7,   7,   9,   9,
  39,  39,  52,  52,   7,   7,   9,   9,
  39,  46,  52,  61,   7,  -6,   9,  -5,
  39,  52,  52,  69,   7, -19,   9, -17,
  39,  53,  52,  72,   7, -22,   9, -20,
  39,  48,  52,  63,   7, -10,   9,  -8,
  39,  41,  52,  55,   7,   3,   9,   5,
  39,  39,  52,  52,   7,   7,   9,   9,
  39,  39,  52,  52,   7,   7,   9,   9,
  43,  39,  57,  52,   0,   7,   2,   9,
  49,  39,  65,  52, -13,   7, -11,   9,
  53,  39,  72,  52, -22,   7, -20,   9,
  51,  39,  67,  52, -16,   7, -14,   9,
};
const int8_t wkF[] PROGMEM = { 
53, 0, 0, 1,
   6,  44,  47,  40,  35,  29,   7,  23,
   8,  45,  31,  42,  33,  30,  11,  24,
   9,  45,  16,  42,  32,  31,  20,  24,
  12,  46,  13,  44,  31,  32,  23,  26,
  14,  46,  10,  44,  29,  33,  29,  26,
  16,  47,  10,  45,  28,  34,  30,  27,
  18,  47,   9,  46,  27,  37,  34,  28,
  20,  47,  11,  48,  26,  38,  34,  27,
  22,  48,  10,  49,  24,  40,  37,  28,
  23,  47,  13,  49,  23,  43,  33,  29,
  25,  48,  15,  50,  23,  45,  32,  31,
  26,  45,  17,  50,  22,  51,  31,  32,
  28,  47,  19,  50,  21,  51,  29,  33,
  30,  48,  20,  51,  21,  51,  29,  35,
  30,  52,  22,  51,  23,  47,  28,  37,
  32,  55,  24,  51,  22,  41,  27,  40,
  33,  58,  25,  51,  22,  35,  27,  42,
  34,  59,  27,  51,  22,  33,  26,  44,
  36,  57,  28,  50,  22,  17,  26,  47,
  37,  49,  30,  50,  22,   8,  25,  51,
  39,  37,  32,  51,  22,   6,  24,  52,
  39,  20,  34,  54,  23,  13,  22,  47,
  41,  13,  36,  59,  23,  18,  22,  41,
  42,   9,  36,  61,  24,  24,  22,  38,
  42,   8,  38,  63,  24,  28,  22,  32,
  44,   7,  39,  61,  26,  31,  23,  16,
  43,   6,  40,  52,  28,  35,  23,   9,
  44,   8,  42,  39,  30,  33,  24,   9,
  45,   9,  42,  23,  30,  32,  24,  14,
  45,  12,  44,  15,  32,  31,  26,  20,
  46,  14,  44,  13,  33,  29,  26,  23,
  47,  16,  45,   9,  33,  28,  27,  31,
  47,  18,  46,   9,  36,  27,  28,  32,
  47,  20,  48,  10,  38,  26,  27,  36,
  48,  22,  49,  10,  39,  24,  28,  37,
  48,  23,  49,  10,  41,  23,  29,  37,
  48,  25,  50,  14,  44,  23,  31,  32,
  47,  26,  50,  16,  47,  22,  32,  31,
  45,  28,  50,  18,  53,  21,  33,  30,
  47,  30,  51,  20,  51,  21,  35,  29,
  50,  30,  51,  22,  47,  23,  37,  28,
  52,  32,  51,  23,  47,  22,  40,  27,
  57,  33,  51,  24,  39,  22,  42,  27,
  59,  34,  51,  26,  33,  22,  44,  26,
  59,  36,  50,  28,  23,  22,  47,  25,
  54,  37,  50,  29,  12,  22,  51,  26,
  43,  39,  51,  31,   7,  22,  52,  24,
  28,  39,  54,  34,   9,  23,  47,  22,
  14,  41,  59,  35,  17,  23,  41,  22,
  11,  42,  61,  36,  21,  24,  38,  22,
   8,  42,  63,  37,  26,  24,  32,  22,
   6,  44,  61,  39,  30,  26,  16,  22,
   6,  43,  52,  39,  34,  28,   9,  23,
};
const int8_t wkL[] PROGMEM = { 
38, 0, 0, 1,
  38,  44,  51,  40,  16,  34,   6,  16,
  38,  45,  38,  41,  16,  37,   7,  16,
  39,  45,  24,  41,  16,  38,  12,  16,
  40,  46,  15,  42,  16,  41,  20,  16,
  41,  46,  10,  42,  16,  44,  29,  17,
  41,  44,   9,  43,  16,  51,  34,  17,
  42,  43,   8,  43,  16,  56,  40,  17,
  42,  48,  11,  44,  17,  51,  38,  17,
  42,  54,  15,  45,  17,  44,  33,  17,
  43,  58,  18,  45,  17,  35,  32,  17,
  44,  61,  21,  45,  17,  23,  30,  18,
  45,  56,  22,  46,  17,  12,  30,  18,
  45,  48,  25,  47,  17,   5,  29,  18,
  45,  36,  27,  48,  18,   5,  28,  19,
  46,  21,  30,  49,  18,  11,  27,  17,
  47,  12,  31,  50,  18,  19,  27,  15,
  47,   8,  34,  52,  19,  26,  27,  13,
  48,   6,  35,  50,  19,  34,  27,  12,
  48,   6,  37,  47,  19,  37,  27,  11,
  48,   9,  38,  43,  19,  36,  28,  11,
  49,  11,  41,  39,  20,  34,  27,  11,
  49,  14,  43,  34,  20,  32,  28,  12,
  49,  17,  44,  32,  21,  31,  30,  14,
  50,  19,  45,  31,  21,  29,  30,  16,
  49,  22,  46,  30,  24,  28,  32,  17,
  50,  24,  47,  30,  26,  27,  34,  19,
  53,  27,  47,  31,  22,  26,  38,  19,
  53,  28,  48,  32,  22,  26,  39,  17,
  55,  31,  47,  33,  17,  24,  43,  17,
  54,  33,  47,  35,  16,  24,  47,  16,
  52,  35,  47,  35,  13,  24,  51,  16,
  48,  35,  46,  35,  12,  27,  55,  16,
  45,  37,  49,  36,  11,  27,  55,  16,
  41,  39,  55,  37,  10,  29,  47,  16,
  39,  40,  61,  38,  11,  30,  38,  16,
  39,  42,  64,  38,  12,  30,  29,  16,
  38,  43,  62,  39,  14,  32,  14,  16,
  38,  44,  54,  40,  16,  33,   8,  16,
};
const int8_t wkS[] PROGMEM = { 
17, 0, 0, 1,
  33,  43,  57,  45,  15,  17,  -8,  17,
  35,  45,  43,  45,  16,  17,  -5,  17,
  36,  45,  36,  46,  16,  17,  13,  18,
  38,  46,  38,  47,  16,  18,  16,  18,
  38,  56,  40,  48,  16,  14,  16,  19,
  40,  64,  41,  49,  16,  -3,  16,  20,
  41,  54,  42,  54,  16,  -9,  16,  20,
  42,  39,  42,  68,  16,  -5,  17,   1,
  43,  33,  44,  61,  17,  12,  17,  -7,
  44,  35,  45,  46,  17,  16,  17,  -6,
  45,  36,  45,  36,  17,  16,  18,   9,
  46,  37,  47,  38,  18,  16,  18,  16,
  51,  38,  48,  39,  19,  16,  19,  16,
  65,  39,  48,  41,   0,  16,  19,  16,
  58,  41,  52,  41,  -8,  16,  20,  16,
  42,  42,  67,  42,  -8,  16,   5,  17,
  33,  42,  65,  44,   9,  17,  -5,  17,
};

const int8_t balance[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,};
const int8_t buttUp[] PROGMEM = { 
1, 0, 15, 1,
   20,  40,   0,   0,   5,   5,   3,   3,  90,  90,  45,  45, -60, -60,   5,   5,};
const int8_t calib[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,};
const int8_t dropped[] PROGMEM = { 
1, 0, -75, 1,
    0,  30,   0,   0,  -5,  -5,  15,  15, -75, -75,  45,  45,  60,  60, -30, -30,};
const int8_t lifted[] PROGMEM = { 
1, 0, 75, 1,
    0, -20,   0,   0,   0,   0,   0,   0,  60,  60,  75,  75,  45,  45,  75,  75,};
const int8_t rest[] PROGMEM = { 
1, 0, 0, 1,
  -30, -80, -45,   0,  -3,  -3,   3,   3,  75,  75,  75,  75, -55, -55, -55, -55,};
const int8_t sit[] PROGMEM = { 
1, 0, -30, 1,
    0,   0, -45,   0,  -5,  -5,  20,  20,  45,  45, 105, 105,  45,  45, -45, -45,};
const int8_t str[] PROGMEM = { 
1, 0, 20, 1,
    0,  30,   0,   0,  -5,  -5,   0,   0, -75, -75,  30,  30,  60,  60,   0,   0,};
const int8_t zero[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,};

const int8_t bf[] PROGMEM = { 
-9, 0, 0, 2,
 5, 8, 1, 
    0,   0,   0,   0,   0,   0,   0,   0,  37,  37,  37,  37, -28, -28, -20, -20,	10, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15, -10, -10, -28, -28,  30,  30,	 0, 4, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15,   2,   2,  30,  30,  20,  20,	 0, 2, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  12,  12,  22,  22,  30,  30,  17,  17,	 0, 1, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  22,  22,  30,  30,  15,  15,	 0, 0,-1,-10,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  55,  55, -28, -28,  50,  50,	 0, 3, 0,125,
    0,   0,   0,   0,   0,   0,   0,   0, -10, -10,  50,  50, -38, -38, -30, -30,	 0, 3, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  22,  22,  63,  63,   0,   0, -35, -35,	 0, 3, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 0, 0, 0,
};
const int8_t ck[] PROGMEM = { 
-3, 0, 0, 1,
 0, 1, 2, 
   45,   0,   0,   0,   0,   0,   0,   0,  45,  35,  38,  50, -30, -10,   0, -20,	 6, 1, 0, 0,
  -45,   0,   0,   0,   0,   0,   0,   0,  35,  45,  50,  38, -10, -30, -20,   0,	 6, 1, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t climbCeil[] PROGMEM = { 
-22, 0, 0, 2,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  22,  22,  52,  52,  22,  22, -23, -23,	 8, 4, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -45,  10,  52,  37,  22,  45, -23, -15,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -50,  10,  52,  37,  15,  45, -23, -15,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -64,  10,  52,  37,  15,  45, -23, -15,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -64,  10,  52,  37,  42,  45, -23, -15,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -64, -50,  52,  37,  42,  45, -23, -15,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -64, -50,  52,  37,  42,  22, -23, -15,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -64, -64,  35,  37,  42,  42, -10, -10,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -40, -40,  63,  63,   5,   5, -40, -40,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -40, -40,  -8,  -8,   5,   5,  35,  35,	 8, 3, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -35, -35,  15,  15,  -5,  -5,  35,  35,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25,  63,  63, -25, -25,  45,  45,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25,  63, -10, -25, -25,  45,  45,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25,  63, -10, -25, -25,  45,  20,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25,  63, -10, -25, -25,  45,  45,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25,  63, -10, -25, -25,   0,  45,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25, -10, -10, -25, -25,   0,  45,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25, -10, -10, -25, -25,  45,  45,	 8, 2, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 4, 0, 0,
  -40,  10,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 4, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 0, 0, 0,
};
const int8_t fd[] PROGMEM = { 
-3, 0, 0, 1,
 0, 0, 0, 
  -30, -80, -45,   0,  -3,  -3,   3,   3,  70,  70,  70,  70, -55, -55, -55, -55,	 5, 0, 0, 0,
  -30, -80, -45,   0, -90, -90,   3,   3,  60,  60, -80, -80, -65, -65,  70,  70,	 5, 0, 0, 0,
    0,   0,   0,   0, -90, -90, -90, -90,  60,  60, -63, -63, -68, -68,  30,  30,	 4,10, 0, 0,
};
const int8_t hi[] PROGMEM = { 
-4, 0, 0, 1,
 1, 2, 3, 
    0, -20, -60,   0,   0,   0,   0,   0,  35,  30, 120, 105,  75,  60, -40, -30,	 4, 2, 0, 0,
   35,  -5, -60,   0,   0,   0,   0,   0, -75,  30, 125,  95,  40,  75, -45, -30,	10, 0, 0, 0,
   40,   0, -35,   0,   0,   0,   0,   0, -60,  30, 125,  95,  60,  75, -45, -30,	10, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t jy[] PROGMEM = { 
-4, 0, 0, 1,
 1, 2, 2, 
    0, -20, -60,   0,   0,   0,   0,   0,  30,  30, 110, 125,  60,  60, -40, -50,	 4, 1, 0, 0,
   40,   0, -35,   0,   0,   0,   0,   0,  30, -60, 110, 125,  60, -10, -30, -45,	16, 0, 0, 0,
   65,  -5, -60,   0,   0,   0,   0,   0,  30,  10, 110, 125,  60, -60, -30, -40,	16, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t pd[] PROGMEM = { 
-8, 0, 0, 1,
 4, 5, 2, 
    0,   0, -45,   0,  -5,  -5,  20,  20,  45,  45, 105, 105,  45,  45, -45, -45,	 8, 0, 0, 0,
    0,   0,   0,   0,  -5,  -5,  20,  20,  30, -80, 105,  15,  45,  80, -45,  80,	 8, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  25, -60,  30,  30,  45,	 8, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,  25, -60,   0, -60,  45,	 8,20, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,  25, -60,   0, -60,  45,	30, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,  25, -60,   0, -60,  30,	30, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,  25, -60,   0, -60,  45,	16,20, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t pee[] PROGMEM = { 
-5, 0, 0, 1,
 2, 3, 3, 
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40,  90,  45,  10,  60,  70,  45,	 6, 0, 0, 0,
   45,  20,   0,   0,  15, -10,  60, -10,  60,  53, 115,  60, -30,  40,  50,  21,	 2,10, 0, 0,
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40,  90,  45,  10,  50,  70,  45,	16, 0, 0, 0,
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40, 103,  45,  10,  50,  80,  45,	16, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t pu[] PROGMEM = { 
-9, 0, 0, 1,
 6, 7, 3, 
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 5, 0, 0, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  30,  35,  40,  29,  50,  15,  15,  15,	 5, 0, 0, 0,
   30,   0,   0,   0,   0,   0,   0,   0,  27,  35,  40,  60,  50,  15,  20,  45,	 5, 0, 0, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  45,  35,  40,  60,  25,  20,  20,  60,	 5, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  50,  35,  75,  60,  20,  30,  20,  60,	 6, 0, 0, 0,
  -15,   0,   0,   0,   0,   0,   0,   0,  60,  60,  70,  70,  15,  15,  60,  60,	 6, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  95,  95,  60,  60,  60,  60,	 6, 1, 0, 0,
   30,   0,   0,   0,   0,   0,   0,   0,  75,  70,  80,  80, -50, -50,  60,  60,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t rc[] PROGMEM = { 
-4, 0, 0, 2,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0, -88, -43,  67, 100,  42, -35,  42,  42,	15, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -83, -88, 100,  60,  42,  42,  42,  50,	15, 0, 0, 0,
   -8, -20, -11,   0,  -1,  -1,   0,   0,  18,  18,  18,  18, -14, -14, -14, -14,	10, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 0, 0, 0,
};
const int8_t rt[] PROGMEM = { 
-6, 0, 0, 1,
 0, 5, 3, 
  -30, -80, -45,   0,  30, -30,  10, -30,  38,  20, -30,  43,  25,  10,  65,  17,	 1, 0, 0, 0,
  -30, -80, -45,   0, -30,  30, -30,  10,  20,  38,  43, -30,  10,  25,  17,  65,	 1, 0, 0, 0,
  -30, -80, -45,   0,  30, -30, -30,  30,  30,  40,  40,  30,  30,  10,  10,  30,	 1, 0, 0, 0,
  -30, -80, -45,   0,   0,   0,   0,   0,  45,  45,  45,  45,  30,  30,  30,  30,	 1, 0, 0, 0,
  -30, -80, -45,   0, -30,  30,  30, -30,  40,  30,  30,  40,  10,  30,  30,  10,	 1, 0, 0, 0,
  -30, -80, -45,   0,   0,   0,   0,   0,  15,  15,  15,  15,  30,  30,  30,  30,	 1, 0, 0, 0,
};
const int8_t stp[] PROGMEM = { 
-23, 0, 0, 1,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0,  25,  40,  30,  40,  40,  20,  30,  20,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  25,  35,  35,  -5,  40,  25,  25,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  45,  25,  35,  -5, -70,  35,  25,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -70,  25,  35,  -5,  45,  35,  25,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -50,  25,  30,  30,  70,  35,  30,  30,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -50,  45,  25,  30,  70,   0,  35,  30,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -40,  60,  20,  25,  70, -75,  50,  35,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -45, -60,  35,  35,  50,  35,  50,  35,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -45, -40,  35,  35,  50,  65,  50,  35,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  40,  50,  50,  60,  60,  90,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  50,  65,  15,  60,  30,  40,  75,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  60,  80,  10,  60,  20,  60,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  60,  80,  15,  60,  30,  65,  80,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -15,  60,  80,  35,  50,  70,  65,  55,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  55, 125,  40,  30,  55,  65,  60,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  55, 115,  40,  30,  55, -85,  60,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5,  55,  60,  40,  35,  55, -60,  60,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5,  70,  60,  35,  35, -30, -20,  75,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5, -15,  60,  35,  35,  35, -20,  75,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  80,  90,  35,  30, -60,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  70, 125,  45,  30, -45,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  70,  60,  45,  30, -45, -45,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
  const char* skillNameWithType[]={"bdFI","bkI","bkLI","crFI","crLI","mhFI","mhLI","pcFI","trFI","trLI","vtI","wkFI","wkLI","wkSI","balanceI","buttUpI","calibI","droppedI","liftedI","restI","sitI","strI","zeroN","bfI","ckI","climbCeilI","fdI","hiI","jyI","pdI","peeI","puI","rcI","rtI","stpI",};
#if !defined(MAIN_SKETCH) || !defined(I2C_EEPROM)
		//if it's not the main sketch to save data or there's no external EEPROM, 
		//the list should always contain all information.
  const int8_t* progmemPointer[] = {bdF, bk, bkL, crF, crL, mhF, mhL, pcF, trF, trL, vt, wkF, wkL, wkS, balance, buttUp, calib, dropped, lifted, rest, sit, str, zero, bf, ck, climbCeil, fd, hi, jy, pd, pee, pu, rc, rt, stp, };
#else	//only need to know the pointers to newbilities, because the intuitions have been saved onto external EEPROM,
	//while the newbilities on progmem are assigned to new addresses
  const int8_t* progmemPointer[] = {zero, };
#endif
//the total byte of instincts is 5296
//the maximal array size is 429 bytes of wkF. 
//Make sure to leave enough memory for SRAM to work properly. Any single skill should be smaller than 400 bytes for safety.
