#include<iostream>
using namespace std;

void fenjie(int a)
{
	int c = a% 10;
	int b = a - c;
	a = b/10;
	if (a > 0)
		fenjie(a);
	else
		;
	cout << char(c+'0') << " ";
}
int main()
{
	cout << "请输入一个整数" << endl;
	int number;
	cin >> number;
	if (number < 0)
		cout << "- ";
	else
		;
	number = int(fabs(number));
	fenjie(number);
	return 0;
}