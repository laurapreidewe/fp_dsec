/**
 * @file utils.cpp
 **/
#include <image_recognition/utils.h>
#include <algorithm>

// c system
#include <cfloat>
#include <cmath>
namespace utils {
    /**
    @brief formula konversi : https://docs.opencv.org/3.4/de/d25/imgproc_color_conversions.html
    */
    double bgr2hsv (uint8_t b, uint8_t g, uint8_t r) {

        double h, s, v;

        /**
        @brief :  floating-point format
                  8 bit value scaled to fit the 0 to 1 range.
        */
        double fb = b/255;
        double fg = g/255;
        double fr = r/255;

        double cmax = std::max(fb,fg,fr);
        double cmin = std::min(fb,fg,fr);
        double delta = cmax - cmin;

        if (cmax == fb){
            h = 240 + 60(fr-fg)/delta;
        } 

        else if (cmax == fg){
            h = 120 + 60(fb-fr)/delta;
        }

        else if (cmax == fr){
            h = 60(fg-fb)/delta;
        }

        if (h < 0){
            h = h + 360;
        }

        if (cmax != 0) {
            s = delta/cmax ;
        }
        else {
            s = 0;
        }

        v = cmax;

        /**
        @brief :  The values are then converted to the destination data type
        */
        h = h/2;
        s = 255*s;
        v = 255*v;   
        return 0;     
    }
} //namespace utils