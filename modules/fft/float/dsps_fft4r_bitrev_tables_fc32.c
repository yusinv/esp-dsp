// Copyright 2018-2019 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#include <stdint.h>
#include "dsps_fft_tables.h"


const uint16_t bitrev4r_table_16_fc32[] = {
    8, 32, 16, 64, 24, 96, 48, 72, 56, 104, 88, 112,
};
const uint16_t bitrev4r_table_16_fc32_size = 6;

extern const uint16_t bitrev4r_table_16_fc32[];
extern const uint16_t bitrev4r_table_16_fc32_size;

const uint16_t bitrev4r_table_64_fc32[] = {
    8, 128, 16, 256, 24, 384, 40, 160, 48, 288, 56, 416, 72, 192, 80, 320,
    88, 448, 104, 224, 112, 352, 120, 480, 144, 264, 152, 392, 176, 296, 184, 424,
    208, 328, 216, 456, 240, 360, 248, 488, 280, 400, 312, 432, 344, 464, 376, 496,
};
const uint16_t bitrev4r_table_64_fc32_size = 24;

extern const uint16_t bitrev4r_table_64_fc32[];
extern const uint16_t bitrev4r_table_64_fc32_size;

const uint16_t bitrev4r_table_256_fc32[] = {
    8, 512, 16, 1024, 24, 1536, 32, 128, 40, 640, 48, 1152, 56, 1664, 64, 256,
    72, 768, 80, 1280, 88, 1792, 96, 384, 104, 896, 112, 1408, 120, 1920, 136, 544,
    144, 1056, 152, 1568, 168, 672, 176, 1184, 184, 1696, 192, 288, 200, 800, 208, 1312,
    216, 1824, 224, 416, 232, 928, 240, 1440, 248, 1952, 264, 576, 272, 1088, 280, 1600,
    296, 704, 304, 1216, 312, 1728, 328, 832, 336, 1344, 344, 1856, 352, 448, 360, 960,
    368, 1472, 376, 1984, 392, 608, 400, 1120, 408, 1632, 424, 736, 432, 1248, 440, 1760,
    456, 864, 464, 1376, 472, 1888, 488, 992, 496, 1504, 504, 2016, 528, 1032, 536, 1544,
    552, 648, 560, 1160, 568, 1672, 584, 776, 592, 1288, 600, 1800, 616, 904, 624, 1416,
    632, 1928, 656, 1064, 664, 1576, 688, 1192, 696, 1704, 712, 808, 720, 1320, 728, 1832,
    744, 936, 752, 1448, 760, 1960, 784, 1096, 792, 1608, 816, 1224, 824, 1736, 848, 1352,
    856, 1864, 872, 968, 880, 1480, 888, 1992, 912, 1128, 920, 1640, 944, 1256, 952, 1768,
    976, 1384, 984, 1896, 1008, 1512, 1016, 2024, 1048, 1552, 1072, 1168, 1080, 1680, 1104, 1296,
    1112, 1808, 1136, 1424, 1144, 1936, 1176, 1584, 1208, 1712, 1232, 1328, 1240, 1840, 1264, 1456,
    1272, 1968, 1304, 1616, 1336, 1744, 1368, 1872, 1392, 1488, 1400, 2000, 1432, 1648, 1464, 1776,
    1496, 1904, 1528, 2032, 1592, 1688, 1624, 1816, 1656, 1944, 1752, 1848, 1784, 1976, 1912, 2008,
};
const uint16_t bitrev4r_table_256_fc32_size = 120;

extern const uint16_t bitrev4r_table_256_fc32[];
extern const uint16_t bitrev4r_table_256_fc32_size;

