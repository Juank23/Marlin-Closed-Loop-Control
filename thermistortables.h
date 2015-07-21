#ifndef THERMISTORTABLES_H_
#define THERMISTORTABLES_H_

#include "Marlin.h"

#define OVERSAMPLENR 16

#if (THERMISTORHEATER_0 == 1) || (THERMISTORHEATER_1 == 1)  || (THERMISTORHEATER_2 == 1) || (THERMISTORBED == 1) //100k bed thermistor

const short temptable_1[][2] PROGMEM = {
{       23*OVERSAMPLENR ,       300     },
{       25*OVERSAMPLENR ,       295     },
{       27*OVERSAMPLENR ,       290     },
{       28*OVERSAMPLENR ,       285     },
{       31*OVERSAMPLENR ,       280     },
{       33*OVERSAMPLENR ,       275     },
{       35*OVERSAMPLENR ,       270     },
{       38*OVERSAMPLENR ,       265     },
{       41*OVERSAMPLENR ,       260     },
{       44*OVERSAMPLENR ,       255     },
{       48*OVERSAMPLENR ,       250     },
{       52*OVERSAMPLENR ,       245     },
{       56*OVERSAMPLENR ,       240     },
{       61*OVERSAMPLENR ,       235     },
{       66*OVERSAMPLENR ,       230     },
{       71*OVERSAMPLENR ,       225     },
{       78*OVERSAMPLENR ,       220     },
{       84*OVERSAMPLENR ,       215     },
{       92*OVERSAMPLENR ,       210     },
{       100*OVERSAMPLENR        ,       205     },
{       109*OVERSAMPLENR        ,       200     },
{       120*OVERSAMPLENR        ,       195     },
{       131*OVERSAMPLENR        ,       190     },
{       143*OVERSAMPLENR        ,       185     },
{       156*OVERSAMPLENR        ,       180     },
{       171*OVERSAMPLENR        ,       175     },
{       187*OVERSAMPLENR        ,       170     },
{       205*OVERSAMPLENR        ,       165     },
{       224*OVERSAMPLENR        ,       160     },
{       245*OVERSAMPLENR        ,       155     },
{       268*OVERSAMPLENR        ,       150     },
{       293*OVERSAMPLENR        ,       145     },
{       320*OVERSAMPLENR        ,       140     },
{       348*OVERSAMPLENR        ,       135     },
{       379*OVERSAMPLENR        ,       130     },
{       411*OVERSAMPLENR        ,       125     },
{       445*OVERSAMPLENR        ,       120     },
{       480*OVERSAMPLENR        ,       115     },
{       516*OVERSAMPLENR        ,       110     },
{       553*OVERSAMPLENR        ,       105     },
{       591*OVERSAMPLENR        ,       100     },
{       628*OVERSAMPLENR        ,       95      },
{       665*OVERSAMPLENR        ,       90      },
{       702*OVERSAMPLENR        ,       85      },
{       737*OVERSAMPLENR        ,       80      },
{       770*OVERSAMPLENR        ,       75      },
{       801*OVERSAMPLENR        ,       70      },
{       830*OVERSAMPLENR        ,       65      },
{       857*OVERSAMPLENR        ,       60      },
{       881*OVERSAMPLENR        ,       55      },
{       903*OVERSAMPLENR        ,       50      },
{       922*OVERSAMPLENR        ,       45      },
{       939*OVERSAMPLENR        ,       40      },
{       954*OVERSAMPLENR        ,       35      },
{       966*OVERSAMPLENR        ,       30      },
{       977*OVERSAMPLENR        ,       25      },
{       985*OVERSAMPLENR        ,       20      },
{       993*OVERSAMPLENR        ,       15      },
{       999*OVERSAMPLENR        ,       10      },
{       1004*OVERSAMPLENR       ,       5       },
{       1008*OVERSAMPLENR       ,       0       } //safety
};
#endif
#if (THERMISTORHEATER_0 == 2) || (THERMISTORHEATER_1 == 2) || (THERMISTORHEATER_2 == 2) || (THERMISTORBED == 2) //200k bed thermistor
const short temptable_2[][2] PROGMEM = {
   {1*OVERSAMPLENR, 848},
   {54*OVERSAMPLENR, 275},
   {107*OVERSAMPLENR, 228},
   {160*OVERSAMPLENR, 202},
   {213*OVERSAMPLENR, 185},
   {266*OVERSAMPLENR, 171},
   {319*OVERSAMPLENR, 160},
   {372*OVERSAMPLENR, 150},
   {425*OVERSAMPLENR, 141},
   {478*OVERSAMPLENR, 133},
   {531*OVERSAMPLENR, 125},
   {584*OVERSAMPLENR, 118},
   {637*OVERSAMPLENR, 110},
   {690*OVERSAMPLENR, 103},
   {743*OVERSAMPLENR, 95},
   {796*OVERSAMPLENR, 86},
   {849*OVERSAMPLENR, 77},
   {902*OVERSAMPLENR, 65},
   {955*OVERSAMPLENR, 49},
   {1008*OVERSAMPLENR, 17},
   {1020*OVERSAMPLENR, 0} //safety
};

