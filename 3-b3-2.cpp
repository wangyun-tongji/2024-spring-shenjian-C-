#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a = 0;
	cout << "请输入[0-100亿]之间的数" << endl;
	cin >> a;
	cout << "十亿位 :     " << (int)(a / 10000000000) % 10 << endl;
	cout << "亿位   :     "<< (int)(a / 100000000) % 10 << endl;
	cout << "千万位 :     " << (int)(a / 10000000) % 10 << endl;
	cout << "百万位 :     " << (int)(a / 1000000) % 10 << endl;
	cout << "十万位 :     " << (int)(a / 100000) % 10 << endl;
	cout << "万位   :     " << (int)(a / 10000) % 10 << endl;
	cout << "千位   :     " << (int)(a / 1000) % 10 << endl;
	cout << "百位   :     " << (int)(a / 100) % 10 << endl;
	cout << "十位   :     " << (int)(a / 10) % 10 << endl;
	double b = a / 1000;
	b -= floor(b);
	b += 0.000001;
	b *= 100000;
	cout << "圆     :     " << (int)(b / 100) % 10 << endl;
	cout << "角     :     " << (int)(b / 10) % 10 << endl;
	cout << "分     :     " << (int)b % 10 << endl;
	return 0;
}