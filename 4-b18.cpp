#include<iostream>
using namespace std;
int max(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}
int max(int a, int b, int c)
{
	if (a >= b && a >= c)
	{
		return a;
	}
	else
	{
		if (b >= c)
			return b;
		else
			return c;
	}
}
int max(int a, int b, int c, int d)
{
	int m = a > b ? a : b;
	int n = c > d ? c : d;
	return m > n ? m : n;
}
int main()
{
	int num, a, b, c, d;
	while (1)
	{
		cout << "请输入个数num及num个整数" << endl;
		cin >> num;
		if (cin.fail() == 1)
			continue;
		else
			break;
	}
	switch (num)
	{
		case 2:
			cin >> a >> b;
			cout << "max="<<
			max(a, b);
			break;
		case 3:
			cin >> a >> b >> c;
			cout << "max="<<
			max(a, b, c);
			break;
		case 4:
			cin >> a >> b >> c>>d;
			cout << "max="<<
			max(a, b, c, d);
			break;
		default :
			cout << "个数输入错误" << endl;
			break;
	}
	return 0;
}