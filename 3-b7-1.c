#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("请输入找零值：\n");
	double a;
	scanf("%lf", &a);
	int first = (int)(a / 50);
	int second = (int)((a - 50 * first) / 20);
	int third = (int)((a - 50 * first - 20 * second) / 10);
	int forth = (int)((a - 50 * first - 20 * second - 10 * third) / 5);
	int fifth = (int)((a - 50 * first - 20 * second - 10 * third - 5 * forth) / 1);
	int sixth = (int)((a - 50 * first - 20 * second - 10 * third - 5 * forth - fifth+0.001) * 100);
	int seventh = (int)(sixth / 50);
	int eighth = (int)(sixth - seventh * 50) / 10;
	int ninth = (int)(sixth - seventh * 50 - eighth * 10) / 5;
	int tenth = (int)(sixth - seventh * 50 - eighth * 10 - ninth * 5) / 2;
	int eleventh = (int)((sixth - seventh * 50 - eighth * 10 - ninth * 5 - tenth * 2) / 1);
	int sum = first + second + third + forth + fifth + seventh + eighth + ninth + tenth + eleventh;
	printf("共有");
	printf("%d", sum);
	printf("张找零，具体如下：\n");
	if (first > 0)
	{printf("50元 :");
	printf("%d", first);
	printf("张\n");
}
	else
		;
	if (second > 0)
	{
		printf("20元 :");
		printf("%d", second);
		printf("张\n");
	}
	else
		;
	if (third > 0)
	{
		printf("10元 :"); printf("%d", third); printf("张\n");
	}
	else
		;
	if (forth > 0)
	{
		printf("5元  :"); printf("%d", forth); printf("张\n");
    }
	else
		;
	if (fifth > 0)
	{
		printf("1元  :"); printf("%d", fifth); printf("张\n");
	}
	else
		;
	if (seventh > 0)
	{
		printf("5角  :"); printf("%d", seventh); printf("张\n");
	}
	else
		;
	if (eighth > 0)
	{
		printf("1角  :"); printf("%d", eighth); printf("张\n");
	}
	else
		;
	if (ninth > 0)
	{
		printf("5分  :"); printf("%d", ninth); printf("张\n");
	}
	else
		;
	if (tenth > 0)
	{
		printf("2分  :"); printf("%d", tenth); printf("张\n");
	}
	else
		;
	if (eleventh > 0)
	{
		printf("1分  :"); printf("%d", eleventh); printf("张\n");
	}
	else
		;
	return 0;
}