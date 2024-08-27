#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int check_one(int i, int j, char a[12][28])
{
	int number = 0;
	if (a[i - 1][j] =='*')
		number = number + 1;
	else
		;
	if (a[i + 1][j] == '*')
		number = number + 1;
	else;
	if (a[i - 1][j - 1] == '*')
		number = number + 1;
	else;
	if (a[i - 1][j + 1] == '*')
		number = number + 1;
	else;
	if (a[i + 1][j - 1] == '*')
		number = number + 1;
	else;
	if (a[i + 1][j + 1] == '*')
		number = number + 1;
	else;
	if (a[i][j + 1] == '*')
		number = number + 1;
	else
		;
	if (a[i][j - 1] == '*')
		number = number + 1;
	else
		;
	return number;
}
int main()
{
	int right_or_error = 1;
	char a[12][28];
	int check[12][28];
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 28; j++)
		{
			a[i][j] = '0';
			check[i][j] = 0;
		}
	}
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 27; j++)
		{
			scanf("%c", &a[i][j]);
			if (a[i][j] == ' '||a[i][j]=='\n')
				j--;
			else
				;
		}
	}
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 27; j++)
		{
			check[i][j] = check_one(i, j, a);
			if ((int)(a[i][j]) ==42)
				;
			else
			{
				if((int)(a[i][j])==(48+check[i][j]))
				{
					right_or_error = 1;
				}
				else
				{
					right_or_error = 0;
					break;
				}
			}
			
		}
		if (right_or_error == 0)
			break;
		else
			;
	}
	if (right_or_error == 0)
		printf("´íÎó\n");
	else
		printf("ÕıÈ·\n");
	return 0;
}