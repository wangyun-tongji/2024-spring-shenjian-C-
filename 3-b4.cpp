#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a, b, angle;
	const double pi = 3.14159;
	cout << "请输入三角形的两边及其夹角(角度)" << endl;
	cin >> a >> b >> angle;
	float area = 0.5 * a * b * sin(angle / 180.0 * pi);
	cout << "三角形面积为 : " <<fixed<<setprecision(2)<<area<< endl;
	return 0;
}