#define _CRT_SCANF_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	printf("������[0-100��)֮������֣�\n");

	double q, w, e, r, t, y, u, i, o, p, l, k, j, h, g, f, d, s, a, x, c, v, b, n, m, z;
	double A, B, C, D, E, F, G, H, I, J, K, L, Z;
	double A1, B1, C1, D1, E1, F1, G1, H1, I1, J1, K1, L1;
	scanf("%d",&a);
	b = 1000000000;
	c = 100000000;
	d = 10000000;
	e = 1000000;
	f = 100000;
	g = 10000;
	h = 1000;
	i = 100;
	j = 10;
	k = 1;
	l = 0.1;
	m = 0.01;
	z = 10000000000;
	double z1 = 100000000000;


	n = a / b;
	o = a / c;
	p = a / d;
	q = a / e;
	r = a / f;
	s = a / g;
	t = a / h;
	u = a / i;
	v = a / j;
	w = a / k;
	x = a / l;
	y = a / m;
	Z = 0;
	A = (int)n + Z;
	B = (int)o + Z;
	C = (int)p + Z;
	D = (int)q + Z;
	E = (int)r + Z;
	F = (int)s + Z;
	G = (int)t + Z;
	H = (int)u + Z;
	I = (int)v + Z;
	J = (int)w + Z;
	K = (int)x + Z;
	L = (int)y + Z;
	A1 = A;
	B1 = B - j * A1;
	C1 = C - j * B1 - i * A1;
	D1 = D - j * C1 - i * B1 - h * A1;
	E1 = E - j * D1 - i * C1 - h * B1 - g * A1;
	F1 = F - j * E1 - i * D1 - h * C1 - g * B1 - f * A1;
	G1 = G - j * F1 - i * E1 - h * D1 - g * C1 - f * B1 - e * A1;
	H1 = H - j * G1 - i * F1 - h * E1 - g * D1 - f * C1 - e * B1 - d * A1;
	I1 = I - j * H1 - i * G1 - h * F1 - g * E1 - f * D1 - e * C1 - d * B1 - c * A1;
	t -= floor(t);
	t += 0.000001;
	t *= 100000;


	int t1 = (int)(t / 100) % 10;
	int t2 = (int)(t / 10) % 10;
	int t3 = (int)t % 10;
	int a1 = (int)A1;
	int b1 = (int)B1;
	int c1 = (int)C1;
	int d1 = (int)D1;
	int e1 = (int)E1;
	int f1 = (int)F1;
	int g1 = (int)G1;
	int h1 = (int)H1;
	int i1 = (int)I1;
	printf( "��д�����:\n");
	switch (a1 / 1)
	{
		case 0:
			break;
		case 1:
			printf( "Ҽʰ");
			break;
		case 2:
			printf( "��ʰ");
			break;
		case 3:
			printf("��ʰ");
			break;
		case 4:
			printf( "��ʰ");
			break;
		case 5:
			printf( "��ʰ");
			break;
		case 6:
			printf( "½ʰ");
			break;
		case 7:
			printf( "��ʰ");
			break;
		case 8:
			printf( "��ʰ");
			break;
		case 9:
			printf( "��ʰ");
			break;
	}
	switch (b1 / 1)
	{
		case 0:
			if (a1 > 0)
				printf( "��");
			else
				break;
		case 1:
			printf( "Ҽ��");
			break;
		case 2:
			printf( "����");
			break;
		case 3:
			printf( "����");
			break;
		case 4:
			printf( "����");
			break;
		case 5:
			printf( "����");
			break;
		case 6:
			printf( "½��");
			break;
		case 7:
			printf( "����");
			break;
		case 8:
			printf( "����");
			break;
		case 9:
			printf( "����");
			break;
	}
	switch (c1 / 1)
	{
		case 0:
			break;
		case 1:
			printf( "ҼǪ");
			break;
		case 2:
			printf( "��Ǫ");
			break;
		case 3:
			printf( "��Ǫ");
			break;
		case 4:
			printf( "��Ǫ");
			break;
		case 5:
			printf( "��Ǫ");
			break;
		case 6:
			printf( "½Ǫ");
			break;
		case 7:
			printf( "��Ǫ");
			break;
		case 8:
			printf( "��Ǫ");
			break;
		case 9:
			printf( "��Ǫ");
			break;
	}
	switch (d1 / 1)
	{
		case 0:
			break;
		case 1:
		{
			if (c1 == 0 && (a1 + b1 != 0))
				printf( "��Ҽ��");
			else
				printf( "Ҽ��");
			break;
		}
		case 2:
		{
			if (c1 == 0 && (a1 + b1 != 0))
				printf( "�㷡��");
			else
				printf( "����");
			break;
		}
		case 3:
		{
			if (c1 == 0 && (a1 + b1 != 0))
				printf( "������");
			else
				printf( "����");
			break;
		}
		case 4:
		{
			if (c1 == 0 && (a1 + b1 != 0))
				printf( "������");
			else
				printf( "����");
			break;
		}
		case 5:
		{
			if (c1 == 0 && (a1 + b1 != 0))
				printf( "�����");
			else
				printf( "���");
			break;
		}
		case 6:
		{
			if (c1 == 0 && (a1 + b1 != 0))
				printf( "��½��");
			else
				printf( "½��");
			break;
		}
		case 7:
		{
			if (c1 == 0 && (a1 + b1 != 0))
				printf( "�����");
			else
				printf( "���");
			break;
		}
		case 8:
		{
			if (c1 == 0 && (a1 + b1 != 0))
				printf( "��ư�");
			else
				printf( "�ư�");
			break;
		}
		case 9:
		{
			if (c1 == 0 && (a1 + b1 != 0))
				printf( "�����");
			else
				printf( "����");
			break;
		}
	}
	switch (e1 / 1)
	{
		case 0:
			break;
		case 1:
		{
			if (d1 == 0 && (a1 + b1 + c1 > 0))
				printf( "��Ҽʰ");
			else
				printf( "Ҽʰ");
			break;
		}
		case 2:
		{
			if (d1 == 0 && (a1 + b1 + c1 > 0))
				printf( "�㷡ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 3:
		{
			if (d1 == 0 && (a1 + b1 + c1 > 0))
				printf( "����ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 4:
		{
			if (d1 == 0 && (a1 + b1 + c1 > 0))
				printf( "����ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 5:
		{
			if (d1 == 0 && (a1 + b1 + c1 > 0))
				printf( "����ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 6:
		{
			if (d1 == 0 && (a1 + b1 + c1 > 0))
				printf( "��½ʰ");
			else
				printf( "½ʰ");
			break;
		}
		case 7:
		{
			if (d1 == 0 && (a1 + b1 + c1 > 0))
				printf( "����ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 8: {
			if (d1 == 0 && (a1 + b1 + c1 > 0))
				printf( "���ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 9: {
			if (d1 == 0 && (a1 + b1 + c1 > 0))
				printf( "���ʰ");
			else
				printf( "��ʰ");
			break;
		}

	}
	switch (f1 / 1)
	{
		case 0:
			if ((c1 + d1 + e1) != 0)
				printf( "��");
			else
				break;
		case 1:
		{
			if (e1 == 0 && (a1 + b1 + c1 + d1 > 0))
				printf( "��Ҽ��");
			else
				printf( "Ҽ��");
			break;
		}
		case 2:
		{
			if (e1 == 0 && (a1 + b1 + c1 + d1 > 0))
				printf( "�㷡��");
			else
				printf( "����");
			break;
		}
		case 3:
		{
			if (e1 == 0 && (a1 + b1 + c1 + d1 > 0))
				printf( "������");
			else
				printf( "����");
			break;
		}
		case 4:
		{
			if (e1 == 0 && (a1 + b1 + c1 + d1 > 0))
				printf( "������");
			else
				printf( "����");
			break;
		}
		case 5:
		{
			if (e1 == 0 && (a1 + b1 + c1 + d1 > 0))
				printf( "������");
			else
				printf( "����");
			break;
		}
		case 6:
		{
			if (e1 == 0 && (a1 + b1 + c1 + d1 > 0))
				printf( "��½��");
			else
				printf( "½��");
			break;
		}
		case 7:
		{
			if (e1 == 0 && (a1 + b1 + c1 + d1 > 0))
				printf( "������");
			else
				printf( "����");
			break;
		}
		case 8: {
			if (e1 == 0 && (a1 + b1 + c1 + d1 > 0))
				printf( "�����");
			else
				printf( "����");
			break;
		}
		case 9: {
			if (e1 == 0 && (a1 + b1 + c1 + d1 > 0))
				printf( "�����");
			else
				printf( "����");
			break;
		}
	}
	switch (g1 / 1)
	{
		case 0:
			break;
		case 1:
			if (f1 == 0 && (a1 + b1 + c1 + d1 + e1 > 0))
				printf( "��ҼǪ");
			else
				printf( "ҼǪ");
			break;
		case 2:
			if (f1 == 0 && (a1 + b1 + c1 + d1 + e1 > 0))
				printf( "�㷡Ǫ");
			else
				printf( "��Ǫ");
			break;
		case 3:
			if (f1 == 0 && (a1 + b1 + c1 + d1 + e1 > 0))
				printf( "����Ǫ");
			else
				printf( "��Ǫ");
			break;
		case 4:
			if (f1 == 0 && (a1 + b1 + c1 + d1 + e1 > 0))
				printf( "����Ǫ");
			else
				printf( "��Ǫ");
			break;
		case 5:
			if (f1 == 0 && (a1 + b1 + c1 + d1 + e1 > 0))
				printf( "����Ǫ");
			else
				printf( "��Ǫ");
			break;
		case 6:
			if (f1 == 0 && (a1 + b1 + c1 + d1 + e1 > 0))
				printf( "��½Ǫ");
			else
				printf( "½Ǫ");
			break;
		case 7:
			if (f1 == 0 && (a1 + b1 + c1 + d1 + e1 > 0))
				printf( "����Ǫ");
			else
				printf( "��Ǫ");
			break;
		case 8:
			if (f1 == 0 && (a1 + b1 + c1 + d1 + e1 > 0))
				printf( "���Ǫ");
			else
				printf( "��Ǫ");
			break;
		case 9:
			if (f1 == 0 && (a1 + b1 + c1 + d1 + e1 > 0))
				printf( "���Ǫ");
			else
				printf( "��Ǫ");
			break;

	}
	switch (h1 / 1)
	{
		case 0:
			break;
		case 1:
		{
			if (g1 == 0)if (g1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0)))
				printf( "��Ҽ��");
			else
				printf( "Ҽ��");
			break;
		}
		case 2:
		{
			if (g1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0)))
				printf( "�㷡��");
			else
				printf( "����");
			break;
		}
		case 3:

		{
			if (g1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0)))
				printf( "������");
			else
				printf( "����");
			break;
		}
		case 4:

		{
			if (g1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0)))
				printf( "������");
			else
				printf( "����");
			break;
		}
		case 5:

		{
			if (g1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0)))
				printf( "�����");
			else
				printf( "���");
			break;
		}
		case 6:

		{
			if (g1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0)))
				printf( "��½��");
			else
				printf( "½��");
			break;
		}
		case 7:

		{
			if (g1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0)))	if (g1 == 0)
				printf( "�����");
			else
				printf( "���");
			break;
		}
		case 8:

		{
			if (g1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0)))
				printf( "��ư�");
			else
				printf( "�ư�");
			break;
		}
		case 9:

		{
			if (g1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0)))
				printf( "�����");
			else
				printf( "����");
			break;
		}

	}
	switch (i1 / 1)
	{
		case 0:
			break;
		case 1:
		{
			if (h1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0) && (g1 == 0)))
				printf( "��Ҽʰ");
			else
				printf( "Ҽʰ");
			break;
		}
		case 2:
		{
			if (h1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0) && (g1 == 0)))
				printf( "�㷡ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 3:
		{
			if (h1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0) && (g1 == 0)))
				printf( "����ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 4:
		{
			if (h1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0) && (g1 == 0)))
				printf( "����ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 5:
		{
			if (h1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0) && (g1 == 0)))
				printf( "����ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 6:
		{
			if (h1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0) && (g1 == 0)))
				printf( "��½ʰ");
			else
				printf( "½ʰ");
			break;
		}
		case 7:
		{
			if (h1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0) && (g1 == 0)))
				printf( "����ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 8: {
			if (h1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0) && (g1 == 0)))
				printf( "���ʰ");
			else
				printf( "��ʰ");
			break;
		}
		case 9: {
			if (h1 == 0 && !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0) && (g1 == 0)))
				printf( "���ʰ");
			else
				printf( "��ʰ");
			break;
		}

	}
	switch (t1 / 1)
	{
		case 0:
			if ((f1 + g1 + h1 + e1 + d1 + c1 + b1 + a1) > 0)
				printf( "Բ");
			else
				break;
		case 1:
		{
			if (i1 == 0 && (a1 + b1 + c1 + d1 + e1 + f1 + g1 + h1 > 0))
				printf( "��ҼԲ");
			else
				printf( "ҼԲ");
			break;
		}
		case 2:
		{
			if (i1 == 0 && (a1 + b1 + c1 + d1 + e1 + f1 + g1 + h1 > 0))
				printf( "�㷡Բ");
			else
				printf( "��Բ");
			break;
		}
		case 3:
		{
			if (i1 == 0 && (a1 + b1 + c1 + d1 + e1 + f1 + g1 + h1 > 0))
				printf( "����Բ");
			else
				printf( "��Բ");
			break;
		}
		case 4:
		{
			if (i1 == 0 && (a1 + b1 + c1 + d1 + e1 + f1 + g1 + h1 > 0))
				printf( "����Բ");
			else
				printf( "��Բ");
			break;
		}
		case 5:
		{
			if (i1 == 0 && (a1 + b1 + c1 + d1 + e1 + f1 + g1 + h1 > 0))
				printf( "����Բ");
			else
				printf( "��Բ");
			break;
		}
		case 6:
		{
			if (i1 == 0 && (a1 + b1 + c1 + d1 + e1 + f1 + g1 + h1 > 0))
				printf( "��½Բ");
			else
				printf( "½Բ");
			break;
		}
		case 7:
		{
			if (i1 == 0 && (a1 + b1 + c1 + d1 + e1 + f1 + g1 + h1 > 0))
				printf( "����Բ");
			else
				printf( "��Բ");
			break;
		}
		case 8: {
			if (i1 == 0 && (a1 + b1 + c1 + d1 + e1 + f1 + g1 + h1 > 0))
				printf( "���Բ");
			else
				printf( "��Բ");
			break;
		}
		case 9: {
			if (i1 == 0 && (a1 + b1 + c1 + d1 + e1 + f1 + g1 + h1 > 0))
				printf( "���Բ");
			else
				printf( "��Բ");
			break;
		}

	}
	switch (t2 / 1)
	{
		case 0:
			break;
		case 1:
			printf( "Ҽ��");
			break;
		case 2:
			printf( "����");
			break;
		case 3:
			printf( "����");
			break;
		case 4:
			printf( "����");
			break;
		case 5:
			printf( "���");
			break;
		case 6:
			printf( "½��");
			break;
		case 7:
			printf( "���");
			break;
		case 8:
			printf( "�ƽ�");
			break;
		case 9:
			printf( "����");
			break;
	}
	switch (t3 / 1)
	{
		case 0:
			printf( "��");
			break;
		case 1:
			if (t2 == 0 && !(t1 == 0 && a1 == 0 && b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && f1 == 0))
				printf( "��Ҽ��");
			else
				printf( "Ҽ��");
			break;
		case 2:
			if (t2 == 0 && !(t1 == 0 && a1 == 0 && b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && f1 == 0))
				printf( "�㷡��");
			else
				printf( "����");
			break;
		case 3:
			if (t2 == 0 && !(t1 == 0 && a1 == 0 && b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && f1 == 0))
				printf( "������");
			else
				printf( "����");
			break;
		case 4:
			if (t2 == 0 && !(t1 == 0 && a1 == 0 && b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && f1 == 0))
				printf( "������");
			else
				printf( "����");
			break;
		case 5:
			if (t2 == 0 && !(t1 == 0 && a1 == 0 && b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && f1 == 0))
				printf( "�����");
			else
				printf( "���");
			break;
		case 6:
			if (t2 == 0 && !(t1 == 0 && a1 == 0 && b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && f1 == 0))
				printf( "��½��");
			else
				printf( "½��");
			break;
		case 7:
			if (t2 == 0 && !(t1 == 0 && a1 == 0 && b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && f1 == 0))
				printf( "�����");
			else
				printf( "���");
			break;
		case 8:
			if (t2 == 0 && !(t1 == 0 && a1 == 0 && b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && f1 == 0))
				printf( "��Ʒ�");
			else
				printf( "�Ʒ�");
			break;
		case 9:
			if (t2 == 0 && !(t1 == 0 && a1 == 0 && b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && f1 == 0))
				printf( "�����");
			else
				printf( "����");
			break;
	}
	return 0;
}