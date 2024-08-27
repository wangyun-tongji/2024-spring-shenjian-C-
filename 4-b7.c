#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void fenjie(int a)
{
	int b = a % 10;
	int c = a - b;
	a = c/10;
	
	printf("%c ",b+'0');
	if (a > 0)
		fenjie(a);
	else
		;
}
int main()
{
	int number;
	printf("请输入一个整数\n");
	scanf("%d", &number);
	int a = fabs(number);
	fenjie(a);
	if (number < 0)
		printf("- ");
	else
		;

	return 0;
}
