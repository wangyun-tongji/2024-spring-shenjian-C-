#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a, b, angle;
	const double pi = 3.14159;
	cout << "�����������ε����߼���н�(�Ƕ�)" << endl;
	cin >> a >> b >> angle;
	float area = 0.5 * a * b * sin(angle / 180.0 * pi);
	cout << "���������Ϊ : " <<fixed<<setprecision(2)<<area<< endl;
	return 0;
}