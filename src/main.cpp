#include<iostream>
#include<iomanip>
#include"Angle.hpp"
using namespace std;

int main() {

	Angle bullet(10.0, 9.8);

	double d;
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
		
		cout << "̧抬升角度：" << theta * 180.0 / PI << endl;
	}
}