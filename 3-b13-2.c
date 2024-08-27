#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year, month, begin, number;
	while (1)
	{
		printf("请输入年份(2000-2020)和月份(1-12) :");
		scanf("%d%d", &year, &month);
		if (!(year > 1999 && year < 2031 && month>0 && month < 13))
		{
			printf("输入非法，请重新输入\n");
			while (getchar() != '\n')
				;
		}
		else
		{
			break;
		}
	}
	switch (month)
	{
		case 1:
			number = 31;
			break;
		case 2:
		{
			if ((year % 4 != 0) || (year % 100 == 0 && year % 400 != 0))
				number = 28;
			else
				number = 29;
			break;
		}
		case 3:
			number = 31;
			break;
		case 4:
			number = 30;
			break;
		case 5:
			number = 31;
			break;
		case 6:
			number = 30;
			break;
		case 7:
			number = 31;
			break;
		case 8:
			number = 31;
			break;
		case 9:
			number = 30;
			break;
		case 10:
			number = 31;
			break;
		case 11:
			number = 30;
			break;
		case 12:
			number = 31;
			break;
	}
	while (1)
	{
		printf("请输入%d年%d月1日的星期(0-6表示星期日-星期六) :", year, month);
		int ret = scanf("%d", &begin);
		if (ret == 0 || begin < 0 || begin>6)
		{
			printf("输入非法，请重新输入\n");

		}
		else
			break;
	}
		printf("%d年%d月的月历为 :\n",year,month);
		printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六  \n");
		for (int i = 0; i < 8 * begin; i++)
		{
			printf(" ");
		}
		for (int j =1; j <= number; j++)
		{
			if (1 <= j && j < 10)
				printf("   %d    ", j);
			else
				printf("  %d    ", j);
			if ((j + begin) % 7 == 0)
				printf("\n");
			else
				;
		}
		return 0;
	}