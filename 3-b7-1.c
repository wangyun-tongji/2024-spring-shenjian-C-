#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("����������ֵ��\n");
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
	printf("����");
	printf("%d", sum);
	printf("�����㣬�������£�\n");
	if (first > 0)
	{printf("50Ԫ :");
	printf("%d", first);
	printf("��\n");
}
	else
		;
	if (second > 0)
	{
		printf("20Ԫ :");
		printf("%d", second);
		printf("��\n");
	}
	else
		;
	if (third > 0)
	{
		printf("10Ԫ :"); printf("%d", third); printf("��\n");
	}
	else
		;
	if (forth > 0)
	{
		printf("5Ԫ  :"); printf("%d", forth); printf("��\n");
    }
	else
		;
	if (fifth > 0)
	{
		printf("1Ԫ  :"); printf("%d", fifth); printf("��\n");
	}
	else
		;
	if (seventh > 0)
	{
		printf("5��  :"); printf("%d", seventh); printf("��\n");
	}
	else
		;
	if (eighth > 0)
	{
		printf("1��  :"); printf("%d", eighth); printf("��\n");
	}
	else
		;
	if (ninth > 0)
	{
		printf("5��  :"); printf("%d", ninth); printf("��\n");
	}
	else
		;
	if (tenth > 0)
	{
		printf("2��  :"); printf("%d", tenth); printf("��\n");
	}
	else
		;
	if (eleventh > 0)
	{
		printf("1��  :"); printf("%d", eleventh); printf("��\n");
	}
	else
		;
	return 0;
}