const uint16_t bitrev4r_table_1024_fc32[] = {
    8, 2048, 16, 4096, 24, 6144, 32, 512, 40, 2560, 48, 4608, 56, 6656, 64, 1024,
    72, 3072, 80, 5120, 88, 7168, 96, 1536, 104, 3584, 112, 5632, 120, 7680, 136, 2176,
    144, 4224, 152, 6272, 160, 640, 168, 2688, 176, 4736, 184, 6784, 192, 1152, 200, 3200,
    208, 5248, 216, 7296, 224, 1664, 232, 3712, 240, 5760, 248, 7808, 264, 2304, 272, 4352,
    280, 6400, 288, 768, 296, 2816, 304, 4864, 312, 6912, 320, 1280, 328, 3328, 336, 5376,
    344, 7424, 352, 1792, 360, 3840, 368, 5888, 376, 7936, 392, 2432, 400, 4480, 408, 6528,
    416, 896, 424, 2944, 432, 4992, 440, 7040, 448, 1408, 456, 3456, 464, 5504, 472, 7552,
    480, 1920, 488, 3968, 496, 6016, 504, 8064, 520, 2080, 528, 4128, 536, 6176, 552, 2592,
    560, 4640, 568, 6688, 576, 1056, 584, 3104, 592, 5152, 600, 7200, 608, 1568, 616, 3616,
    624, 5664, 632, 7712, 648, 2208, 656, 4256, 664, 6304, 680, 2720, 688, 4768, 696, 6816,
    704, 1184, 712, 3232, 720, 5280, 728, 7328, 736, 1696, 744, 3744, 752, 5792, 760, 7840,
    776, 2336, 784, 4384, 792, 6432, 808, 2848, 816, 4896, 824, 6944, 832, 1312, 840, 3360,
    848, 5408, 856, 7456, 864, 1824, 872, 3872, 880, 5920, 888, 7968, 904, 2464, 912, 4512,
    920, 6560, 936, 2976, 944, 5024, 952, 7072, 960, 1440, 968, 3488, 976, 5536, 984, 7584,
    992, 1952, 1000, 4000, 1008, 6048, 1016, 8096, 1032, 2112, 1040, 4160, 1048, 6208, 1064, 2624,
    1072, 4672, 1080, 6720, 1096, 3136, 1104, 5184, 1112, 7232, 1120, 1600, 1128, 3648, 1136, 5696,
    1144, 7744, 1160, 2240, 1168, 4288, 1176, 6336, 1192, 2752, 1200, 4800, 1208, 6848, 1224, 3264,
    1232, 5312, 1240, 7360, 1248, 1728, 1256, 3776, 1264, 5824, 1272, 7872, 1288, 2368, 1296, 4416,
    1304, 6464, 1320, 2880, 1328, 4928, 1336, 6976, 1352, 3392, 1360, 5440, 1368, 7488, 1376, 1856,
    1384, 3904, 1392, 5952, 1400, 8000, 1416, 2496, 1424, 4544, 1432, 6592, 1448, 3008, 1456, 5056,
    1464, 7104, 1480, 3520, 1488, 5568, 1496, 7616, 1504, 1984, 1512, 4032, 1520, 6080, 1528, 8128,
    1544, 2144, 1552, 4192, 1560, 6240, 1576, 2656, 1584, 4704, 1592, 6752, 1608, 3168, 1616, 5216,
    1624, 7264, 1640, 3680, 1648, 5728, 1656, 7776, 1672, 2272, 1680, 4320, 1688, 6368, 1704, 2784,
    1712, 4832, 1720, 6880, 1736, 3296, 1744, 5344, 1752, 7392, 1768, 3808, 1776, 5856, 1784, 7904,
    1800, 2400, 1808, 4448, 1816, 6496, 1832, 2912, 1840, 4960, 1848, 7008, 1864, 3424, 1872, 5472,
    1880, 7520, 1896, 3936, 1904, 5984, 1912, 8032, 1928, 2528, 1936, 4576, 1944, 6624, 1960, 3040,
    1968, 5088, 1976, 7136, 1992, 3552, 2000, 5600, 2008, 7648, 2024, 4064, 2032, 6112, 2040, 8160,
    2064, 4104, 2072, 6152, 2088, 2568, 2096, 4616, 2104, 6664, 2120, 3080, 2128, 5128, 2136, 7176,
    2152, 3592, 2160, 5640, 2168, 7688, 2192, 4232, 2200, 6280, 2216, 2696, 2224, 4744, 2232, 6792,
    2248, 3208, 2256, 5256, 2264, 7304, 2280, 3720, 2288, 5768, 2296, 7816, 2320, 4360, 2328, 6408,
    2344, 2824, 2352, 4872, 2360, 6920, 2376, 3336, 2384, 5384, 2392, 7432, 2408, 3848, 2416, 5896,
    2424, 7944, 2448, 4488, 2456, 6536, 2472, 2952, 2480, 5000, 2488, 7048, 2504, 3464, 2512, 5512,
    2520, 7560, 2536, 3976, 2544, 6024, 2552, 8072, 2576, 4136, 2584, 6184, 2608, 4648, 2616, 6696,
    2632, 3112, 2640, 5160, 2648, 7208, 2664, 3624, 2672, 5672, 2680, 7720, 2704, 4264, 2712, 6312,
    2736, 4776, 2744, 6824, 2760, 3240, 2768, 5288, 2776, 7336, 2792, 3752, 2800, 5800, 2808, 7848,
    2832, 4392, 2840, 6440, 2864, 4904, 2872, 6952, 2888, 3368, 2896, 5416, 2904, 7464, 2920, 3880,
    2928, 5928, 2936, 7976, 2960, 4520, 2968, 6568, 2992, 5032, 3000, 7080, 3016, 3496, 3024, 5544,
    3032, 7592, 3048, 4008, 3056, 6056, 3064, 8104, 3088, 4168, 3096, 6216, 3120, 4680, 3128, 6728,
    3152, 5192, 3160, 7240, 3176, 3656, 3184, 5704, 3192, 7752, 3216, 4296, 3224, 6344, 3248, 4808,
    3256, 6856, 3280, 5320, 3288, 7368, 3304, 3784, 3312, 5832, 3320, 7880, 3344, 4424, 3352, 6472,
    3376, 4936, 3384, 6984, 3408, 5448, 3416, 7496, 3432, 3912, 3440, 5960, 3448, 8008, 3472, 4552,
    3480, 6600, 3504, 5064, 3512, 7112, 3536, 5576, 3544, 7624, 3560, 4040, 3568, 6088, 3576, 8136,
    3600, 4200, 3608, 6248, 3632, 4712, 3640, 6760, 3664, 5224, 3672, 7272, 3696, 5736, 3704, 7784,
    3728, 4328, 3736, 6376, 3760, 4840, 3768, 6888, 3792, 5352, 3800, 7400, 3824, 5864, 3832, 7912,
    3856, 4456, 3864, 6504, 3888, 4968, 3896, 7016, 3920, 5480, 3928, 7528, 3952, 5992, 3960, 8040,
    3984, 4584, 3992, 6632, 4016, 5096, 4024, 7144, 4048, 5608, 4056, 7656, 4080, 6120, 4088, 8168,
    4120, 6160, 4144, 4624, 4152, 6672, 4176, 5136, 4184, 7184, 4208, 5648, 4216, 7696, 4248, 6288,
    4272, 4752, 4280, 6800, 4304, 5264, 4312, 7312, 4336, 5776, 4344, 7824, 4376, 6416, 4400, 4880,
    4408, 6928, 4432, 5392, 4440, 7440, 4464, 5904, 4472, 7952, 4504, 6544, 4528, 5008, 4536, 7056,
    4560, 5520, 4568, 7568, 4592, 6032, 4600, 8080, 4632, 6192, 4664, 6704, 4688, 5168, 4696, 7216,
    4720, 5680, 4728, 7728, 4760, 6320, 4792, 6832, 4816, 5296, 4824, 7344, 4848, 5808, 4856, 7856,
    4888, 6448, 4920, 6960, 4944, 5424, 4952, 7472, 4976, 5936, 4984, 7984, 5016, 6576, 5048, 7088,
    5072, 5552, 5080, 7600, 5104, 6064, 5112, 8112, 5144, 6224, 5176, 6736, 5208, 7248, 5232, 5712,
    5240, 7760, 5272, 6352, 5304, 6864, 5336, 7376, 5360, 5840, 5368, 7888, 5400, 6480, 5432, 6992,
    5464, 7504, 5488, 5968, 5496, 8016, 5528, 6608, 5560, 7120, 5592, 7632, 5616, 6096, 5624, 8144,
    5656, 6256, 5688, 6768, 5720, 7280, 5752, 7792, 5784, 6384, 5816, 6896, 5848, 7408, 5880, 7920,
    5912, 6512, 5944, 7024, 5976, 7536, 6008, 8048, 6040, 6640, 6072, 7152, 6104, 7664, 6136, 8176,
    6200, 6680, 6232, 7192, 6264, 7704, 6328, 6808, 6360, 7320, 6392, 7832, 6456, 6936, 6488, 7448,
    6520, 7960, 6584, 7064, 6616, 7576, 6648, 8088, 6744, 7224, 6776, 7736, 6872, 7352, 6904, 7864,
    7000, 7480, 7032, 7992, 7128, 7608, 7160, 8120, 7288, 7768, 7416, 7896, 7544, 8024, 7672, 8152,
};
const uint16_t bitrev4r_table_1024_fc32_size = 480;

extern const uint16_t bitrev4r_table_1024_fc32[];
extern const uint16_t bitrev4r_table_1024_fc32_size;

