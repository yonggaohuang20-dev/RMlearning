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
double Angle::solver(double d ,double h ,double& t){
    if(d<=0 || h<0){
        return -1.0;
    }
    double A=(gravity*d*d)/(2*initspeed*initspeed);
    double B=-d;
    double C=h+A;
    double delta = B*B-4*A*C;

    
    
    if(delta<0){
        t=-1.0;
        return -1.0;
    }
    double tanTheta = (-B - std::sqrt(delta)) / (2.0 * A);
    double theta = std::atan(tanTheta);

    t = d / (initspeed * std::cos(theta));
    return theta;
}

