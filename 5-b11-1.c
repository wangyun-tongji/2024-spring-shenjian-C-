#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<math.h>
//�ɰ���������Ҫ��ͷ�ļ�

const char chnstr[] = "��Ҽ��������½��ƾ�"; /* ���������д "��" ~ "��" �ĵط���ֻ��������������ȡֵ */
char result[256];  /* ��result�⣬�����������κ���ʽ��ȫ�ֱ��� */

/* --���������Ҫ�ĺ��� --*/
void daxie(int num, int flag_of_zero)
{
	char a[3] = { '\0' };
	/* ������Ա��������κ��޸� */
	if (num == 0)
	{
		if (flag_of_zero)	//�˱��ʲô��˼������˼��
		{
			a[0] = chnstr[0];
			a[1] = chnstr[1];
			a[2] = '\0';
			strcat(result, a);
		}
		else
			;
	}
	else
	{
		a[0] = chnstr[2 * num];
			a[1] = chnstr[2 * num + 1];
			a[2]='\0';
			strcat(result, a);
	}
}
/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
    /* --���������Ҫ������ --*/
		printf("������[0-100��)֮������֣�\n" );
		double q, w, e, r, t, y, u, i, o, p, l, k, j, h, g, f, d, s, a, x, c, v, b, n, m, z;
		double A, B, C, D, E, F, G, H, I, J, K, L, Z;
		double A1, B1, C1, D1, E1, F1, G1, H1, I1, J1, K1, L1;
		scanf("%lf",&a);
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
		printf("��д�����\n");
		daxie(a1, 0);
		if (a1)
			strcat(result, "ʰ");
		else
			;
		daxie(b1, 0);
		if (a1 + b1)
			strcat(result, "��");
		else
			;
		daxie(c1, a1 + b1);
		if (c1)
			strcat(result, "Ǫ");
		else
			;
		daxie(d1, a1 + b1 + c1);
		if (d1)
			strcat(result, "��");
		else
			;
		daxie(e1, a1 + b1 + c1 + d1);
		if (e1)
			strcat(result, "ʰ");
		else
			;
		daxie(f1, 0)
			;
		if (e1 + c1 + d1)
			strcat(result, "��");
		else
			;
		if (f1 == 0 && (a1 + b1 + c1 + d1 + e1 > 0))
			strcat(result, "��");
		else
			;
		daxie(g1, !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0)));
		if (g1)
			strcat(result, "Ǫ");
		else
			;
		daxie(h1, !((a1 == 0) && (b1 == 0) && (c1 == 0) && (d1 == 0) && (e1 == 0) && (f1 == 0) && (g1 == 0)))
			;
		if (h1)
			strcat(result, "��");
		else
			;
		daxie(i1, (a1 + b1 + c1 + d1 + e1 + f1 + g1 + h1 > 0));
		if (i1)
			strcat(result, "ʰ");
		else
			;
		daxie(t1, 0)
			;
		if (f1 + g1 + h1 + e1 + d1 + c1 + b1 + a1)
			strcat(result, "Բ");
		else
			;
		daxie(t2, !(t1 == 0 && a1 == 0 && b1 == 0 && c1 == 0 && d1 == 0 && e1 == 0 && g1 == 0 && h1 == 0 && i1 == 0 && f1 == 0));
		if (t2)
			strcat(result, "��");
		else
			;
		daxie(t3, 0);
		if (t3)
			strcat(result, "��");
		else
			strcat(result, "��");
    printf("%s\n", result);  /* ת���õ��Ĵ�д�����ֻ�����ñ��������������ط����������κ���ʽ�Դ�д�������ȫ��/������� */
    return 0;
}