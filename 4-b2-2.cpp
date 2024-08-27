#include<iostream>
using namespace std;
int zeller(int y, int m, int d)//y���꣬m����,d����
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
int main()
{
	int year, month, day;
	int number;
	while (1)
	{
		cout << "��������[1900-2100]���¡��գ�" << endl;
		cin >> year >> month >> day;
		if (year > 2100 || year < 1900)
		{
			cin.clear();
			cin.ignore(65536, '\n');
			cout << "����Ƿ�������������" << endl;
		}
		else
		{
			if (month > 12 || month < 0)
			{
				cin.clear();
				cin.ignore(65536, '\n');
				cout << "����Ƿ�������������" << endl;
			}
			else
			{
				number = tianshu(year, month);
				if (day<0 || day>number)
				{
					cin.clear();
					cin.ignore(65536, '\n');
					cout << "����Ƿ�������������" << endl;
				}
				else
					break;
			}
		}
	}
	int w = zeller(year, month, day);
	cout << "����";
	switch (w)
	{
		case 0:
			cout << "��";
			break;
		case 1:
				cout << "һ";
				break;
		case 2:
			cout << "��";
			break;
		case 3:
			cout << "��";
			break;
		case 4:
			cout << "��";
			break;
		case 5:
			cout << "��";
			break;
		case 6:
			cout << "��";
			break;
	}
	return 0;
}