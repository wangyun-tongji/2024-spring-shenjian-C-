#include<iostream>
#include<string>
using namespace std;
using std::string;
void shuru(string a[],string b[],int c[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "请输入第" << i + 1 << "个人的学号、姓名、成绩" << endl;
		for (int j=0;j<8;j++)
		{
			char m;
			m= getchar();
			a[i] = a[i] + m;
			if (m != ' ')
				;
			else
				break;
		}
		for (int j = 0; j < 9; j++)
		{
			char n = getchar();
			b[i] = b[i] + n;
			if (n != ' ')
				;
			else
				break;
		}
		cin >> c[i];
		while (getchar() != '\n')
			;
	}
}
void rank_three(string a[], string b[], int c[])
{
	for (int i = 0; i <9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (c[j] > c[j + 1])
			{
				swap(a[j], a[j + 1]);
				swap(b[j], b[j + 1]);
				int d = c[j];
				c[j] = c[j + 1];
				c[j + 1] = d;
			}
			else
				;
		}
	}
}
void shuchu(string a[], string b[], int c[])
{
	cout << "全部学生(成绩降序):" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (c[i] < 60)
			cout << b[i] << " " << a[i] << " " << c[i] << endl;
		else
			;
	}
}
int main()
{
	string id[10];
	string name[10];
	int grade[10];
	shuru(id, name, grade);
	rank_three(id, name, grade);
	shuchu(id, name, grade);
	return 0;
}