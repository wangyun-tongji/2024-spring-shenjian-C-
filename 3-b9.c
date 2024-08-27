#define _CRT_SECURE_NO_NOWARNINGS
#include<stdio.h>
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int k = 1; k <=i; k++)
		{
			printf("%d", k);
			printf("x");
			printf("%d", i);
			printf("=");
			printf("%d", k * i);
			if (k * i < 10 && k < i)
			{
			printf("   ");
			}
			if (k * i >= 10 && k < i)
			printf("  ");
			if(k==i)
				printf("\n");

		}
	}
	return 0;
}