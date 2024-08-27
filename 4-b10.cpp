#include<iostream>
using namespace std;
int  is_power(int num, int base)
{
	int a = num / base;
	int b = num % base;
	if (a != 0)
	{
		if (b == 0)
			is_power(a, base);
		else
			return 0;
	}
	else
	{
		if (b == 1)
			return 1;

		else
			return 0;
	}

}
int main()
{
	cout<<"请输入整数num及奇数base"<<endl;
	int num, base,a;
	cin >> num >> base;
	a = is_power(num, base);
	cout << num;
	if (a)
		cout << "是";
	else
		cout << "不是";
	cout << base;
	cout << "的幂" << endl;
	return 0;
}