#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int GCD(int m, int n)
{
	int t = 0;
	int p = 0;
	t = m > n ? m : n;
	p = m + n - t;
	int yushu = t % p;
	if (yushu == 0)
		return p;
	else
	{
		t = p;
		p = yushu;
		GCD(t, p);
	}
}
int LCM(int m, int n)
{
	int a=GCD(m, n);
	int number = m * n;
	return number / a;

}
int main()
{
	int m, n;
	printf("����������������\n");
	scanf("%d%d", &m, &n);
	printf("���Լ�� : %d\n��С������ : %d\n", GCD(m, n), LCM(m, n));
	return 0;
	printf("\n");
}