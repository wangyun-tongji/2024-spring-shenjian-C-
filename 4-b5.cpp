#include<iostream>
using namespace std;
int number(int a, int b)
{
	if (a > 1)
	{
		b = b * 2 + 2;
		a = a - 1;
		number(a, b);
	}
	else
	return b;
}
int main()
{
	cout << "请输入第几天的桃子数为1" << endl;
	int day_number;
	int c;
	cin >> day_number;
	c = number(day_number, 1);
	cout << "第1天买的桃子数量=" << c;
	return 0;
}