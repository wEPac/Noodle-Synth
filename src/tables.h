//  Tables V2

#ifndef _TABLES
#define _TABLES

// This table id compatible with 20000.00 Hz. sampling rate
// Envelope frequency tuning word vs. MIDI range value [0-127]
const uint16_t PROGMEM EFTWS[] = {
  0x0371,0x0340,0x0311,0x02E5,0x02BB,0x0294,0x026F,0x024C,0x022B,0x020C,0x01EE,0x01D3,0x01B8,0x01A0,0x0188,0x0172,
  0x015D,0x014A,0x0137,0x0126,0x0115,0x0106,0x00F7,0x00E9,0x00DC,0x00D0,0x00C4,0x00B9,0x00AE,0x00A5,0x009B,0x0093,
  0x008A,0x0083,0x007B,0x0074,0x006E,0x0068,0x0062,0x005C,0x0057,0x0052,0x004D,0x0049,0x0045,0x0041,0x003D,0x003A,
  0x0037,0x0034,0x0031,0x002E,0x002B,0x0029,0x0026,0x0024,0x0022,0x0020,0x001E,0x001D,0x001B,0x001A,0x0018,0x0017,
  0x0015,0x0014,0x0013,0x0012,0x0011,0x0010,0x000F,0x000E,0x000D,0x000D,0x000C,0x000B,0x000A,0x000A,0x0009,0x0009,
  0x0008,0x0008,0x0007,0x0007,0x0006,0x0006,0x0006,0x0005,0x0005,0x0005,0x0004,0x0004,0x0004,0x0004,0x0003,0x0003,
  0x0003,0x0003,0x0003,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
  0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

// Voice frequency tuning word vs. MIDI note [0-127]
const uint16_t PROGMEM PITCHS[] = {
  0x001A,0x001C,0x001E,0x001F,0x0021,0x0023,0x0025,0x0028,0x002A,0x002D,0x002F,0x0032,0x0035,0x0038,0x003C,0x003F,
  0x0043,0x0047,0x004B,0x0050,0x0055,0x005A,0x005F,0x0065,0x006B,0x0071,0x0078,0x007F,0x0087,0x008F,0x0097,0x00A0,
  0x00AA,0x00B4,0x00BE,0x00CA,0x00D6,0x00E3,0x00F0,0x00FE,0x010E,0x011E,0x012F,0x0141,0x0154,0x0168,0x017D,0x0194,
  0x01AC,0x01C6,0x01E1,0x01FD,0x021C,0x023C,0x025E,0x0282,0x02A8,0x02D0,0x02FB,0x0329,0x0359,0x038C,0x03C2,0x03FB,
  0x0438,0x0478,0x04BC,0x0504,0x0550,0x05A1,0x05F7,0x0652,0x06B2,0x0718,0x0784,0x07F6,0x0870,0x08F0,0x0978,0x0A08,
  0x0AA1,0x0B43,0x0BEF,0x0CA4,0x0D65,0x0E31,0x0F09,0x0FED,0x10E0,0x11E1,0x12F1,0x1411,0x1543,0x1687,0x17DE,0x1949,
  0x1ACA,0x1C62,0x1E12,0x1FDB,0x21C0,0x23C2,0x25E3,0x2823,0x2A86,0x2D0E,0x2FBC,0x3292,0x3594,0x38C4,0x3C24,0x3FB7,
  0x4381,0x4785,0x4BC6,0x5047,0x550D,0x5A1C,0x5F78,0x6525,0x6B29,0x7188,0x7848,0x7F6F,0x8703,0x8F0A,0x978C,0xA08F,
};

// 1/4 sinusoid, keep missing parts with symetries
// new values
const int8_t PROGMEM SinTable[] = {
  //    1     2     3     4     5     6     7     8     9     10    11    12    13    14    15
  0,    3,    6,    9,    12,   15,   18,   21,   24,   28,   31,   34,   37,   40,   43,   46,   //  0~15
  48,   51,   54,   57,   60,   63,   65,   68,   71,   73,   76,   78,   81,   83,   85,   88,   // 16~31
  90,   91,   94,   96,   98,   100,  102,  104,  106,  108,  109,  111,  112,  114,  115,  117,  // 32~47
  118,  119,  120,  121,  122,  123,  124,  124,  125,  126,  126,  127,  127,  127,  127,  127,  // 48~63
};

// TriangleTable made by calcul  
//  127    /\     
//  0___  /  \    
//            \  /
//  -127       \/

// SquareTable made by calcul   
//  127   |---|    
//  0___  |   |   
//            |   |
//  -127      |---| 

// SawTable made by calcul  
//  127   |\     
//  0___  |  \    
//             \  |
// -128          \|

// RampTable made by calcul  
//  127          /|
//  0___       /  |  
//        |  /
// -128   |/

// 1/4 NoiseTable, keep missing parts with symetries (same than sinusoid ones)
const int8_t PROGMEM NoiseTable[] = {
  //    1     2     3     4     5     6     7     8     9     10    11    12    13    14    15
	-62, -72,  -92,  -98,   98,  -103,  96,  -89,  -29,  -55,   98,  -8,   -118,  12,   11,  -1,    //  0~15
	76,  -8,   -116,  51,   33,  -85,  -43,  -16,  -114, -47,  -63,  -113,  109, -39,  -127, -59,   // 16~31
	0,    118,  70,   62,   54,   85,   51,   122,  60,   30,  -126, -25,   71,  -82,  -11,   64,   // 32~47
	-95, -110,  127,  37,  -14,  -57,   51,	 -4,   -47,  -80,   110,  7,   -117,  89,   65,  -58,   // 48~63
};

const uint8_t PROGMEM Env0[]=
{
	255,	//254,	254,	254,	//  3
	253,	//253,	253,	252,	//  7
	252,	//251,	251,	250,	//  11
	249,	//248,	248,	247,	//  15
	246,	//245,	241,	237,	//  19
	232,	//228,	223,	219,	//  23
	215,	//210,	205,	200,	//  27
	195,	//189,	184,	179,	//  31
	173,	//168,	163,	157,	//  35
	151,	//145,	139,	133,	//  39
	127,	//121,	115,	110,	//  43
	105,	//101,	96, 	91,	  //  47
	86,	  //82,	  77,	  72,	  //  51
	69,	  //65,	  62,	  58,	  //  55
	54,	  //51,	  47,	  44,	  //  59
	41,	  //38,	  36,	  33,	  //  63
	31,	  //28,	  26,	  23,	  //  67
	20,	  //19,	  18,	  17,	  //  71
	15,	  //14,	  13,	  12,	  //  75
	10,	  //9,	  9,	  9,	  //  79
	8,	  //8,	  7,	  7,	  //  83
	6,	  //6,	  6,	  6,	  //  87
	5,	  //5,	  5,	  5,	  //  91
	5,	  //5,	  5,	  5,	  //  95
	5,	  //4,	  4,	  4,	  //  99
	4,	  //4,	  4,	  3,	  //  103
	3,	  //3,	  2,	  2,	  //  107
	2,	  //1,	  1,	  1,	  //  111
	1,	  //1,	  0,	  0,	  //  115
	0,	  //0,	  0,	  0,	  //  119
	0,	  //0,	  0,	  0,	  //  123
	0,	  //0,	  0,	  0,	  //  127
};

const uint8_t PROGMEM Env1[]=
{
	255,	//242,	229,	216,	  //  3
	204,	//191,	178,	165,	  //  7
	153,	//142,	134,	125,	  //  11
	117,	//108,	100,	91,	    //  15
	83, 	//74,   71, 	68,	    //  19
	65,	  //62,	  59,	  56,	    //  23
	53,	  //50,	  48,	  46,	    //  27
	44,	  //42,	  40,	  38,	    //  31
	36,	  //34,	  32,	  31,	    //  35
	30,	  //29,	  28,	  28,	    //  39
	27,	  //26,	  25,	  25,	    //  43
	24,	  //24,	  23,	  23,	    //  47
	22,	  //22,	  21,	  21,	    //  51
	20,	  //20,	  19,	  19,	    //  55
	19,	  //18,	  18,	  17,	    //  59
	17,	  //16,	  16,	  15,	    //  63
	15,	  //14,	  14,	  13,	    //  67
	13,	  //12,	  12,	  11,	    //  71
	11,	  //10,	  10,	  10,	    //  75
	9,	  //9,	  8,	  8,	    //  79
	8,	  //7,	  7,	  6,	    //  83
	6,	  //6,	  6,	  6,	    //  87
	5,	  //5,	  5,	  5,	    //  91
	5,	  //5,	  5,	  5,	    //  95
	5,	  //4,	  4,	  4,	    //  99
	4,	  //4,	  4,	  3,	    //  103
	3,	  //3,	  2,	  2,	    //  107
	2,	  //1,	  1,	  1,	    //  111
	1,	  //1,	  0,	  0,	    //  115
	0,	  //0,	  0,	  0,	    //  119
  0,    //0,    0,    0,      //  123
  0,    //0,    0,    0,      //  127
};

const uint8_t PROGMEM Env2[]=
{
  255,  //254,  254,  254,    //  3
  253,  //253,  253,  252,    //  7
  252,  //252,  251,  251,    //  11
  251,  //250,  250,  250,    //  15
  249,  //249,  247,  244,    //  19
  242,  //240,  237,  235,    //  23
  233,  //230,  219,  200,    //  27
  180,  //160,  141,  121,    //  31
  122,  //82,   62,   58,     //  35
  83,   //49,   45,   40,     //  39
  56,   //31,   27,   25,     //  43
  34,   //24,   23,   23,     //  47
  22,   //22,   21,   21,     //  51
  20,   //20,   19,   19,     //  55
  19,   //18,   18,   17,     //  59
  17,   //16,   16,   15,     //  63
  14,   //14,   13,   13,     //  67
  12,   //12,   11,   11,     //  71
  10,   //10,   10,   9,      //  75
  9,    //8,    8,    8,      //  79
  7,    //7,    6,    6,      //  83
  6,    //6,    6,    5,      //  87
  5,    //5,    5,    5,      //  91
  5,    //5,    5,    5,      //  95
  4,    //4,    4,    4,      //  99
  4,    //4,    3,    3,      //  103
  3,    //2,    2,    2,      //  107
  1,    //1,    1,    1,      //  111
  1,    //0,    0,    0,      //  115
  0,    //0,    0,    0,      //  119
  0,    //0,    0,    0,      //  123
  0,    //0,    0,    0,      //  127
};
/*
const uint8_t PROGMEM Env2[]=
{
  255,  //254,  254,  254,    //  3
  253,  //253,  253,  252,    //  7
  252,  //252,  251,  251,    //  11
  251,  //250,  250,  250,    //  15
  249,  //249,  247,  244,    //  19
  242,  //240,  237,  235,    //  23
  233,  //230,  219,  200,    //  27
  180,  //160,  141,  121,    //  31
  102,  //82,   62,   58,     //  35
  53,   //49,   45,   40,     //  39
  36,   //31,   27,   25,     //  43
  24,   //24,   23,   23,     //  47
  22,   //22,   21,   21,     //  51
  20,   //20,   19,   19,     //  55
  19,   //18,   18,   17,     //  59
  17,   //16,   16,   15,     //  63
  14,   //14,   13,   13,     //  67
  12,   //12,   11,   11,     //  71
  10,   //10,   10,   9,      //  75
  9,    //8,    8,    8,      //  79
  7,    //7,    6,    6,      //  83
  6,    //6,    6,    5,      //  87
  5,    //5,    5,    5,      //  91
  5,    //5,    5,    5,      //  95
  4,    //4,    4,    4,      //  99
  4,    //4,    3,    3,      //  103
  3,    //2,    2,    2,      //  107
  1,    //1,    1,    1,      //  111
  1,    //0,    0,    0,      //  115
  0,    //0,    0,    0,      //  119
  0,    //0,    0,    0,      //  123
  0,    //0,    0,    0,      //  127
};
//*/
const uint8_t PROGMEM Env3[]=
{
	255,	//250,	246,	242,    //  3
	238,	//233,	229,	225,    //  7
	221,	//217,	213,	209,    //  11
	206,	//202,	199,	195,    //  15
	191,	//188,	183,	179,    //  19
	175,	//170,	166,	161,    //  23
	157,	//153,	148,	144,    //  27
	139,	//134,	130,	125,    //  31
	121,	//116,	112,	109,    //  35
	105,	//102,	99,	  96,     //  39
	93,	  //90, 	87,	  83,     //  43
	80,	  //77,	  74,   71,     //  47
	68,	  //65,	  61,	  58,     //  51
	56,  	//54,	  51,	  49,     //  55
	46,	  //44,	  42,	  39,     //  59
	37,	  //34,	  31,	  28,     //  63
	25,	  //22,	  19,	  16,     //  67
	13,	  //12,	  12,	  11,     //  71
	11,	  //10,	  10,	  10,     //  75
	9,	  //9,	  8,	  8,      //  79
	8,	  //7,	  7,	  6,      //  83
	6,	  //6,	  6,	  6,      //  87
	5,	  //5,	  5,    5,      //  91
	5,	  //5,	  5,    5,      //  95
	5,	  //4,	  4,	  4,      //  99
	4,	  //4,	  4,	  3,      //  103
	3,	  //3,	  2,    2,      //  107
	2,	  //1,    1,	  1,      //  111
	1,	  //1,	  0,    0,      //  115
	0,	  //0,	  0,	  0,      //  119
  0,    //0,    0,    0,      //  123
  0,    //0,    0,    0,      //  127
};



#endif

