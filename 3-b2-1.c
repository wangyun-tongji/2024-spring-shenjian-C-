#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number=0;
	printf("������һ��[1..30000]�������:\n");
	scanf("%d", &number);
	int wanwei = number / 10000;
	int qianwei = (number % 10000)/1000;
	int baiwei = (number % 1000)/100;
	int shiwei = (number % 100) / 10;
	int gewei = number % 10;
	
	printf("��λ : %d\n", wanwei);
	printf("ǧλ : %d\n", qianwei);
	printf("��λ : %d\n", baiwei);
	printf("ʮλ : %d\n", shiwei);
	printf("��λ : %d\n", gewei);
	return 0;
}