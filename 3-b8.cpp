#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int x = 1, n = 1;
	double  a = 1, s = 1, d = 1, f = 1;
	cout << "请输入x的值[-10~+65]" << endl;
	cin >> x;
	double c = x;
	while (x < -10 || x>65)
	{
		cout << "输入非法，请重新输入" << endl;
		cout << "请输入x的值[-10~+65]" << endl;
		cin >> x;
		continue;
	}
	while (x <= 65 && x >= -10)
	{
		while (fabs(c) > 1e-6)
		{
			a = a + c;
			n = n + 1;
			s = n - 1;
			d = n;
			f = pow(x, n);
			while (s > 0)
			{
				d = d * s;
				s = s - 1;
			}
			c = f / d;
		}

		cout << "e^" << x << "=" << setprecision(10) << a << endl;
		break;
	}
	return 0;
}