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
	cout<<"����������num������base"<<endl;
	int num, base,a;
	cin >> num >> base;
	a = is_power(num, base);
	cout << num;
	if (a)
		cout << "��";
	else
		cout << "����";
	cout << base;
	cout << "����" << endl;
	return 0;
}