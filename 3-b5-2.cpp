#include<iostream>
using namespace std;
int main()
{
	int year;
	int month;
	int day;
	int leap;
	int sum_day;
	cout << "�������꣬�£���"<< endl;
	cin >> year >> month >> day;
	if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
	{
		leap = 0;//��������
	}
	else
		leap = 1;//������
	/*�ж���ȷ��*/
	if (month > 12 || month < 0)
	{
		cout << "�������-�·ݲ���ȷ" << endl;
		return 0;
	}
	else
	{
		if (day <= 0||day>31)
		{
			cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
			return 0;
		}
		else
		{
			if (day == 31 && (month == 2
				|| month == 4
				|| month == 6
				|| month == 9
				|| month == 11
				))
			{
				cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
				return 0;
			}
			else {
				if (day == 30 && month == 2)
				{
					cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
					return 0;
				}
				else {
					if (day == 29 && leap == 0 && month == 2)
					{
						cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
						return 0;
					}
					else
						;
				}
			}
		}
	}
	switch (month / 1)
	{
	case 1:
		sum_day = day;
		break;
	case 2:
		sum_day = 31 + leap + day;
		break;
	case 3:
		sum_day = 31 + leap + 28 + day;
		break;
	case 4:
		sum_day = 31 * 2 + leap + 28 + day;
		break;
	case 5:
		sum_day = 31 * 2 + leap + 28 + 30 + day;
		break;
	case 6:
		sum_day = 31 * 3 + leap + 28 + 30 + day;
		break;
	case 7:
		sum_day = 31 * 3 + leap + 28 + 30*2 + day;
		break;
	case 8:
		sum_day = 31 * 4 + leap + 28 + 30*2 + day;
		break;
	case 9:
		sum_day = 31 * 5 + leap + 28 + 30*2 + day;
		break;
	case 10:
		sum_day = 31 * 5 + leap + 28 + 30*3 + day;
		break;
	case 11:
		sum_day = 31 * 6 + leap + 28 + 30*3 + day;
		break;
	case 12:
		sum_day = 31 * 6 + leap + 28 + 30*4 + day;
		break;
	}
	cout << year << "��" << month << "��" << day << "��" << "��" << year << "��ĵ�" << sum_day << "��" << endl;
	return 0;
}