#include<iostream>
using namespace std;
int min(int a, int b)
{
	return a<b?a:b;
}
int min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return a;
	else
		return b < c ? b : c;
}
int min(int a, int b, int c, int d)
{
	int m = a < b ? a : b;
	int n = c < d ? c : d;
	return m < n ? m : n;
}
int main()
{
	int num, a, b, c, d;
	while (1)
	{
		cout << "请输入个数num和num个正整数" << endl;
		cin >> num;
		if (cin.fail() == 1)
		{
			cin.clear();
			cin.ignore(65536, '\n');
			continue;
		}
		else
			break;
	}
	switch (num)
	{
		case 2:
			cin >> a >> b;
			cout << "min=" << min(a, b) << endl;
			break;
		case 3:
			cin >> a >> b >> c;
			cout << "min=" << min(a, b, c) << endl;
			break;
		case 4:
				cin >> a >> b >> c >> d;
				cout << "min=" << min(a, b, c, d) << endl;
				break;
		default:
			cout << "个数输入错误" << endl;
			break;
	}
}