#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double number = 0;
	printf("������[0-100��)֮�����\n");
	scanf("%lf", &number);
	printf("ʮ��λ :     %d\n", (int)(number / 1000000000) % 10);
	printf("��λ   :     %d\n", (int)(number / 100000000) % 10);
	printf("ǧ��λ :     %d\n", (int)(number / 10000000) % 10);
	printf("����λ :     %d\n", (int)(number / 1000000) % 10);
	printf("ʮ��λ :     %d\n", (int)(number / 100000) % 10);
	printf("��λ   :     %d\n", (int)(number / 10000) % 10);
	printf("ǧλ   :     %d\n", (int)(number / 1000) % 10);
	printf("��λ   :     %d\n", (int)(number / 100) % 10);
	printf("ʮλ   :     %d\n", (int)(number / 10) % 10);
	number = number / 1000;
	number = number - (int)number;
	number = number + 0.000001;
	number = number * 100000;
	printf("Բ     :     %d\n",(int)(number / 100) % 10 );
	printf("��     :     %d\n",(int)(number/ 10) % 10);
	printf("��     :     %d\n",(int)number%10);
	return 0;
}