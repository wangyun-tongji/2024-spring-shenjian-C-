#include<iostream>
#include<iomanip>
using namespace std;
const double pi = 3.14159;
int main()
{
	double radius;
	double height;
	cout << "请输入半径和高度" << endl;
	cin >> radius >> height;
	double  circumference = 2 * pi * radius;
	double circular_area = pi * radius * radius;
	double ball_area = 4 * pi * radius * radius;
	double ball_volume = 4 * pi * radius * radius * radius / 3;
	double cylindrical_volume = pi * radius * radius * height;
	cout << "圆周长     " << ":" << " " << fixed << setprecision(2) << circumference << endl;
	cout << "圆面积     " << ":" << " " << fixed << setprecision(2) << circular_area << endl;
	cout << "圆球表面积 " << ":" << " " << fixed << setprecision(2) << ball_area << endl;
	cout << "圆球体积   " << ":" << " " << fixed << setprecision(2) << ball_volume << endl;
	cout << "圆柱体积   " << ":" << " " << fixed << setprecision(2) << cylindrical_volume << endl;
	return 0;
}