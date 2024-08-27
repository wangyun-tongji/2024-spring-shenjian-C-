#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number=0;
	printf("请输入一个[1..30000]间的整数:\n");
	scanf("%d", &number);
	int wanwei = number / 10000;
	int qianwei = (number % 10000)/1000;
	int baiwei = (number % 1000)/100;
	int shiwei = (number % 100) / 10;
	int gewei = number % 10;
	
	printf("万位 : %d\n", wanwei);
	printf("千位 : %d\n", qianwei);
	printf("百位 : %d\n", baiwei);
	printf("十位 : %d\n", shiwei);
	printf("个位 : %d\n", gewei);
	return 0;
}