#include<iostream>
using namespace std;
int main()
{
	int number_daxie = 0;
	int number_xiaoxie = 0;
	int number_shuzi = 0;
	int number_qita = 0;
	int number_kongge = 0;
	char str[3][128];
	for (int i = 0; i < 3; i++)
	{
		cout << "�������" << i + 1 << "��" << endl;
		for (int j = 0;; j++)
		{
			str[i][j] = getchar();
			if (str[i][j] == '\n')
				break;
			else
			{ 
				if (str[i][j] <= 'Z' && str[i][j] >= 'A')
			    {
				number_daxie++;
			    }
			     else
			     {
				if (str[i][j] <= 'z' && str[i][j] >= 'a')
					number_xiaoxie++;
				else
				{
					if (str[i][j] <= '9' && str[i][j] >= '0')
						number_shuzi++;
					else
						if (str[i][j] == ' ')
							number_kongge++;
						else
						number_qita++;
				}
			     }
			}
		}
	}
	cout << "��д : " << number_daxie << endl;
	cout << "Сд : " << number_xiaoxie << endl;
	cout << "���� : " << number_shuzi << endl;
	cout << "�ո� : " << number_kongge << endl;
	cout << "���� : " << number_qita << endl;
	return 0;
}