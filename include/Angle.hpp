#pragma once
class Angle{
private:
//前面放计算所需要的常量
    double initspeed;
    double gravity;
//public中函数可以
public :
    Angle (double v0,double g);
    double solver(double distance);

    //重载
    double solver(double d,double h,double &t);



};