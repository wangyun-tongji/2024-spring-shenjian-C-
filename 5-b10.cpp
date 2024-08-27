#include<iostream>
#include<iomanip>
using namespace std;
int weekday(int y, int m, int d)
{
	if (m < 3)
	{
		y = y - 1;
		m = m + 12;
		return(d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7 + 1;
	}
	else
		return(d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7 + 1;
}
int is_leap_year(int year)
{
	if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
		return 0;
	else
		return 1;
}
void print_kongge(int number)
{
	for (int i = 0; i < number; i++)
		cout << " ";
}
int main()
{
	int year;
	cout << "请输入年份(1900-2100)" << endl;
	cin >> year;
	int leap = is_leap_year(year);
	int month[6][7];
	int day[12] = { 31,28 + leap,31,30,31,30,31,31,30,31,30,31 };
		for (int i = 0; i < 6; i++)
			for (int j = 0; j < 7; j++)
			{
				month[i][j] = j + 1 + 7 * i;
			}
	for (int i =0; i <4; i++)
	{
		for (int j = 3 * i; j < 3 * i + 3; j++)
		{
			print_kongge(12);
			cout << j + 1 << "月";
			print_kongge(12);
		}
		cout << endl;
		for (int j = 3 * i; j < 3 * i + 3; j++)
		{
			cout << "Sun Mon Tue Wed Thu Fri Sat   ";
		}
		cout << endl;
		for (int k = 0; k < 6; k++)
		{
			for (int j = 3 * i; j < 3 * i + 3; j++)//月份是J
			{
				int w = weekday(year, j + 1, 1);
				for (int c = 0; c < 6; c++)
					for (int d= 0; d < 7; d++)
					{
						month[c][d] = month[c][d]-w;
					}
				if (month[0][0] == -6)
				{
					for (int c = 0; c < 6; c++)
						for (int d = 0; d < 7; d++)
						{
							month[c][d] = month[c][d] + 7;
						}
				}
				else
					;
				for (int a = 0; a < 7; a++)
				{
					if (month[k][a]<1 || month[k][a]>day[j])
						cout << setw(4) << " ";
					else
						cout << setiosflags(ios::left) << setw(4) << month[k][a];
				}
				for (int e = 0; e < 6; e++)
					for (int r = 0; r< 7; r++)
					{
						month[e][r] = r + 1 + 7 * e;
					}
				cout << "  ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}