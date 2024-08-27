#include<iostream>
using namespace std;
int main()
{
	int year;
	int month;
	int begin;
	int number;
	while (1)
	{
		cout << "请输入年份(2000-2030)和月份(1-12) :";
		cin >> year >> month;
		if (cin.fail() ==1)
		{
			cin.clear();
			cin.ignore(65536, '/n');
			cout << "输入非法，请重新输入" << endl;
		}
		else
			if (!(year > 1999 && year < 2031 && month>0 && month < 13))
			{
				cout << "输入非法，请重新输入" << endl;
			}
			else
				break;
	}
	switch (month) {
		case 1:
			number = 31;
			break;
		case 2:
		if ((year % 4 != 0) || (year % 100 == 0 && year % 400 != 0))
			number = 28;
		else
			number = 29;
		break;
		case 3 :
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
			number = 30
				; break;
			case 12
				:
					number = 31;
					break;
	}
	while (1)
	{
		cout << "请输入" << year << "年" << month << "月" << "1日的星期(0-6表示星期日-星期六) :";
		cin >> begin;
		if (cin.fail() ==1 || begin < 0 || begin>6)
			cout << "输入非法，请重新输入" << endl;
		else
			break;
	}
	cout << year << "年" << month << "月" << "的月历为:" << endl;
	cout << "星期日  " <<
		"星期一  " <<
		"星期二  " <<
		"星期三  " <<
		"星期四  " <<
		"星期五  " <<
		"星期六  " << endl;
	for (int i = 0; i < 8 * begin; i++)
	{
		cout << " ";
	}
	for (int j = 1; j <= number; j++)
	{
		if (1 <= j && j < 10)
			cout << "   " << j << "    ";
		else
			cout << "  " << j << "    ";
		if ((j + begin) % 7 == 0)
			cout << endl;
		else
			;
	}
	return 0;
}