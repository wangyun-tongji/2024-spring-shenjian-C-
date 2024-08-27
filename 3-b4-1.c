#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
const double pi = 3.14159;
int main()
{
	printf("请输入三角形的两边及其夹角（角度）\n");
	int a, b, angle;
	scanf("%d%d%d", &a, &b, &angle);
	float area = 0.5 * a * b * sin(angle/180.0*pi);
	printf("三角形的面积为 : %.2f", area);
	return 0;
}