const uint16_t bitrev4r_table_4096_fc32[] = {
    8, 8192, 16, 16384, 24, 24576, 32, 2048, 40, 10240, 48, 18432, 56, 26624, 64, 4096,
    72, 12288, 80, 20480, 88, 28672, 96, 6144, 104, 14336, 112, 22528, 120, 30720, 128, 512,
    136, 8704, 144, 16896, 152, 25088, 160, 2560, 168, 10752, 176, 18944, 184, 27136, 192, 4608,
    200, 12800, 208, 20992, 216, 29184, 224, 6656, 232, 14848, 240, 23040, 248, 31232, 256, 1024,
    264, 9216, 272, 17408, 280, 25600, 288, 3072, 296, 11264, 304, 19456, 312, 27648, 320, 5120,
    328, 13312, 336, 21504, 344, 29696, 352, 7168, 360, 15360, 368, 23552, 376, 31744, 384, 1536,
    392, 9728, 400, 17920, 408, 26112, 416, 3584, 424, 11776, 432, 19968, 440, 28160, 448, 5632,
    456, 13824, 464, 22016, 472, 30208, 480, 7680, 488, 15872, 496, 24064, 504, 32256, 520, 8320,
    528, 16512, 536, 24704, 544, 2176, 552, 10368, 560, 18560, 568, 26752, 576, 4224, 584, 12416,
    592, 20608, 600, 28800, 608, 6272, 616, 14464, 624, 22656, 632, 30848, 648, 8832, 656, 17024,
    664, 25216, 672, 2688, 680, 10880, 688, 19072, 696, 27264, 704, 4736, 712, 12928, 720, 21120,
    728, 29312, 736, 6784, 744, 14976, 752, 23168, 760, 31360, 768, 1152, 776, 9344, 784, 17536,
    792, 25728, 800, 3200, 808, 11392, 816, 19584, 824, 27776, 832, 5248, 840, 13440, 848, 21632,
    856, 29824, 864, 7296, 872, 15488, 880, 23680, 888, 31872, 896, 1664, 904, 9856, 912, 18048,
    920, 26240, 928, 3712, 936, 11904, 944, 20096, 952, 28288, 960, 5760, 968, 13952, 976, 22144,
    984, 30336, 992, 7808, 1000, 16000, 1008, 24192, 1016, 32384, 1032, 8448, 1040, 16640, 1048, 24832,
    1056, 2304, 1064, 10496, 1072, 18688, 1080, 26880, 1088, 4352, 1096, 12544, 1104, 20736, 1112, 28928,
    1120, 6400, 1128, 14592, 1136, 22784, 1144, 30976, 1160, 8960, 1168, 17152, 1176, 25344, 1184, 2816,
    1192, 11008, 1200, 19200, 1208, 27392, 1216, 4864, 1224, 13056, 1232, 21248, 1240, 29440, 1248, 6912,
    1256, 15104, 1264, 23296, 1272, 31488, 1288, 9472, 1296, 17664, 1304, 25856, 1312, 3328, 1320, 11520,
    1328, 19712, 1336, 27904, 1344, 5376, 1352, 13568, 1360, 21760, 1368, 29952, 1376, 7424, 1384, 15616,
    1392, 23808, 1400, 32000, 1408, 1792, 1416, 9984, 1424, 18176, 1432, 26368, 1440, 3840, 1448, 12032,
    1456, 20224, 1464, 28416, 1472, 5888, 1480, 14080, 1488, 22272, 1496, 30464, 1504, 7936, 1512, 16128,
    1520, 24320, 1528, 32512, 1544, 8576, 1552, 16768, 1560, 24960, 1568, 2432, 1576, 10624, 1584, 18816,
    1592, 27008, 1600, 4480, 1608, 12672, 1616, 20864, 1624, 29056, 1632, 6528, 1640, 14720, 1648, 22912,
    1656, 31104, 1672, 9088, 1680, 17280, 1688, 25472, 1696, 2944, 1704, 11136, 1712, 19328, 1720, 27520,
    1728, 4992, 1736, 13184, 1744, 21376, 1752, 29568, 1760, 7040, 1768, 15232, 1776, 23424, 1784, 31616,
    1800, 9600, 1808, 17792, 1816, 25984, 1824, 3456, 1832, 11648, 1840, 19840, 1848, 28032, 1856, 5504,
    1864, 13696, 1872, 21888, 1880, 30080, 1888, 7552, 1896, 15744, 1904, 23936, 1912, 32128, 1928, 10112,
    1936, 18304, 1944, 26496, 1952, 3968, 1960, 12160, 1968, 20352, 1976, 28544, 1984, 6016, 1992, 14208,
    2000, 22400, 2008, 30592, 2016, 8064, 2024, 16256, 2032, 24448, 2040, 32640, 2056, 8224, 2064, 16416,
    2072, 24608, 2088, 10272, 2096, 18464, 2104, 26656, 2112, 4128, 2120, 12320, 2128, 20512, 2136, 28704,
    2144, 6176, 2152, 14368, 2160, 22560, 2168, 30752, 2184, 8736, 2192, 16928, 2200, 25120, 2208, 2592,
    2216, 10784, 2224, 18976, 2232, 27168, 2240, 4640, 2248, 12832, 2256, 21024, 2264, 29216, 2272, 6688,
    2280, 14880, 2288, 23072, 2296, 31264, 2312, 9248, 2320, 17440, 2328, 25632, 2336, 3104, 2344, 11296,
    2352, 19488, 2360, 27680, 2368, 5152, 2376, 13344, 2384, 21536, 2392, 29728, 2400, 7200, 2408, 15392,
    2416, 23584, 2424, 31776, 2440, 9760, 2448, 17952, 2456, 26144, 2464, 3616, 2472, 11808, 2480, 20000,
    2488, 28192, 2496, 5664, 2504, 13856, 2512, 22048, 2520, 30240, 2528, 7712, 2536, 15904, 2544, 24096,
    2552, 32288, 2568, 8352, 2576, 16544, 2584, 24736, 2600, 10400, 2608, 18592, 2616, 26784, 2624, 4256,
    2632, 12448, 2640, 20640, 2648, 28832, 2656, 6304, 2664, 14496, 2672, 22688, 2680, 30880, 2696, 8864,
    2704, 17056, 2712, 25248, 2728, 10912, 2736, 19104, 2744, 27296, 2752, 4768, 2760, 12960, 2768, 21152,
    2776, 29344, 2784, 6816, 2792, 15008, 2800, 23200, 2808, 31392, 2824, 9376, 2832, 17568, 2840, 25760,
    2848, 3232, 2856, 11424, 2864, 19616, 2872, 27808, 2880, 5280, 2888, 13472, 2896, 21664, 2904, 29856,
    2912, 7328, 2920, 15520, 2928, 23712, 2936, 31904, 2952, 9888, 2960, 18080, 2968, 26272, 2976, 3744,
    2984, 11936, 2992, 20128, 3000, 28320, 3008, 5792, 3016, 13984, 3024, 22176, 3032, 30368, 3040, 7840,
    3048, 16032, 3056, 24224, 3064, 32416, 3080, 8480, 3088, 16672, 3096, 24864, 3112, 10528, 3120, 18720,
    3128, 26912, 3136, 4384, 3144, 12576, 3152, 20768, 3160, 28960, 3168, 6432, 3176, 14624, 3184, 22816,
    3192, 31008, 3208, 8992, 3216, 17184, 3224, 25376, 3240, 11040, 3248, 19232, 3256, 27424, 3264, 4896,
    3272, 13088, 3280, 21280, 3288, 29472, 3296, 6944, 3304, 15136, 3312, 23328, 3320, 31520, 3336, 9504,
    3344, 17696, 3352, 25888, 3368, 11552, 3376, 19744, 3384, 27936, 3392, 5408, 3400, 13600, 3408, 21792,
    3416, 29984, 3424, 7456, 3432, 15648, 3440, 23840, 3448, 32032, 3464, 10016, 3472, 18208, 3480, 26400,
    3488, 3872, 3496, 12064, 3504, 20256, 3512, 28448, 3520, 5920, 3528, 14112, 3536, 22304, 3544, 30496,
    3552, 7968, 3560, 16160, 3568, 24352, 3576, 32544, 3592, 8608, 3600, 16800, 3608, 24992, 3624, 10656,
    3632, 18848, 3640, 27040, 3648, 4512, 3656, 12704, 3664, 20896, 3672, 29088, 3680, 6560, 3688, 14752,
    3696, 22944, 3704, 31136, 3720, 9120, 3728, 17312, 3736, 25504, 3752, 11168, 3760, 19360, 3768, 27552,
    3776, 5024, 3784, 13216, 3792, 21408, 3800, 29600, 3808, 7072, 3816, 15264, 3824, 23456, 3832, 31648,
    3848, 9632, 3856, 17824, 3864, 26016, 3880, 11680, 3888, 19872, 3896, 28064, 3904, 5536, 3912, 13728,
    3920, 21920, 3928, 30112, 3936, 7584, 3944, 15776, 3952, 23968, 3960, 32160, 3976, 10144, 3984, 18336,
    3992, 26528, 4008, 12192, 4016, 20384, 4024, 28576, 4032, 6048, 4040, 14240, 4048, 22432, 4056, 30624,
    4064, 8096, 4072, 16288, 4080, 24480, 4088, 32672, 4104, 8256, 4112, 16448, 4120, 24640, 4136, 10304,
    4144, 18496, 4152, 26688, 4168, 12352, 4176, 20544, 4184, 28736, 4192, 6208, 4200, 14400, 4208, 22592,
    4216, 30784, 4232, 8768, 4240, 16960, 4248, 25152, 4264, 10816, 4272, 19008, 4280, 27200, 4288, 4672,
    4296, 12864, 4304, 21056, 4312, 29248, 4320, 6720, 4328, 14912, 4336, 23104, 4344, 31296, 4360, 9280,
    4368, 17472, 4376, 25664, 4392, 11328, 4400, 19520, 4408, 27712, 4416, 5184, 4424, 13376, 4432, 21568,
    4440, 29760, 4448, 7232, 4456, 15424, 4464, 23616, 4472, 31808, 4488, 9792, 4496, 17984, 4504, 26176,
    4520, 11840, 4528, 20032, 4536, 28224, 4544, 5696, 4552, 13888, 4560, 22080, 4568, 30272, 4576, 7744,
    4584, 15936, 4592, 24128, 4600, 32320, 4616, 8384, 4624, 16576, 4632, 24768, 4648, 10432, 4656, 18624,
    4664, 26816, 4680, 12480, 4688, 20672, 4696, 28864, 4704, 6336, 4712, 14528, 4720, 22720, 4728, 30912,
    4744, 8896, 4752, 17088, 4760, 25280, 4776, 10944, 4784, 19136, 4792, 27328, 4808, 12992, 4816, 21184,
    4824, 29376, 4832, 6848, 4840, 15040, 4848, 23232, 4856, 31424, 4872, 9408, 4880, 17600, 4888, 25792,
    4904, 11456, 4912, 19648, 4920, 27840, 4928, 5312, 4936, 13504, 4944, 21696, 4952, 29888, 4960, 7360,
    4968, 15552, 4976, 23744, 4984, 31936, 5000, 9920, 5008, 18112, 5016, 26304, 5032, 11968, 5040, 20160,
    5048, 28352, 5056, 5824, 5064, 14016, 5072, 22208, 5080, 30400, 5088, 7872, 5096, 16064, 5104, 24256,
    5112, 32448, 5128, 8512, 5136, 16704, 5144, 24896, 5160, 10560, 5168, 18752, 5176, 26944, 5192, 12608,
    5200, 20800, 5208, 28992, 5216, 6464, 5224, 14656, 5232, 22848, 5240, 31040, 5256, 9024, 5264, 17216,
    5272, 25408, 5288, 11072, 5296, 19264, 5304, 27456, 5320, 13120, 5328, 21312, 5336, 29504, 5344, 6976,
    5352, 15168, 5360, 23360, 5368, 31552, 5384, 9536, 5392, 17728, 5400, 25920, 5416, 11584, 5424, 19776,
    5432, 27968, 5448, 13632, 5456, 21824, 5464, 30016, 5472, 7488, 5480, 15680, 5488, 23872, 5496, 32064,
    5512, 10048, 5520, 18240, 5528, 26432, 5544, 12096, 5552, 20288, 5560, 28480, 5568, 5952, 5576, 14144,
    5584, 22336, 5592, 30528, 5600, 8000, 5608, 16192, 5616, 24384, 5624, 32576, 5640, 8640, 5648, 16832,
    5656, 25024, 5672, 10688, 5680, 18880, 5688, 27072, 5704, 12736, 5712, 20928, 5720, 29120, 5728, 6592,
    5736, 14784, 5744, 22976, 5752, 31168, 5768, 9152, 5776, 17344, 5784, 25536, 5800, 11200, 5808, 19392,
    5816, 27584, 5832, 13248, 5840, 21440, 5848, 29632, 5856, 7104, 5864, 15296, 5872, 23488, 5880, 31680,
    5896, 9664, 5904, 17856, 5912, 26048, 5928, 11712, 5936, 19904, 5944, 28096, 5960, 13760, 5968, 21952,
    5976, 30144, 5984, 7616, 5992, 15808, 6000, 24000, 6008, 32192, 6024, 10176, 6032, 18368, 6040, 26560,
    6056, 12224, 6064, 20416, 6072, 28608, 6088, 14272, 6096, 22464, 6104, 30656, 6112, 8128, 6120, 16320,
    6128, 24512, 6136, 32704, 6152, 8288, 6160, 16480, 6168, 24672, 6184, 10336, 6192, 18528, 6200, 26720,
    6216, 12384, 6224, 20576, 6232, 28768, 6248, 14432, 6256, 22624, 6264, 30816, 6280, 8800, 6288, 16992,
    6296, 25184, 6312, 10848, 6320, 19040, 6328, 27232, 6344, 12896, 6352, 21088, 6360, 29280, 6368, 6752,
    6376, 14944, 6384, 23136, 6392, 31328, 6408, 9312, 6416, 17504, 6424, 25696, 6440, 11360, 6448, 19552,
    6456, 27744, 6472, 13408, 6480, 21600, 6488, 29792, 6496, 7264, 6504, 15456, 6512, 23648, 6520, 31840,
    6536, 9824, 6544, 18016, 6552, 26208, 6568, 11872, 6576, 20064, 6584, 28256, 6600, 13920, 6608, 22112,
    6616, 30304, 6624, 7776, 6632, 15968, 6640, 24160, 6648, 32352, 6664, 8416, 6672, 16608, 6680, 24800,
    6696, 10464, 6704, 18656, 6712, 26848, 6728, 12512, 6736, 20704, 6744, 28896, 6760, 14560, 6768, 22752,
    6776, 30944, 6792, 8928, 6800, 17120, 6808, 25312, 6824, 10976, 6832, 19168, 6840, 27360, 6856, 13024,
    6864, 21216, 6872, 29408, 6888, 15072, 6896, 23264, 6904, 31456, 6920, 9440, 6928, 17632, 6936, 25824,
    6952, 11488, 6960, 19680, 6968, 27872, 6984, 13536, 6992, 21728, 7000, 29920, 7008, 7392, 7016, 15584,
    7024, 23776, 7032, 31968, 7048, 9952, 7056, 18144, 7064, 26336, 7080, 12000, 7088, 20192, 7096, 28384,
    7112, 14048, 7120, 22240, 7128, 30432, 7136, 7904, 7144, 16096, 7152, 24288, 7160, 32480, 7176, 8544,
    7184, 16736, 7192, 24928, 7208, 10592, 7216, 18784, 7224, 26976, 7240, 12640, 7248, 20832, 7256, 29024,
    7272, 14688, 7280, 22880, 7288, 31072, 7304, 9056, 7312, 17248, 7320, 25440, 7336, 11104, 7344, 19296,
    7352, 27488, 7368, 13152, 7376, 21344, 7384, 29536, 7400, 15200, 7408, 23392, 7416, 31584, 7432, 9568,
    7440, 17760, 7448, 25952, 7464, 11616, 7472, 19808, 7480, 28000, 7496, 13664, 7504, 21856, 7512, 30048,
    7528, 15712, 7536, 23904, 7544, 32096, 7560, 10080, 7568, 18272, 7576, 26464, 7592, 12128, 7600, 20320,
    7608, 28512, 7624, 14176, 7632, 22368, 7640, 30560, 7648, 8032, 7656, 16224, 7664, 24416, 7672, 32608,
    7688, 8672, 7696, 16864, 7704, 25056, 7720, 10720, 7728, 18912, 7736, 27104, 7752, 12768, 7760, 20960,
    7768, 29152, 7784, 14816, 7792, 23008, 7800, 31200, 7816, 9184, 7824, 17376, 7832, 25568, 7848, 11232,
    7856, 19424, 7864, 27616, 7880, 13280, 7888, 21472, 7896, 29664, 7912, 15328, 7920, 23520, 7928, 31712,
    7944, 9696, 7952, 17888, 7960, 26080, 7976, 11744, 7984, 19936, 7992, 28128, 8008, 13792, 8016, 21984,
    8024, 30176, 8040, 15840, 8048, 24032, 8056, 32224, 8072, 10208, 8080, 18400, 8088, 26592, 8104, 12256,
    8112, 20448, 8120, 28640, 8136, 14304, 8144, 22496, 8152, 30688, 8168, 16352, 8176, 24544, 8184, 32736,
    8208, 16392, 8216, 24584, 8232, 10248, 8240, 18440, 8248, 26632, 8264, 12296, 8272, 20488, 8280, 28680,
    8296, 14344, 8304, 22536, 8312, 30728, 8328, 8712, 8336, 16904, 8344, 25096, 8360, 10760, 8368, 18952,
    8376, 27144, 8392, 12808, 8400, 21000, 8408, 29192, 8424, 14856, 8432, 23048, 8440, 31240, 8456, 9224,
    8464, 17416, 8472, 25608, 8488, 11272, 8496, 19464, 8504, 27656, 8520, 13320, 8528, 21512, 8536, 29704,
    8552, 15368, 8560, 23560, 8568, 31752, 8584, 9736, 8592, 17928, 8600, 26120, 8616, 11784, 8624, 19976,
    8632, 28168, 8648, 13832, 8656, 22024, 8664, 30216, 8680, 15880, 8688, 24072, 8696, 32264, 8720, 16520,
    8728, 24712, 8744, 10376, 8752, 18568, 8760, 26760, 8776, 12424, 8784, 20616, 8792, 28808, 8808, 14472,
    8816, 22664, 8824, 30856, 8848, 17032, 8856, 25224, 8872, 10888, 8880, 19080, 8888, 27272, 8904, 12936,
    8912, 21128, 8920, 29320, 8936, 14984, 8944, 23176, 8952, 31368, 8968, 9352, 8976, 17544, 8984, 25736,
    9000, 11400, 9008, 19592, 9016, 27784, 9032, 13448, 9040, 21640, 9048, 29832, 9064, 15496, 9072, 23688,
    9080, 31880, 9096, 9864, 9104, 18056, 9112, 26248, 9128, 11912, 9136, 20104, 9144, 28296, 9160, 13960,
    9168, 22152, 9176, 30344, 9192, 16008, 9200, 24200, 9208, 32392, 9232, 16648, 9240, 24840, 9256, 10504,
    9264, 18696, 9272, 26888, 9288, 12552, 9296, 20744, 9304, 28936, 9320, 14600, 9328, 22792, 9336, 30984,
    9360, 17160, 9368, 25352, 9384, 11016, 9392, 19208, 9400, 27400, 9416, 13064, 9424, 21256, 9432, 29448,
    9448, 15112, 9456, 23304, 9464, 31496, 9488, 17672, 9496, 25864, 9512, 11528, 9520, 19720, 9528, 27912,
    9544, 13576, 9552, 21768, 9560, 29960, 9576, 15624, 9584, 23816, 9592, 32008, 9608, 9992, 9616, 18184,
    9624, 26376, 9640, 12040, 9648, 20232, 9656, 28424, 9672, 14088, 9680, 22280, 9688, 30472, 9704, 16136,
    9712, 24328, 9720, 32520, 9744, 16776, 9752, 24968, 9768, 10632, 9776, 18824, 9784, 27016, 9800, 12680,
    9808, 20872, 9816, 29064, 9832, 14728, 9840, 22920, 9848, 31112, 9872, 17288, 9880, 25480, 9896, 11144,
    9904, 19336, 9912, 27528, 9928, 13192, 9936, 21384, 9944, 29576, 9960, 15240, 9968, 23432, 9976, 31624,
    10000, 17800, 10008, 25992, 10024, 11656, 10032, 19848, 10040, 28040, 10056, 13704, 10064, 21896, 10072, 30088,
    10088, 15752, 10096, 23944, 10104, 32136, 10128, 18312, 10136, 26504, 10152, 12168, 10160, 20360, 10168, 28552,
    10184, 14216, 10192, 22408, 10200, 30600, 10216, 16264, 10224, 24456, 10232, 32648, 10256, 16424, 10264, 24616,
    10288, 18472, 10296, 26664, 10312, 12328, 10320, 20520, 10328, 28712, 10344, 14376, 10352, 22568, 10360, 30760,
    10384, 16936, 10392, 25128, 10408, 10792, 10416, 18984, 10424, 27176, 10440, 12840, 10448, 21032, 10456, 29224,
    10472, 14888, 10480, 23080, 10488, 31272, 10512, 17448, 10520, 25640, 10536, 11304, 10544, 19496, 10552, 27688,
    10568, 13352, 10576, 21544, 10584, 29736, 10600, 15400, 10608, 23592, 10616, 31784, 10640, 17960, 10648, 26152,
    10664, 11816, 10672, 20008, 10680, 28200, 10696, 13864, 10704, 22056, 10712, 30248, 10728, 15912, 10736, 24104,
    10744, 32296, 10768, 16552, 10776, 24744, 10800, 18600, 10808, 26792, 10824, 12456, 10832, 20648, 10840, 28840,
    10856, 14504, 10864, 22696, 10872, 30888, 10896, 17064, 10904, 25256, 10928, 19112, 10936, 27304, 10952, 12968,
    10960, 21160, 10968, 29352, 10984, 15016, 10992, 23208, 11000, 31400, 11024, 17576, 11032, 25768, 11048, 11432,
    11056, 19624, 11064, 27816, 11080, 13480, 11088, 21672, 11096, 29864, 11112, 15528, 11120, 23720, 11128, 31912,
    11152, 18088, 11160, 26280, 11176, 11944, 11184, 20136, 11192, 28328, 11208, 13992, 11216, 22184, 11224, 30376,
    11240, 16040, 11248, 24232, 11256, 32424, 11280, 16680, 11288, 24872, 11312, 18728, 11320, 26920, 11336, 12584,
    11344, 20776, 11352, 28968, 11368, 14632, 11376, 22824, 11384, 31016, 11408, 17192, 11416, 25384, 11440, 19240,
    11448, 27432, 11464, 13096, 11472, 21288, 11480, 29480, 11496, 15144, 11504, 23336, 11512, 31528, 11536, 17704,
    11544, 25896, 11568, 19752, 11576, 27944, 11592, 13608, 11600, 21800, 11608, 29992, 11624, 15656, 11632, 23848,
    11640, 32040, 11664, 18216, 11672, 26408, 11688, 12072, 11696, 20264, 11704, 28456, 11720, 14120, 11728, 22312,
    11736, 30504, 11752, 16168, 11760, 24360, 11768, 32552, 11792, 16808, 11800, 25000, 11824, 18856, 11832, 27048,
    11848, 12712, 11856, 20904, 11864, 29096, 11880, 14760, 11888, 22952, 11896, 31144, 11920, 17320, 11928, 25512,
    11952, 19368, 11960, 27560, 11976, 13224, 11984, 21416, 11992, 29608, 12008, 15272, 12016, 23464, 12024, 31656,
    12048, 17832, 12056, 26024, 12080, 19880, 12088, 28072, 12104, 13736, 12112, 21928, 12120, 30120, 12136, 15784,
    12144, 23976, 12152, 32168, 12176, 18344, 12184, 26536, 12208, 20392, 12216, 28584, 12232, 14248, 12240, 22440,
    12248, 30632, 12264, 16296, 12272, 24488, 12280, 32680, 12304, 16456, 12312, 24648, 12336, 18504, 12344, 26696,
    12368, 20552, 12376, 28744, 12392, 14408, 12400, 22600, 12408, 30792, 12432, 16968, 12440, 25160, 12464, 19016,
    12472, 27208, 12488, 12872, 12496, 21064, 12504, 29256, 12520, 14920, 12528, 23112, 12536, 31304, 12560, 17480,
    12568, 25672, 12592, 19528, 12600, 27720, 12616, 13384, 12624, 21576, 12632, 29768, 12648, 15432, 12656, 23624,
    12664, 31816, 12688, 17992, 12696, 26184, 12720, 20040, 12728, 28232, 12744, 13896, 12752, 22088, 12760, 30280,
    12776, 15944, 12784, 24136, 12792, 32328, 12816, 16584, 12824, 24776, 12848, 18632, 12856, 26824, 12880, 20680,
    12888, 28872, 12904, 14536, 12912, 22728, 12920, 30920, 12944, 17096, 12952, 25288, 12976, 19144, 12984, 27336,
    13008, 21192, 13016, 29384, 13032, 15048, 13040, 23240, 13048, 31432, 13072, 17608, 13080, 25800, 13104, 19656,
    13112, 27848, 13128, 13512, 13136, 21704, 13144, 29896, 13160, 15560, 13168, 23752, 13176, 31944, 13200, 18120,
    13208, 26312, 13232, 20168, 13240, 28360, 13256, 14024, 13264, 22216, 13272, 30408, 13288, 16072, 13296, 24264,
    13304, 32456, 13328, 16712, 13336, 24904, 13360, 18760, 13368, 26952, 13392, 20808, 13400, 29000, 13416, 14664,
    13424, 22856, 13432, 31048, 13456, 17224, 13464, 25416, 13488, 19272, 13496, 27464, 13520, 21320, 13528, 29512,
    13544, 15176, 13552, 23368, 13560, 31560, 13584, 17736, 13592, 25928, 13616, 19784, 13624, 27976, 13648, 21832,
    13656, 30024, 13672, 15688, 13680, 23880, 13688, 32072, 13712, 18248, 13720, 26440, 13744, 20296, 13752, 28488,
    13768, 14152, 13776, 22344, 13784, 30536, 13800, 16200, 13808, 24392, 13816, 32584, 13840, 16840, 13848, 25032,
    13872, 18888, 13880, 27080, 13904, 20936, 13912, 29128, 13928, 14792, 13936, 22984, 13944, 31176, 13968, 17352,
    13976, 25544, 14000, 19400, 14008, 27592, 14032, 21448, 14040, 29640, 14056, 15304, 14064, 23496, 14072, 31688,
    14096, 17864, 14104, 26056, 14128, 19912, 14136, 28104, 14160, 21960, 14168, 30152, 14184, 15816, 14192, 24008,
    14200, 32200, 14224, 18376, 14232, 26568, 14256, 20424, 14264, 28616, 14288, 22472, 14296, 30664, 14312, 16328,
    14320, 24520, 14328, 32712, 14352, 16488, 14360, 24680, 14384, 18536, 14392, 26728, 14416, 20584, 14424, 28776,
    14448, 22632, 14456, 30824, 14480, 17000, 14488, 25192, 14512, 19048, 14520, 27240, 14544, 21096, 14552, 29288,
    14568, 14952, 14576, 23144, 14584, 31336, 14608, 17512, 14616, 25704, 14640, 19560, 14648, 27752, 14672, 21608,
    14680, 29800, 14696, 15464, 14704, 23656, 14712, 31848, 14736, 18024, 14744, 26216, 14768, 20072, 14776, 28264,
    14800, 22120, 14808, 30312, 14824, 15976, 14832, 24168, 14840, 32360, 14864, 16616, 14872, 24808, 14896, 18664,
    14904, 26856, 14928, 20712, 14936, 28904, 14960, 22760, 14968, 30952, 14992, 17128, 15000, 25320, 15024, 19176,
    15032, 27368, 15056, 21224, 15064, 29416, 15088, 23272, 15096, 31464, 15120, 17640, 15128, 25832, 15152, 19688,
    15160, 27880, 15184, 21736, 15192, 29928, 15208, 15592, 15216, 23784, 15224, 31976, 15248, 18152, 15256, 26344,
    15280, 20200, 15288, 28392, 15312, 22248, 15320, 30440, 15336, 16104, 15344, 24296, 15352, 32488, 15376, 16744,
    15384, 24936, 15408, 18792, 15416, 26984, 15440, 20840, 15448, 29032, 15472, 22888, 15480, 31080, 15504, 17256,
    15512, 25448, 15536, 19304, 15544, 27496, 15568, 21352, 15576, 29544, 15600, 23400, 15608, 31592, 15632, 17768,
    15640, 25960, 15664, 19816, 15672, 28008, 15696, 21864, 15704, 30056, 15728, 23912, 15736, 32104, 15760, 18280,
    15768, 26472, 15792, 20328, 15800, 28520, 15824, 22376, 15832, 30568, 15848, 16232, 15856, 24424, 15864, 32616,
    15888, 16872, 15896, 25064, 15920, 18920, 15928, 27112, 15952, 20968, 15960, 29160, 15984, 23016, 15992, 31208,
    16016, 17384, 16024, 25576, 16048, 19432, 16056, 27624, 16080, 21480, 16088, 29672, 16112, 23528, 16120, 31720,
    16144, 17896, 16152, 26088, 16176, 19944, 16184, 28136, 16208, 21992, 16216, 30184, 16240, 24040, 16248, 32232,
    16272, 18408, 16280, 26600, 16304, 20456, 16312, 28648, 16336, 22504, 16344, 30696, 16368, 24552, 16376, 32744,
    16408, 24592, 16432, 18448, 16440, 26640, 16464, 20496, 16472, 28688, 16496, 22544, 16504, 30736, 16528, 16912,
    16536, 25104, 16560, 18960, 16568, 27152, 16592, 21008, 16600, 29200, 16624, 23056, 16632, 31248, 16656, 17424,
    16664, 25616, 16688, 19472, 16696, 27664, 16720, 21520, 16728, 29712, 16752, 23568, 16760, 31760, 16784, 17936,
    16792, 26128, 16816, 19984, 16824, 28176, 16848, 22032, 16856, 30224, 16880, 24080, 16888, 32272, 16920, 24720,
    16944, 18576, 16952, 26768, 16976, 20624, 16984, 28816, 17008, 22672, 17016, 30864, 17048, 25232, 17072, 19088,
    17080, 27280, 17104, 21136, 17112, 29328, 17136, 23184, 17144, 31376, 17168, 17552, 17176, 25744, 17200, 19600,
    17208, 27792, 17232, 21648, 17240, 29840, 17264, 23696, 17272, 31888, 17296, 18064, 17304, 26256, 17328, 20112,
    17336, 28304, 17360, 22160, 17368, 30352, 17392, 24208, 17400, 32400, 17432, 24848, 17456, 18704, 17464, 26896,
    17488, 20752, 17496, 28944, 17520, 22800, 17528, 30992, 17560, 25360, 17584, 19216, 17592, 27408, 17616, 21264,
    17624, 29456, 17648, 23312, 17656, 31504, 17688, 25872, 17712, 19728, 17720, 27920, 17744, 21776, 17752, 29968,
    17776, 23824, 17784, 32016, 17808, 18192, 17816, 26384, 17840, 20240, 17848, 28432, 17872, 22288, 17880, 30480,
    17904, 24336, 17912, 32528, 17944, 24976, 17968, 18832, 17976, 27024, 18000, 20880, 18008, 29072, 18032, 22928,
    18040, 31120, 18072, 25488, 18096, 19344, 18104, 27536, 18128, 21392, 18136, 29584, 18160, 23440, 18168, 31632,
    18200, 26000, 18224, 19856, 18232, 28048, 18256, 21904, 18264, 30096, 18288, 23952, 18296, 32144, 18328, 26512,
    18352, 20368, 18360, 28560, 18384, 22416, 18392, 30608, 18416, 24464, 18424, 32656, 18456, 24624, 18488, 26672,
    18512, 20528, 18520, 28720, 18544, 22576, 18552, 30768, 18584, 25136, 18608, 18992, 18616, 27184, 18640, 21040,
    18648, 29232, 18672, 23088, 18680, 31280, 18712, 25648, 18736, 19504, 18744, 27696, 18768, 21552, 18776, 29744,
    18800, 23600, 18808, 31792, 18840, 26160, 18864, 20016, 18872, 28208, 18896, 22064, 18904, 30256, 18928, 24112,
    18936, 32304, 18968, 24752, 19000, 26800, 19024, 20656, 19032, 28848, 19056, 22704, 19064, 30896, 19096, 25264,
    19128, 27312, 19152, 21168, 19160, 29360, 19184, 23216, 19192, 31408, 19224, 25776, 19248, 19632, 19256, 27824,
    19280, 21680, 19288, 29872, 19312, 23728, 19320, 31920, 19352, 26288, 19376, 20144, 19384, 28336, 19408, 22192,
    19416, 30384, 19440, 24240, 19448, 32432, 19480, 24880, 19512, 26928, 19536, 20784, 19544, 28976, 19568, 22832,
    19576, 31024, 19608, 25392, 19640, 27440, 19664, 21296, 19672, 29488, 19696, 23344, 19704, 31536, 19736, 25904,
    19768, 27952, 19792, 21808, 19800, 30000, 19824, 23856, 19832, 32048, 19864, 26416, 19888, 20272, 19896, 28464,
    19920, 22320, 19928, 30512, 19952, 24368, 19960, 32560, 19992, 25008, 20024, 27056, 20048, 20912, 20056, 29104,
    20080, 22960, 20088, 31152, 20120, 25520, 20152, 27568, 20176, 21424, 20184, 29616, 20208, 23472, 20216, 31664,
    20248, 26032, 20280, 28080, 20304, 21936, 20312, 30128, 20336, 23984, 20344, 32176, 20376, 26544, 20408, 28592,
    20432, 22448, 20440, 30640, 20464, 24496, 20472, 32688, 20504, 24656, 20536, 26704, 20568, 28752, 20592, 22608,
    20600, 30800, 20632, 25168, 20664, 27216, 20688, 21072, 20696, 29264, 20720, 23120, 20728, 31312, 20760, 25680,
    20792, 27728, 20816, 21584, 20824, 29776, 20848, 23632, 20856, 31824, 20888, 26192, 20920, 28240, 20944, 22096,
    20952, 30288, 20976, 24144, 20984, 32336, 21016, 24784, 21048, 26832, 21080, 28880, 21104, 22736, 21112, 30928,
    21144, 25296, 21176, 27344, 21208, 29392, 21232, 23248, 21240, 31440, 21272, 25808, 21304, 27856, 21328, 21712,
    21336, 29904, 21360, 23760, 21368, 31952, 21400, 26320, 21432, 28368, 21456, 22224, 21464, 30416, 21488, 24272,
    21496, 32464, 21528, 24912, 21560, 26960, 21592, 29008, 21616, 22864, 21624, 31056, 21656, 25424, 21688, 27472,
    21720, 29520, 21744, 23376, 21752, 31568, 21784, 25936, 21816, 27984, 21848, 30032, 21872, 23888, 21880, 32080,
    21912, 26448, 21944, 28496, 21968, 22352, 21976, 30544, 22000, 24400, 22008, 32592, 22040, 25040, 22072, 27088,
    22104, 29136, 22128, 22992, 22136, 31184, 22168, 25552, 22200, 27600, 22232, 29648, 22256, 23504, 22264, 31696,
    22296, 26064, 22328, 28112, 22360, 30160, 22384, 24016, 22392, 32208, 22424, 26576, 22456, 28624, 22488, 30672,
    22512, 24528, 22520, 32720, 22552, 24688, 22584, 26736, 22616, 28784, 22648, 30832, 22680, 25200, 22712, 27248,
    22744, 29296, 22768, 23152, 22776, 31344, 22808, 25712, 22840, 27760, 22872, 29808, 22896, 23664, 22904, 31856,
    22936, 26224, 22968, 28272, 23000, 30320, 23024, 24176, 23032, 32368, 23064, 24816, 23096, 26864, 23128, 28912,
    23160, 30960, 23192, 25328, 23224, 27376, 23256, 29424, 23288, 31472, 23320, 25840, 23352, 27888, 23384, 29936,
    23408, 23792, 23416, 31984, 23448, 26352, 23480, 28400, 23512, 30448, 23536, 24304, 23544, 32496, 23576, 24944,
    23608, 26992, 23640, 29040, 23672, 31088, 23704, 25456, 23736, 27504, 23768, 29552, 23800, 31600, 23832, 25968,
    23864, 28016, 23896, 30064, 23928, 32112, 23960, 26480, 23992, 28528, 24024, 30576, 24048, 24432, 24056, 32624,
    24088, 25072, 24120, 27120, 24152, 29168, 24184, 31216, 24216, 25584, 24248, 27632, 24280, 29680, 24312, 31728,
    24344, 26096, 24376, 28144, 24408, 30192, 24440, 32240, 24472, 26608, 24504, 28656, 24536, 30704, 24568, 32752,
    24632, 26648, 24664, 28696, 24696, 30744, 24728, 25112, 24760, 27160, 24792, 29208, 24824, 31256, 24856, 25624,
    24888, 27672, 24920, 29720, 24952, 31768, 24984, 26136, 25016, 28184, 25048, 30232, 25080, 32280, 25144, 26776,
    25176, 28824, 25208, 30872, 25272, 27288, 25304, 29336, 25336, 31384, 25368, 25752, 25400, 27800, 25432, 29848,
    25464, 31896, 25496, 26264, 25528, 28312, 25560, 30360, 25592, 32408, 25656, 26904, 25688, 28952, 25720, 31000,
    25784, 27416, 25816, 29464, 25848, 31512, 25912, 27928, 25944, 29976, 25976, 32024, 26008, 26392, 26040, 28440,
    26072, 30488, 26104, 32536, 26168, 27032, 26200, 29080, 26232, 31128, 26296, 27544, 26328, 29592, 26360, 31640,
    26424, 28056, 26456, 30104, 26488, 32152, 26552, 28568, 26584, 30616, 26616, 32664, 26712, 28728, 26744, 30776,
    26808, 27192, 26840, 29240, 26872, 31288, 26936, 27704, 26968, 29752, 27000, 31800, 27064, 28216, 27096, 30264,
    27128, 32312, 27224, 28856, 27256, 30904, 27352, 29368, 27384, 31416, 27448, 27832, 27480, 29880, 27512, 31928,
    27576, 28344, 27608, 30392, 27640, 32440, 27736, 28984, 27768, 31032, 27864, 29496, 27896, 31544, 27992, 30008,
    28024, 32056, 28088, 28472, 28120, 30520, 28152, 32568, 28248, 29112, 28280, 31160, 28376, 29624, 28408, 31672,
    28504, 30136, 28536, 32184, 28632, 30648, 28664, 32696, 28792, 30808, 28888, 29272, 28920, 31320, 29016, 29784,
    29048, 31832, 29144, 30296, 29176, 32344, 29304, 30936, 29432, 31448, 29528, 29912, 29560, 31960, 29656, 30424,
    29688, 32472, 29816, 31064, 29944, 31576, 30072, 32088, 30168, 30552, 30200, 32600, 30328, 31192, 30456, 31704,
    30584, 32216, 30712, 32728, 30968, 31352, 31096, 31864, 31224, 32376, 31608, 31992, 31736, 32504, 32248, 32632,
};
const uint16_t bitrev4r_table_4096_fc32_size = 2016;

