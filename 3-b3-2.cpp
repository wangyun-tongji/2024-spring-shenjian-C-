#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a = 0;
	cout << "������[0-100��]֮�����" << endl;
	cin >> a;
	cout << "ʮ��λ :     " << (int)(a / 10000000000) % 10 << endl;
	cout << "��λ   :     "<< (int)(a / 100000000) % 10 << endl;
	cout << "ǧ��λ :     " << (int)(a / 10000000) % 10 << endl;
	cout << "����λ :     " << (int)(a / 1000000) % 10 << endl;
	cout << "ʮ��λ :     " << (int)(a / 100000) % 10 << endl;
	cout << "��λ   :     " << (int)(a / 10000) % 10 << endl;
	cout << "ǧλ   :     " << (int)(a / 1000) % 10 << endl;
	cout << "��λ   :     " << (int)(a / 100) % 10 << endl;
	cout << "ʮλ   :     " << (int)(a / 10) % 10 << endl;
	double b = a / 1000;
	b -= floor(b);
	b += 0.000001;
	b *= 100000;
	cout << "Բ     :     " << (int)(b / 100) % 10 << endl;
	cout << "��     :     " << (int)(b / 10) % 10 << endl;
	cout << "��     :     " << (int)b % 10 << endl;
	return 0;
}