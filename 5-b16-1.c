#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void exchange(char a, char b)
{
	char c = a;
	a = b;
	b = c;
}
void shuru(char a[10][8], char b[10][9], int c[10])
{
	for (int i = 0; i < 10; i++)
	{
		printf("请输入第%d个人的学号、姓名、成绩\n", i + 1);
		for (int j = 0; j < 7; j++)
		{
			scanf("%c", &a[i][j]);
		}
		for (int j = 0; j < 8; j++)
		{
			scanf("%c", &b[i][j]);
			if (j > 1)
			{
				if (b[i][j] == ' ' && b[i][j - 1] != ' ')
				{
					break;
				}
				else
					;
			}
			else
				;
		}
		scanf("%d", &c[i]);
		while (getchar() != '\n')
			;
	}
}
void rank(char a[10][8], char b[10][9], int c[10])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j <10; j++)
		{
			for (int k = 0; k <9-j; k++)
			{
				if (a[k][i]<a[k+1][i])
				{
					for (int t = 0; t<7; t++)
					{
						exchange(a[k][t], a[k + 1][t]);
					}
					for (int t = 0; t <9; t++)
					{
						exchange(b[k][t], b[k + 1][t]);
					}
					int e = c[k];
					c[k] = c[k + 1];
					c[k + 1] = e;
				}
			}
		}
	}
}
void shuchu(char b[10][8], char a[10][9], int c[10])
{
	for (int i = 0; i < 10; i++)
	{
		if (c[i] >= 60)
			;
		else
		{
			for (int j = 0; j <9; j++)
			{
				if (a[i][j] == ' ')
					;
				else
					printf("%c", a[i][j]);
			}
			printf(" ");
			for (int j = 0; j <7; j++)
			{
				if (a[i][j] == ' ')
					;
				else
					printf("%c", b[i][j]);
			}
			printf(" ");
			printf("%d\n", c[i]);
		}
	}
}
int main()
{
	int grade[10];
	char xuehao[10][8];
	char name[10][9];
	shuru(xuehao, name, grade);
	rank(xuehao, name, grade);
	shuchu(xuehao,name, grade);
	return 0;
}