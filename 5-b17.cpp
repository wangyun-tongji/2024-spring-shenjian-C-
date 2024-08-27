#include<iostream>
#include<time.h>
using namespace std;
static const char other[] = "!@#$%^&*-_=+,.?";
int main()
{
	int m= 0;
	int check[5] = { 0,0,0,0,0 };
	char str[16];
	srand((int)time(NULL));
	cout << "请输入密码长度(12-16),大写字母个数(>=2),小写字母个数(>=2),数字个数(>=2),其他符号个数(>=2)" << endl;
	int number[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> number[i];
		if (cin.fail())
		{
			cout << "输入非法" << endl;
			break;
		}
		else
			;
	}
	if (cin.fail())
		return 0;
	else
		;
	if (number[0] < 12 || number[0]>16)
	{
		cout << "密码长度[" << number[0] << "]不正确" << endl;
		return 0;
	}
	if (number[1] <2)
	{
		cout << "大写字母个数[" << number[1] << "]不正确" << endl;
		return 0;
	}
	if (number[2] <2)
	{
		cout << "小写字母个数[" << number[2] << "]不正确" << endl;
		return 0;
	}
		if (number[3] <2)
		{
			cout << "数字个数[" << number[3] << "]不正确" << endl;
			return 0;
		}
		if (number[4] <2)
		{
			cout << "其他符号个数[" << number[4] << "]不正确" << endl;
			return 0;
		}
		if (number[1] + number[2] + number[3] + number[4] > number[0])
		{
			cout << "所有字符类型之和[" << number[1] << "+" << number[2] << "+" << number[3] << "+" << number[4] << "]大于总密码长度[" << number[0] << "]"<<endl;
			return 0;
		}
		if (number[1] + number[2] + number[3] + number[4]< number[0])
		{
			cout << "所有字符类型之和[" << number[1] << "+" << number[2] << "+" << number[3] << "+" << number[4] << "]小于总密码长度[" << number[0] << "]" << endl;
			return 0;
		}
		if (number[1] + number[2] + number[3] + number[4] == number[0] && number[4] >= 2 && number[3] >= 2 && number[2] >= 2 && number[1] >= 2)
		{
			for (int i = 0; i < 5; i++)
			{
				cout << number[i] << " ";
				check[i] = number[i];
			}
			cout << endl;
			for (int i = 0; i < 10; i++)
			{
				m = 0;
				for (int j = 0; j < 5; j++)
				{
					check[j] = number[j];
				}
				for (int k = 0; k<number[0]; k++)
				{
					switch (rand() % 4)
					{

						case 0:
						{
							if (check[1] > 0)
							{
								str[m] = char('A' + rand() % 26);
								cout << str[m];
								m++;
								check[1]--;
								break;
							}
							else
							{
								k--;
								break;
							}
						}
						case 1:
						{
							if (check[2] > 0)
							{
								str[m] = char('a' + rand() % 26);
								cout << str[m];
								m++;
								check[2]--;
								break;
							}
							else
							{
								k--;
								break;
							}
						}
						case 2:
						{
							if (check[3] > 0 )
							{
								str[m] = char('0'+rand() % 10);
								cout << str[m];
								m++;
								check[3]--;
								break;
							}
							else {
								k--;
								break;
							}
						}
						case 3:
						{
							if (check[4] > 0)
							{
								str[m] = other[rand()%15];
								cout << str[m];
								m++;
								check[4]--;
								break;
							}
							else
							{
								k--;
									break;
							}
						}
					}
				}
				cout<<endl;
			}
		}
	return 0;
}