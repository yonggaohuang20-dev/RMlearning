#include<iostream>
#include<iomanip>
#include"Angle.hpp"
using namespace std;

int main() {

	Angle bullet(10.0, 9.8);

	double d=0.0;
	cout << "请输入距离d:";
	cin >> d;

	double theta = bullet.solver(d);

	const double PI = 3.14;

	if (theta < 0) {
		cout << "无解"<<endl;
	}
	else {
		cout << fixed; 
        cout.precision(4);
		
		cout << "抬升角度：" << theta * 180.0 / PI << endl;
	}
	Angle bullet2(10.0,9.8) ;
	double h = 0.0;
	double t = 0.0;
	cout << "请输入高度h:"<<endl;
	cin >> h ;

	double theta1= bullet2.solver(d , h , t);
	if(theta1<=0){
		cout <<	"无解"<<endl;
	}
	else{
		double thetang = theta1 * 180.0 / PI ;
		cout << "弧度theta:"<<theta1<<endl;
		cout << "角度theta:"<<thetang<<endl;
		cout <<"飞行时间t:"<< t << endl;
	
	}

}