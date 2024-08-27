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
	/* ������Ӵ��� */

	cout << year << "��" << month << "��" << endl;
	/* ͷ���ָ��ߣ������� */
	cout << "======================================================" << endl;
	cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
	cout << "======================================================" << endl;

	/* ������Ӵ��� */
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
	/* β���ָ��ߣ������� */
	cout << "======================================================" << endl;
}
int main()
{
	int year, month;
	while (1)
	{
		cout << "��������[1900-2100]����" << endl;
		cin >> year >> month;
		if (cin.fail() == 1 || year < 1900 || year>2100)
		{
			cin.clear();
			cin.ignore(65536, '\n');
			cout << "����Ƿ�������������";
		}
		else
		{
			if (cin.fail() == 1 || month < 0 || month>12)
			{
				cin.clear();
				cin.ignore(65536, '\n');
				cout << "����Ƿ�������������";
			}
			else
				break;
		}
	}
	calender(year, month);
	return 0;
}