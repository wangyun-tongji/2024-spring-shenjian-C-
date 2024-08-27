#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int num_a, num_b, num_c;
int a[10],b[10],c[10];
void hanoi(int n, char src, char tmp, char dst)
{
	static int t = 0;
	static int i = 1;
	if (n == 1)
	{
		printf("第");
		printf("%4d", i++);
		printf("步(%d):%c-->%c ", n, src, dst);
		switch (src - 'A')
		{
			case 0:
				t = a[--num_a];
				a[num_a] = 0;
				break;
			case 1:
				t = b[--num_b];
				b[num_b] = 0;
				break;
			case 2:
				t = c[--num_c];
				c[num_c] = 0;
				break;
		}
		switch (dst - 'A')
		{
			case 0:
				a[num_a++] = t;
				break;
			case 1:
				b[num_b++] = t;
				break;
			case 2:
				c[num_c++] = t;
				break;
		}
		for (int i = 0; i < 3; i++)
		{
			printf("%c:", 65 + i);
			for (int j = 0; j < 10; j++)
			{
				if (i == 0)
				{
					if (a[j])
						printf("%d ", a[j]);
					else
						printf("  ");

				}
				if (i == 1)
				{
					if (b[j])
						printf("%d ", b[j]);
					else
						printf("  ");

				}
				if (i == 2)
				{
					if (c[j])
						printf("%d ", c[j]);
					else
						printf("  ");

				}
			}
			if (i == 2)
				printf("\n");
			else
				;
		}
	}
	else
	{
		hanoi(n - 1, src, dst, tmp);
		printf("第");
		printf("%4d", i++);
		printf("步(%d):%c-->%c ", n, src, dst);
		switch (src - 'A')
		{
			case 0:
				t = a[--num_a];
				a[num_a] = 0;
				break;
			case 1:
				t = b[--num_b];
				b[num_b] = 0;
				break;
			case 2:
				t = c[--num_c];
				c[num_c] = 0;
				break;
		}
		switch (dst - 'A')
		{
			case 0:
				a[num_a++] = t;
				break;
			case 1:
				b[num_b++] = t;
				break;
			case 2:
				c[num_c++] = t;
				break;
		}
		for (int i = 0; i < 3; i++)
		{
			printf("%c:", 65 + i);
			for (int j = 0; j < 10; j++)
			{
				if (i == 0)
				{
					if (a[j])
						printf("%d ", a[j]);
					else
						printf("  ");

				}
				if (i == 1)
				{
					if (b[j])
						printf("%d ", b[j]);
					else
						printf("  ");

				}
				if (i == 2)
				{
					if (c[j])
						printf("%d ", c[j]);
					else
						printf("  ");

				}
			}
			if (i == 2)
				printf("\n");
			else
				;
		}
		hanoi(n - 1, tmp, src, dst);
	}
}
int main()
{
	char src, tmp, dst;
	int layer;
	while (1)
	{
		printf("请输入汉诺塔的层数(1-10)\n");
		scanf("%d", &layer);
		if (!(layer <= 10 && layer >= 1))
		{
			while (getchar() != '\n')
				;
		}
		else
		{
			getchar();
			break;
		}
	}
	while (1) {
		printf("请输入起始柱(A-C)\n");
		scanf("%c",&src);
		if (!(src == 'a' || src == 'A' ||
			src == 'B' || src == 'b' ||
			src == 'C' || src == 'c'))
		{
			while (getchar() != '\n')
				;
		
		}
		else
		{
			getchar();
			break;
		}
	}
	while (1)
	{

		printf("请输入目标柱\n");

		scanf("%c",&dst);

		if (!(dst == 'a' || dst == 'A' ||

			dst == 'B' || dst == 'b' ||

			dst == 'C' || dst == 'c'))
		{
			while (getchar() != '\n')
				;
		}
		else
		{
			if (dst == src)
			{
				printf("目标柱(");
				printf("%c", dst);
				printf(")不能与起始柱(");
				printf("%c", src);
				printf(")相同\n");
				while (getchar() != '\n')
					;
			}
			else
			{
				getchar();
			break;
		    }
		}
	}
	if (src == 'A' || src == 'a')
		src = 'A';
	if (src == 'B' || src == 'b')
		src = 'B';
	if (src == 'C' || src == 'c')
		src = 'C';
	if (dst == 'A' || dst == 'a')
		dst = 'A';
	if (dst == 'B' || dst == 'b')
		dst = 'B';
	if (dst == 'C' || dst == 'c')
		dst = 'C';
	for (int i = 0; i < 3; i++)
	{
		if ('A' + i == src || 'A' + i == dst)
			;
		else
		{
			tmp = 'A' + i;
			break;
		}
	}
	if (src == 'A')
		num_a = layer;
	else
	{
		if (src == 'B')
			num_b = layer;
		else
			num_c = layer;
	}
	int number[3] = {num_a,num_b,num_c};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 0)
				a[j] = 0;
			if (i == 1)
				b[i] = 0;
			if (i == 2)
				c[i] = 0;
		}
	}
	for (int i = 0; i <layer; i++)
	{
		if (num_a)
		{
			a[i] = layer - i;
		}
		else
		{
			if (num_b)
				b[i] = layer - i;
			else
				c[i] = layer - i;
		}
	}
	printf("初始:             ");
	for (int i = 0; i < 3; i++)
	{
		printf("%c:",65 + i);
		for (int j = 0; j < 10; j++)
		{
			if (i == 0)
			{
				if (a[j])
					printf("%d ", a[j]);
				else
					printf("  ");

			}
			if (i == 1)
			{
				if (b[j])
					printf("%d ", b[j]);
				else
					printf("  ");

			}
			if (i == 2)
			{
				if (c[j])
					printf("%d ", c[j]);
				else
					printf("  ");

			}
		}
		if (i == 2)
			printf("\n");
		else
			;
	}
	hanoi(layer, src, tmp, dst);
	return 0;
}