extern const uint16_t bitrev4r_table_4096_fc32[];
extern const uint16_t bitrev4r_table_4096_fc32_size;


void dsps_fft4r_rev_tables_init_fc32(void)
{
    dsps_fft4r_rev_tables_fc32[0] = (uint16_t *)bitrev4r_table_16_fc32;
    dsps_fft4r_rev_tables_fc32[1] = (uint16_t *)bitrev4r_table_64_fc32;
    dsps_fft4r_rev_tables_fc32[2] = (uint16_t *)bitrev4r_table_256_fc32;
    dsps_fft4r_rev_tables_fc32[3] = (uint16_t *)bitrev4r_table_1024_fc32;
    dsps_fft4r_rev_tables_fc32[4] = (uint16_t *)bitrev4r_table_4096_fc32;

}

uint16_t *dsps_fft4r_rev_tables_fc32[] = {
    (uint16_t *)bitrev4r_table_16_fc32,
    (uint16_t *)bitrev4r_table_64_fc32,
    (uint16_t *)bitrev4r_table_256_fc32,
    (uint16_t *)bitrev4r_table_1024_fc32,
    (uint16_t *)bitrev4r_table_4096_fc32,
};

const uint16_t dsps_fft4r_rev_tables_fc32_size[] = {
    (uint16_t)bitrev4r_table_16_fc32_size,
    (uint16_t)bitrev4r_table_64_fc32_size,
    (uint16_t)bitrev4r_table_256_fc32_size,
    (uint16_t)bitrev4r_table_1024_fc32_size,
    (uint16_t)bitrev4r_table_4096_fc32_size,
};
