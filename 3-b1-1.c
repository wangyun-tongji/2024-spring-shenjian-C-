#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
const double pi = 3.14159;
int main()
{
	printf("请输入半径和高度\n");
	double radius;
	double height;
	scanf(" %lf %lf", &radius, &height);
	double  circumference = 2 * pi * radius;
	double circular_area = pi * radius * radius;
	double ball_area=4*pi* radius * radius;
	double ball_volume= 4 * pi * radius * radius*radius/3;
	double cylindrical_volume = pi * radius * radius * height;
	printf("圆周长     : ");
	printf("%.2lf\n",circumference);
	printf("圆面积     : ");
	printf("%.2lf\n",circular_area);
	printf("圆球表面积 : ");
	printf("%.2lf\n",ball_area);
	printf("圆球体积   : ");
	printf("%.2lf\n",ball_volume);
	printf("圆柱体积   : ");
	printf("%.2lf\n",circular_area);
	return 0;
}
