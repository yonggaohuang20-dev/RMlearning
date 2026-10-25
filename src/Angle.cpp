#include "Angle.hpp"
#include<cmath>

Angle::Angle(double v0, double g) : initspeed(v0), gravity(g) {}

double Angle::solver (double distance){
    if(distance <= 0){
        return -1.0;
    }
     // 根据推导公式：sin(2θ) = (g * d) / (v0^2)
    double sin2Theta = (gravity * distance) / (initspeed * initspeed);

    if (sin2Theta > 1.0) {
        return -1.0;
    }

     return std::asin(sin2Theta) / 2.0;

}