#endif
#if (THERMISTORHEATER_0 == 3) || (THERMISTORHEATER_1 == 3) || (THERMISTORHEATER_2 == 3) || (THERMISTORBED == 3) //mendel-parts
const short temptable_3[][2] PROGMEM = {
                {1*OVERSAMPLENR,864},
                {21*OVERSAMPLENR,300},
                {25*OVERSAMPLENR,290},
                {29*OVERSAMPLENR,280},
                {33*OVERSAMPLENR,270},
                {39*OVERSAMPLENR,260},
                {46*OVERSAMPLENR,250},
                {54*OVERSAMPLENR,240},
                {64*OVERSAMPLENR,230},
                {75*OVERSAMPLENR,220},
                {90*OVERSAMPLENR,210},
                {107*OVERSAMPLENR,200},
                {128*OVERSAMPLENR,190},
                {154*OVERSAMPLENR,180},
                {184*OVERSAMPLENR,170},
                {221*OVERSAMPLENR,160},
                {265*OVERSAMPLENR,150},
                {316*OVERSAMPLENR,140},
                {375*OVERSAMPLENR,130},
                {441*OVERSAMPLENR,120},
                {513*OVERSAMPLENR,110},
                {588*OVERSAMPLENR,100},
                {734*OVERSAMPLENR,80},
                {856*OVERSAMPLENR,60},
                {938*OVERSAMPLENR,40},
                {986*OVERSAMPLENR,20},
                {1008*OVERSAMPLENR,0},
                {1018*OVERSAMPLENR,-20}
        };

#endif
#if (THERMISTORHEATER_0 == 4) || (THERMISTORHEATER_1 == 4) || (THERMISTORHEATER_2 == 4) || (THERMISTORBED == 4) //10k thermistor
const short temptable_4[][2] PROGMEM = {
   {1*OVERSAMPLENR, 430},
   {54*OVERSAMPLENR, 137},
   {107*OVERSAMPLENR, 107},
   {160*OVERSAMPLENR, 91},
   {213*OVERSAMPLENR, 80},
   {266*OVERSAMPLENR, 71},
   {319*OVERSAMPLENR, 64},
   {372*OVERSAMPLENR, 57},
   {425*OVERSAMPLENR, 51},
   {478*OVERSAMPLENR, 46},
   {531*OVERSAMPLENR, 41},
   {584*OVERSAMPLENR, 35},
   {637*OVERSAMPLENR, 30},
   {690*OVERSAMPLENR, 25},
   {743*OVERSAMPLENR, 20},
   {796*OVERSAMPLENR, 14},
   {849*OVERSAMPLENR, 7},
   {902*OVERSAMPLENR, 0},
   {955*OVERSAMPLENR, -11},
   {1008*OVERSAMPLENR, -35}
};
#endif

