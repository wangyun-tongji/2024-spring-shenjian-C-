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
	cout << "���������볤��(12-16),��д��ĸ����(>=2),Сд��ĸ����(>=2),���ָ���(>=2),�������Ÿ���(>=2)" << endl;
	int number[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> number[i];
		if (cin.fail())
		{
			cout << "����Ƿ�" << endl;
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
		cout << "���볤��[" << number[0] << "]����ȷ" << endl;
		return 0;
	}
	if (number[1] <2)
	{
		cout << "��д��ĸ����[" << number[1] << "]����ȷ" << endl;
		return 0;
	}
	if (number[2] <2)
	{
		cout << "Сд��ĸ����[" << number[2] << "]����ȷ" << endl;
		return 0;
	}
		if (number[3] <2)
		{
			cout << "���ָ���[" << number[3] << "]����ȷ" << endl;
			return 0;
		}
		if (number[4] <2)
		{
			cout << "�������Ÿ���[" << number[4] << "]����ȷ" << endl;
			return 0;
		}
		if (number[1] + number[2] + number[3] + number[4] > number[0])
		{
			cout << "�����ַ�����֮��[" << number[1] << "+" << number[2] << "+" << number[3] << "+" << number[4] << "]���������볤��[" << number[0] << "]"<<endl;
			return 0;
		}
		if (number[1] + number[2] + number[3] + number[4]< number[0])
		{
			cout << "�����ַ�����֮��[" << number[1] << "+" << number[2] << "+" << number[3] << "+" << number[4] << "]С�������볤��[" << number[0] << "]" << endl;
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