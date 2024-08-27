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
		cout << "请输入第" << i + 1 << "行" << endl;
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
	cout << "大写 : " << number_daxie << endl;
	cout << "小写 : " << number_xiaoxie << endl;
	cout << "数字 : " << number_shuzi << endl;
	cout << "空格 : " << number_kongge << endl;
	cout << "其他 : " << number_qita << endl;
	return 0;
}