#if (THERMISTORHEATER_0 == 5) || (THERMISTORHEATER_1 == 5) || (THERMISTORHEATER_2 == 5) || (THERMISTORBED == 5) //100k ParCan thermistor (104GT-2)
const short temptable_5[][2] PROGMEM = {
{1*OVERSAMPLENR, 713},
{18*OVERSAMPLENR, 316},
{35*OVERSAMPLENR, 266},
{52*OVERSAMPLENR, 239},
{69*OVERSAMPLENR, 221},
{86*OVERSAMPLENR, 208},
{103*OVERSAMPLENR, 197},
{120*OVERSAMPLENR, 188},
{137*OVERSAMPLENR, 181},
{154*OVERSAMPLENR, 174},
{171*OVERSAMPLENR, 169},
{188*OVERSAMPLENR, 163},
{205*OVERSAMPLENR, 159},
{222*OVERSAMPLENR, 154},
{239*OVERSAMPLENR, 150},
{256*OVERSAMPLENR, 147},
{273*OVERSAMPLENR, 143},
{290*OVERSAMPLENR, 140},
{307*OVERSAMPLENR, 136},
{324*OVERSAMPLENR, 133},
{341*OVERSAMPLENR, 130},
{358*OVERSAMPLENR, 128},
{375*OVERSAMPLENR, 125},
{392*OVERSAMPLENR, 122},
{409*OVERSAMPLENR, 120},
{426*OVERSAMPLENR, 117},
{443*OVERSAMPLENR, 115},
{460*OVERSAMPLENR, 112},
{477*OVERSAMPLENR, 110},
{494*OVERSAMPLENR, 108},
{511*OVERSAMPLENR, 106},
{528*OVERSAMPLENR, 103},
{545*OVERSAMPLENR, 101},
{562*OVERSAMPLENR, 99},
{579*OVERSAMPLENR, 97},
{596*OVERSAMPLENR, 95},
{613*OVERSAMPLENR, 92},
{630*OVERSAMPLENR, 90},
{647*OVERSAMPLENR, 88},
{664*OVERSAMPLENR, 86},
{681*OVERSAMPLENR, 84},
{698*OVERSAMPLENR, 81},
{715*OVERSAMPLENR, 79},
{732*OVERSAMPLENR, 77},
{749*OVERSAMPLENR, 75},
{766*OVERSAMPLENR, 72},
{783*OVERSAMPLENR, 70},
{800*OVERSAMPLENR, 67},
{817*OVERSAMPLENR, 64},
{834*OVERSAMPLENR, 61},
{851*OVERSAMPLENR, 58},
{868*OVERSAMPLENR, 55},
{885*OVERSAMPLENR, 52},
{902*OVERSAMPLENR, 48},
{919*OVERSAMPLENR, 44},
{936*OVERSAMPLENR, 40},
{953*OVERSAMPLENR, 34},
{970*OVERSAMPLENR, 28},
{987*OVERSAMPLENR, 20},
{1004*OVERSAMPLENR, 8},
{1021*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 6) || (THERMISTORHEATER_1 == 6) || (THERMISTORHEATER_2 == 6) || (THERMISTORBED == 6) // 100k Epcos thermistor
const short temptable_6[][2] PROGMEM = {
   {28*OVERSAMPLENR, 250},
   {31*OVERSAMPLENR, 245},
   {35*OVERSAMPLENR, 240},
   {39*OVERSAMPLENR, 235},
   {42*OVERSAMPLENR, 230},
   {44*OVERSAMPLENR, 225},
   {49*OVERSAMPLENR, 220},
   {53*OVERSAMPLENR, 215},
   {62*OVERSAMPLENR, 210},
   {73*OVERSAMPLENR, 205},
   {72*OVERSAMPLENR, 200},
   {94*OVERSAMPLENR, 190},
   {102*OVERSAMPLENR, 185},
   {116*OVERSAMPLENR, 170},
   {143*OVERSAMPLENR, 160},
   {183*OVERSAMPLENR, 150},
   {223*OVERSAMPLENR, 140},
   {270*OVERSAMPLENR, 130},
   {318*OVERSAMPLENR, 120},
   {383*OVERSAMPLENR, 110},
   {413*OVERSAMPLENR, 105},
   {439*OVERSAMPLENR, 100},
   {484*OVERSAMPLENR, 95},
   {513*OVERSAMPLENR, 90},
   {607*OVERSAMPLENR, 80},
   {664*OVERSAMPLENR, 70},
   {781*OVERSAMPLENR, 60},
   {810*OVERSAMPLENR, 55},
   {849*OVERSAMPLENR, 50},
   {914*OVERSAMPLENR, 45},
   {914*OVERSAMPLENR, 40},
   {935*OVERSAMPLENR, 35},
   {954*OVERSAMPLENR, 30},
   {970*OVERSAMPLENR, 25},
   {978*OVERSAMPLENR, 22},
   {1008*OVERSAMPLENR, 3}
};
#endif

#if (THERMISTORHEATER_0 == 7) || (THERMISTORHEATER_1 == 7) || (THERMISTORHEATER_2 == 7) || (THERMISTORBED == 7) // 100k Honeywell 135-104LAG-J01
const short temptable_7[][2] PROGMEM = {
   {46*OVERSAMPLENR, 270},
   {50*OVERSAMPLENR, 265},
   {54*OVERSAMPLENR, 260},
   {58*OVERSAMPLENR, 255},
   {62*OVERSAMPLENR, 250},
   {67*OVERSAMPLENR, 245},
   {72*OVERSAMPLENR, 240},
   {79*OVERSAMPLENR, 235},
   {85*OVERSAMPLENR, 230},
   {91*OVERSAMPLENR, 225},
   {99*OVERSAMPLENR, 220},
   {107*OVERSAMPLENR, 215},
   {116*OVERSAMPLENR, 210},
   {126*OVERSAMPLENR, 205},
   {136*OVERSAMPLENR, 200},
   {149*OVERSAMPLENR, 195},
   {160*OVERSAMPLENR, 190},
   {175*OVERSAMPLENR, 185},
   {191*OVERSAMPLENR, 180},
   {209*OVERSAMPLENR, 175},
   {224*OVERSAMPLENR, 170},
   {246*OVERSAMPLENR, 165},
   {267*OVERSAMPLENR, 160},
   {293*OVERSAMPLENR, 155},
   {316*OVERSAMPLENR, 150},
   {340*OVERSAMPLENR, 145},
   {364*OVERSAMPLENR, 140},
   {396*OVERSAMPLENR, 135},
   {425*OVERSAMPLENR, 130},
   {460*OVERSAMPLENR, 125},
   {489*OVERSAMPLENR, 120},
   {526*OVERSAMPLENR, 115},
   {558*OVERSAMPLENR, 110},
   {591*OVERSAMPLENR, 105},
   {628*OVERSAMPLENR, 100},
   {660*OVERSAMPLENR, 95},
   {696*OVERSAMPLENR, 90},
   {733*OVERSAMPLENR, 85},
   {761*OVERSAMPLENR, 80},
   {794*OVERSAMPLENR, 75},
   {819*OVERSAMPLENR, 70},
   {847*OVERSAMPLENR, 65},
   {870*OVERSAMPLENR, 60},
   {892*OVERSAMPLENR, 55},
   {911*OVERSAMPLENR, 50},
   {929*OVERSAMPLENR, 45},
   {944*OVERSAMPLENR, 40},
   {959*OVERSAMPLENR, 35},
   {971*OVERSAMPLENR, 30},
   {981*OVERSAMPLENR, 25},
   {989*OVERSAMPLENR, 20},
   {994*OVERSAMPLENR, 15},
   {1001*OVERSAMPLENR, 10},
   {1005*OVERSAMPLENR, 5}
};
#endif
#if (THERMISTORHEATER_0 == 51) || (THERMISTORHEATER_1 == 51) || (THERMISTORHEATER_2 == 51) || (THERMISTORBED == 51)
// 100k EPCOS (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee.
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: Twice the resolution and better linearity from 150C to 200C
const short temptable_51[][2] PROGMEM = {
   {1*OVERSAMPLENR, 350},
   {190*OVERSAMPLENR, 250}, //top rating 250C
   {203*OVERSAMPLENR, 245},
   {217*OVERSAMPLENR, 240},
   {232*OVERSAMPLENR, 235},
   {248*OVERSAMPLENR, 230},
   {265*OVERSAMPLENR, 225},
   {283*OVERSAMPLENR, 220},
   {302*OVERSAMPLENR, 215},
   {322*OVERSAMPLENR, 210},
   {344*OVERSAMPLENR, 205},
   {366*OVERSAMPLENR, 200},
   {390*OVERSAMPLENR, 195},
   {415*OVERSAMPLENR, 190},
   {440*OVERSAMPLENR, 185},
   {467*OVERSAMPLENR, 180},
   {494*OVERSAMPLENR, 175},
   {522*OVERSAMPLENR, 170},
   {551*OVERSAMPLENR, 165},
   {580*OVERSAMPLENR, 160},
   {609*OVERSAMPLENR, 155},
   {638*OVERSAMPLENR, 150},
   {666*OVERSAMPLENR, 145},
   {695*OVERSAMPLENR, 140},
   {722*OVERSAMPLENR, 135},
   {749*OVERSAMPLENR, 130},
   {775*OVERSAMPLENR, 125},
   {800*OVERSAMPLENR, 120},
   {823*OVERSAMPLENR, 115},
   {845*OVERSAMPLENR, 110},
   {865*OVERSAMPLENR, 105},
   {884*OVERSAMPLENR, 100},
   {901*OVERSAMPLENR, 95},
   {917*OVERSAMPLENR, 90},
   {932*OVERSAMPLENR, 85},
   {944*OVERSAMPLENR, 80},
   {956*OVERSAMPLENR, 75},
   {966*OVERSAMPLENR, 70},
   {975*OVERSAMPLENR, 65},
   {982*OVERSAMPLENR, 60},
   {989*OVERSAMPLENR, 55},
   {995*OVERSAMPLENR, 50},
   {1000*OVERSAMPLENR, 45},
   {1004*OVERSAMPLENR, 40},
   {1007*OVERSAMPLENR, 35},
   {1010*OVERSAMPLENR, 30},
   {1013*OVERSAMPLENR, 25},
   {1015*OVERSAMPLENR, 20},
   {1017*OVERSAMPLENR, 15},
   {1018*OVERSAMPLENR, 10},
   {1019*OVERSAMPLENR, 5},
   {1020*OVERSAMPLENR, 0},
   {1021*OVERSAMPLENR, -5}
};
#endif

#if (THERMISTORHEATER_0 == 52) || (THERMISTORHEATER_1 == 52) || (THERMISTORHEATER_2 == 52) || (THERMISTORBED == 52) 
// 200k ATC Semitec 204GT-2 (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: More resolution and better linearity from 150C to 200C
const short temptable_52[][2] PROGMEM = {
   {1*OVERSAMPLENR, 500},
   {125*OVERSAMPLENR, 300}, //top rating 300C
   {142*OVERSAMPLENR, 290},
   {162*OVERSAMPLENR, 280},
   {185*OVERSAMPLENR, 270},
   {211*OVERSAMPLENR, 260},
   {240*OVERSAMPLENR, 250},
   {274*OVERSAMPLENR, 240},
   {312*OVERSAMPLENR, 230},
   {355*OVERSAMPLENR, 220},
   {401*OVERSAMPLENR, 210},
   {452*OVERSAMPLENR, 200},
   {506*OVERSAMPLENR, 190},
   {563*OVERSAMPLENR, 180},
   {620*OVERSAMPLENR, 170},
   {677*OVERSAMPLENR, 160},
   {732*OVERSAMPLENR, 150},
   {783*OVERSAMPLENR, 140},
   {830*OVERSAMPLENR, 130},
   {871*OVERSAMPLENR, 120},
   {906*OVERSAMPLENR, 110},
   {935*OVERSAMPLENR, 100},
   {958*OVERSAMPLENR, 90},
   {976*OVERSAMPLENR, 80},
   {990*OVERSAMPLENR, 70},
   {1000*OVERSAMPLENR, 60},
   {1008*OVERSAMPLENR, 50},
   {1013*OVERSAMPLENR, 40},
   {1017*OVERSAMPLENR, 30},
   {1019*OVERSAMPLENR, 20},
   {1021*OVERSAMPLENR, 10},
   {1022*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 55) || (THERMISTORHEATER_1 == 55) || (THERMISTORHEATER_2 == 55) || (THERMISTORBED == 55) 
// 100k ATC Semitec 104GT-2 (Used on ParCan) (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: More resolution and better linearity from 150C to 200C
const short temptable_55[][2] PROGMEM = {
   {1*OVERSAMPLENR, 500},
   {76*OVERSAMPLENR, 300},
   {87*OVERSAMPLENR, 290},
   {100*OVERSAMPLENR, 280},
   {114*OVERSAMPLENR, 270},
   {131*OVERSAMPLENR, 260},
   {152*OVERSAMPLENR, 250},
   {175*OVERSAMPLENR, 240},
   {202*OVERSAMPLENR, 230},
   {234*OVERSAMPLENR, 220},
   {271*OVERSAMPLENR, 210},
   {312*OVERSAMPLENR, 200},
   {359*OVERSAMPLENR, 190},
   {411*OVERSAMPLENR, 180},
   {467*OVERSAMPLENR, 170},
   {527*OVERSAMPLENR, 160},
   {590*OVERSAMPLENR, 150},
   {652*OVERSAMPLENR, 140},
   {713*OVERSAMPLENR, 130},
   {770*OVERSAMPLENR, 120},
   {822*OVERSAMPLENR, 110},
   {867*OVERSAMPLENR, 100},
   {905*OVERSAMPLENR, 90},
   {936*OVERSAMPLENR, 80},
   {961*OVERSAMPLENR, 70},
   {979*OVERSAMPLENR, 60},
   {993*OVERSAMPLENR, 50},
   {1003*OVERSAMPLENR, 40},
   {1010*OVERSAMPLENR, 30},
   {1015*OVERSAMPLENR, 20},
   {1018*OVERSAMPLENR, 10},
   {1020*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 60) || (THERMISTORHEATER_1 == 60) || (THERMISTORHEATER_2 == 60) || (THERMISTORBED == 60) // Maker's Tool Works Kapton Bed Thermister
const short temptable_60[][2] PROGMEM = {
   {51*OVERSAMPLENR, 272},
   {61*OVERSAMPLENR, 258},
   {71*OVERSAMPLENR, 247},
   {81*OVERSAMPLENR, 237},
   {91*OVERSAMPLENR, 229},
   {101*OVERSAMPLENR, 221},
   {131*OVERSAMPLENR, 204},
   {161*OVERSAMPLENR, 190},
   {191*OVERSAMPLENR, 179},
   {231*OVERSAMPLENR, 167},
   {271*OVERSAMPLENR, 157},
   {311*OVERSAMPLENR, 148},
   {351*OVERSAMPLENR, 140},
   {381*OVERSAMPLENR, 135},
   {411*OVERSAMPLENR, 130},
   {441*OVERSAMPLENR, 125},
   {451*OVERSAMPLENR, 123},
   {461*OVERSAMPLENR, 122},
   {471*OVERSAMPLENR, 120},
   {481*OVERSAMPLENR, 119},
   {491*OVERSAMPLENR, 117},
   {501*OVERSAMPLENR, 116},
   {511*OVERSAMPLENR, 114},
   {521*OVERSAMPLENR, 113},
   {531*OVERSAMPLENR, 111},
   {541*OVERSAMPLENR, 110},
   {551*OVERSAMPLENR, 108},
   {561*OVERSAMPLENR, 107},
   {571*OVERSAMPLENR, 105},
   {581*OVERSAMPLENR, 104},
   {591*OVERSAMPLENR, 102},
   {601*OVERSAMPLENR, 101},
   {611*OVERSAMPLENR, 100},
   {621*OVERSAMPLENR, 98},
   {631*OVERSAMPLENR, 97},
   {641*OVERSAMPLENR, 95},
   {651*OVERSAMPLENR, 94},
   {661*OVERSAMPLENR, 92},
   {671*OVERSAMPLENR, 91},
   {681*OVERSAMPLENR, 90},
   {691*OVERSAMPLENR, 88},
   {701*OVERSAMPLENR, 87},
   {711*OVERSAMPLENR, 85},
   {721*OVERSAMPLENR, 84},
   {731*OVERSAMPLENR, 82},
   {741*OVERSAMPLENR, 81},
   {751*OVERSAMPLENR, 79},
   {761*OVERSAMPLENR, 77},
   {771*OVERSAMPLENR, 76},
   {781*OVERSAMPLENR, 74},
   {791*OVERSAMPLENR, 72},
   {801*OVERSAMPLENR, 71},
   {811*OVERSAMPLENR, 69},
   {821*OVERSAMPLENR, 67},
   {831*OVERSAMPLENR, 65},
   {841*OVERSAMPLENR, 63},
   {851*OVERSAMPLENR, 62},
   {861*OVERSAMPLENR, 60},
   {871*OVERSAMPLENR, 57},
   {881*OVERSAMPLENR, 55},
   {891*OVERSAMPLENR, 53},
   {901*OVERSAMPLENR, 51},
   {911*OVERSAMPLENR, 48},
   {921*OVERSAMPLENR, 45},
   {931*OVERSAMPLENR, 42},
   {941*OVERSAMPLENR, 39},
   {951*OVERSAMPLENR, 36},
   {961*OVERSAMPLENR, 32},
   {981*OVERSAMPLENR, 23},
   {991*OVERSAMPLENR, 17},
   {1001*OVERSAMPLENR, 9},
   {1008*OVERSAMPLENR, 0},
};
#endif


#define _TT_NAME(_N) temptable_ ## _N
#define TT_NAME(_N) _TT_NAME(_N)

#ifdef THERMISTORHEATER_0
  #define heater_0_temptable TT_NAME(THERMISTORHEATER_0)
  #define heater_0_temptable_len (sizeof(heater_0_temptable)/sizeof(*heater_0_temptable))
#else
#ifdef HEATER_0_USES_THERMISTOR
  #error No heater 0 thermistor table specified
#else  // HEATER_0_USES_THERMISTOR
  #define heater_0_temptable 0
  #define heater_0_temptable_len 0
#endif // HEATER_0_USES_THERMISTOR
#endif

#ifdef THERMISTORHEATER_1
  #define heater_1_temptable TT_NAME(THERMISTORHEATER_1)
  #define heater_1_temptable_len (sizeof(heater_1_temptable)/sizeof(*heater_1_temptable))
#else
#ifdef HEATER_1_USES_THERMISTOR
  #error No heater 1 thermistor table specified
#else  // HEATER_1_USES_THERMISTOR
  #define heater_1_temptable 0
  #define heater_1_temptable_len 0
#endif // HEATER_1_USES_THERMISTOR
#endif

#ifdef THERMISTORHEATER_2
  #define heater_2_temptable TT_NAME(THERMISTORHEATER_2)
  #define heater_2_temptable_len (sizeof(heater_2_temptable)/sizeof(*heater_2_temptable))
#else
#ifdef HEATER_2_USES_THERMISTOR
  #error No heater 2 thermistor table specified
#else  // HEATER_2_USES_THERMISTOR
  #define heater_2_temptable 0
  #define heater_2_temptable_len 0
#endif // HEATER_2_USES_THERMISTOR
#endif

#ifdef THERMISTORBED
  #define bedtemptable TT_NAME(THERMISTORBED)
  #define bedtemptable_len (sizeof(bedtemptable)/sizeof(*bedtemptable))
#else
#ifdef BED_USES_THERMISTOR
  #error No bed thermistor table specified
#endif // BED_USES_THERMISTOR
#endif

#endif //THERMISTORTABLES_H_

