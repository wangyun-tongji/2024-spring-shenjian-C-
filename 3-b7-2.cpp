#include<iostream>
using namespace std;
int main()
{
	cout << "����������ֵ��" << endl;
	double a;
	cin >> a;
	int first = (int)(a / 50);
	int second = (int)((a - 50 * first) / 20);
	int third = (int)((a - 50 * first - 20 * second) / 10);
	int forth = (int)((a - 50 * first - 20 * second - 10 * third) / 5);
	int fifth = (int)((a - 50 * first - 20 * second - 10 * third - 5 * forth) / 1);
	int sixth = (int)((a - 50 * first - 20 * second - 10 * third - 5 * forth - fifth+0.001) * 100);
	int seventh = (int)(sixth / 50);
	int eighth = (int)(sixth - seventh * 50) / 10;
	int ninth = (int)(sixth - seventh * 50 - eighth * 10) / 5;
	int tenth = (int)(sixth - seventh * 50 - eighth * 10 - ninth * 5) / 2;
	int eleventh = (int)((sixth - seventh * 50 - eighth * 10 - ninth * 5 - tenth * 2) /1);
	int sum = first + second + third + forth + fifth + seventh + eighth + ninth + tenth + eleventh;
	cout << "����" << sum << "�����㣬�������£�" << endl;
	if (first > 0)
		cout << "50Ԫ :" << first << "��" << endl;
	else
		;
	if (second > 0)
		cout << "20Ԫ :" << second << "��" << endl;
	else
		;
	if (third > 0)
		cout << "10Ԫ :" << third << "��" << endl;
	else
		;
	if (forth > 0)
		cout << "5Ԫ  :" << forth << "��" << endl;
	else
		;
	if (fifth > 0)
		cout << "1Ԫ  :" << fifth << "��" << endl;
	else
		;
	if (seventh > 0)
		cout << "5��  :" << seventh << "��" << endl;
	else
		;
	if (eighth > 0)
		cout << "1��  :" << eighth << "��" << endl;
	else
		;
	if (ninth > 0)
		cout << "5��  :" << ninth << "��" << endl;
	else
		;
	if (tenth > 0)
		cout << "2��  :" << tenth << "��" << endl;
	else
		;
	if (eleventh > 0)
		cout << "1��  :" << eleventh << "��" << endl;
	else
		;
	return 0;
}