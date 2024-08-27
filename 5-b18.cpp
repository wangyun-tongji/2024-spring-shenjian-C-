#include<iostream>
using namespace std;
static const char other[] = "!@#$%^&*-_=+,.?";
int main()
{
	char all[10][16];
	int a = 0;
	int check = 0;
	char str[100];
	for (int i = 0; i < 100; i++)
	{
		str[i]=getchar();
		if (str[i] =='\n')
			break;
		else
			;
	}
	int number[2][5];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> number[i][j];
			if (j > 0&&i==0)
				a = a + number[0][j];
			else
				;
		}
		while (getchar() != '\n')
			;
	}
	
	if ((a != number[1][1] + number[1][2] + number[1][3] + number[1][4]) || number[1][1] < 2 || number[1][2] < 2 || number[1][3] < 2 || number[1][4] < 2
		||number[1][0]>16||number[1][0]<12)
	{
		check = 1;
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			int number_mima = number[0][0];
			int number_daxie = number[0][1];
			int number_xiaoxie = number[0][2];
			int number_shuzi = number[0][3];
			int number_qita = number[0][4];
			for (int j = 0; j < 16; j++)
			{
				all[i][j] = getchar();
				if (all[i][j] == '\n')
					break;
				else
				{
					if (all[i][j] >= 'A' && all[i][j] <= 'Z')
					{
						number_mima--;
						number_daxie--;
					}
					if (all[i][j] >= 'a' && all[i][j] <= 'z')
					{
						number_mima--;
						number_xiaoxie--;
					}
					if (all[i][j] >= '0' && all[i][j] <= '9')
					{
						number_mima--;
						number_shuzi--;
					}
					for (int k = 0; k < 15; k++)
					{
						if (all[i][j] == other[k])
						{
							
							number_mima--;
							number_qita--;
							break;
						}
						else
							;
					}
				}
			}
			check = check+number_mima + number_daxie + number_xiaoxie + number_qita + number_shuzi;
		}
	}
	if (check)
		cout << "´íÎó" << endl;
	else
		cout << "ÕıÈ·" << endl;
	return 0;
}