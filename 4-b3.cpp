#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int zeller(int y, int m,int d)
{
	int w = 0;
	if (m < 3)
	{
		m = m + 12;
		y = y - 1;
	}
	else
		;
	int a = y % 100;
	int b = y / 100;
	w = a + a / 4 + b / 4 - 2 * b + (13 * m + 13) / 5 + d - 1;
	while (1)
	{
		if (w < 0)
			w = w + 7;
		else
		{
			w = w % 7;
			break;
		}
	}
	return w;
}
static int tianshu(int year, int month)
{
	int number;
	switch (month)
	{
		case 1:
			number = 31;
			break;
		case 2:
		{
			if ((year % 4 != 0) || (year % 100 == 0 && year % 400 != 0))
				number = 28;
			else
				number = 29;
			break;
		}
		case 3:
			number = 31;
			break;
		case 4:
			number = 30;
			break;
		case 5:
			number = 31;
			break;
		case 6:
			number = 30;
			break;
		case 7:
			number = 31;
			break;
		case 8:
			number = 31;
			break;
		case 9:
			number = 30;
			break;
		case 10:
			number = 31;
			break;
		case 11:
			number = 30;
			break;
		case 12:
			number = 31;
			break;
	}
	return number;
}
void calender(int year, int month)
{
	/* 按需添加代码 */

	cout << year << "年" << month << "月" << endl;
	/* 头部分隔线，不算打表 */
	cout << "======================================================" << endl;
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
	cout << "======================================================" << endl;

	/* 按需添加代码 */
	int w = zeller(year, month, 1);
	int number = tianshu(year, month);
	for (int i = 0; i < w * 8; i++)
		cout << " ";
	for (int j = 1; j <= number; j++)
	{
		cout << setw(4) << j << "    ";
		if ((j + w) % 7 == 0||j==number)
			cout << endl;
		else
			;
	}
	/* 尾部分隔线，不算打表 */
	cout << "======================================================" << endl;
}
int main()
{
	int year, month;
	while (1)
	{
		cout << "请输入年[1900-2100]、月" << endl;
		cin >> year >> month;
		if (cin.fail() == 1 || year < 1900 || year>2100)
		{
			cin.clear();
			cin.ignore(65536, '\n');
			cout << "输入非法，请重新输入";
		}
		else
		{
			if (cin.fail() == 1 || month < 0 || month>12)
			{
				cin.clear();
				cin.ignore(65536, '\n');
				cout << "输入非法，请重新输入";
			}
			else
				break;
		}
	}
	calender(year, month);
	return 0;
}