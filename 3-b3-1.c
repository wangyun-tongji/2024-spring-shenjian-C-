#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double number = 0;
	printf("请输入[0-100亿)之间的数\n");
	scanf("%lf", &number);
	printf("十亿位 :     %d\n", (int)(number / 1000000000) % 10);
	printf("亿位   :     %d\n", (int)(number / 100000000) % 10);
	printf("千万位 :     %d\n", (int)(number / 10000000) % 10);
	printf("百万位 :     %d\n", (int)(number / 1000000) % 10);
	printf("十万位 :     %d\n", (int)(number / 100000) % 10);
	printf("万位   :     %d\n", (int)(number / 10000) % 10);
	printf("千位   :     %d\n", (int)(number / 1000) % 10);
	printf("百位   :     %d\n", (int)(number / 100) % 10);
	printf("十位   :     %d\n", (int)(number / 10) % 10);
	number = number / 1000;
	number = number - (int)number;
	number = number + 0.000001;
	number = number * 100000;
	printf("圆     :     %d\n",(int)(number / 100) % 10 );
	printf("角     :     %d\n",(int)(number/ 10) % 10);
	printf("分     :     %d\n",(int)number%10);
	return 0;
}