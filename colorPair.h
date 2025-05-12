#ifndef COLORPAIR_H
#define COLORPAIR_H

#include<string.h>
#include<iostream>

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    const char* MajorColorNames[];
    int numberOfMajorColors;
        
    const char* MinorColorNames[] ;
    int numberOfMinorColors;
        

   class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor)
            {}
            MajorColor getMajor(); 
            MinorColor getMinor() ;
            std::string ToString();
    };


 ColorPair GetColorFromPairNumber(int pairNumber);
 int GetPairNumberFromColor(MajorColor major, MinorColor minor);
 }

#endif