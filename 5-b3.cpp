#include<iostream>
using namespace std;
int leap_year(int year)
{
	if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
		return 0;
	else
		return 1;
}
int month_day_number(int year, int month, int day)
{
	int leap = leap_year(year);
	int month_day_number[12] = { 31,28 + leap,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 0; i < month - 1; i++)
	{
		day = day + month_day_number[i];
	}
	return day;
}
int main()
{
	cout << "�������꣬�£���" << endl;
	int sum_day;
	int year, month, day;
	cin >> year >> month >> day;
	int leap = leap_year(year);
	int day_number[12]= { 31,28 + leap,31,30,31,30,31,31,30,31,30,31 };
	
	if (month > 12 || month < 1)
	{
		cout << "�������-�·ݲ���ȷ" << endl;
		return 0;
	}
	else
	{
		if (day<0 || day>day_number[month])
		{
			cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
			return 0;
		}
		else
			sum_day = month_day_number(year, month, day);
	}
	cout << year << "��" << month << "��" << day << "��" << "��" << year << "��ĵ�" << sum_day << "��" << endl;
}