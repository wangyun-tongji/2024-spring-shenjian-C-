#include<iostream>
using namespace std;
int main()
{
	cout << "请输入找零值：" << endl;
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
	cout << "共有" << sum << "张找零，具体如下：" << endl;
	if (first > 0)
		cout << "50元 :" << first << "张" << endl;
	else
		;
	if (second > 0)
		cout << "20元 :" << second << "张" << endl;
	else
		;
	if (third > 0)
		cout << "10元 :" << third << "张" << endl;
	else
		;
	if (forth > 0)
		cout << "5元  :" << forth << "张" << endl;
	else
		;
	if (fifth > 0)
		cout << "1元  :" << fifth << "张" << endl;
	else
		;
	if (seventh > 0)
		cout << "5角  :" << seventh << "张" << endl;
	else
		;
	if (eighth > 0)
		cout << "1角  :" << eighth << "张" << endl;
	else
		;
	if (ninth > 0)
		cout << "5分  :" << ninth << "张" << endl;
	else
		;
	if (tenth > 0)
		cout << "2分  :" << tenth << "张" << endl;
	else
		;
	if (eleventh > 0)
		cout << "1分  :" << eleventh << "张" << endl;
	else
		;
	return 0;
}