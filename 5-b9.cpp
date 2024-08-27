#include<iostream>
using namespace std;
int is_having_same(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
	if (a != b && b != c && c != d && d != e && e != f && f != g && g != h && h != i &&
		a != c && b != d && c != e && d != f && e != g && f != h && g != i &&
		a != d && b != e && c != f && d != g && e != h && f != i &&
		a != e && b != f && c != g && d != h && e != i &&
		a != f && b != g && c != h && d != i &&
		a != g && b != h && c != i &&
		a != h && b != i &&
		a != i)
		return 1;
	else
		return 0;
}
int is_shudu_x(int a[10][10])
{
	int num;
	for (int i = 1; i < 10; i++)
	{
		if (a[i][1] != a[i][2] && a[i][1] != a[i][3] && a[i][1] != a[i][4] && a[i][1] != a[i][5] && a[i][1] != a[i][6] && a[i][1] != a[i][7] && a[i][1] != a[i][8] && a[i][1] != a[i][9] &&
			                      a[i][2] != a[i][3] && a[i][2] != a[i][4] && a[i][2] != a[i][5] && a[i][2] != a[i][6] && a[i][2] != a[i][7] && a[i][2] != a[i][8] && a[i][2] != a[i][9] &&
			                                            a[i][3] != a[i][4] &&a[i][3] != a[i][5] &&a[i][3] != a[i][6] &&a[i][3] != a[i][7] &&a[i][3] != a[i][8] &&a[i][3] != a[i][9] &&
			a[i][4] != a[i][5] &&a[i][4] != a[i][6] &&a[i][4] != a[i][7] &&a[i][4] != a[i][8] &&a[i][4] != a[i][9] &&
			a[i][5] != a[i][6] &&a[i][5] != a[i][7] &&a[i][5] != a[i][8] &&a[i][5] != a[i][9] &&
			a[i][6] != a[i][7] &&a[i][6] != a[i][8] &&a[i][6] != a[i][9] &&
			a[i][7] != a[i][8] &&a[i][7] != a[i][9] &&
			a[i][8] != a[i][9])
			num = 1;
		else
		{
			num = 0;
		    break;
	    }
    }
	return num;
}
int is_shudu_y(int a[10][10])
{
	int num;
	for (int i = 1; i < 10; i++)
	{
		if (a[1][i] != a[2][i] && a[1][i] != a[3][i] && a[1][i] != a[4][i] && a[1][i] != a[5][i] && a[1][i] != a[6][i] && a[1][i] != a[7][i] && a[1][i] != a[8][i] && a[1][i] != a[9][i] &&
			a[2][i] != a[3][i] && a[2][i] != a[4][i] && a[2][i] != a[5][i] && a[2][i] != a[6][i] && a[2][i] != a[7][i] && a[2][i] != a[8][i] && a[2][i] != a[9][i] &&
			a[3][i] != a[4][i] && a[3][i] != a[5][i] && a[3][i] != a[6][i] && a[3][i] != a[7][i] && a[3][i] != a[8][i] && a[3][i] != a[9][i] &&
			a[4][i] != a[5][i] && a[4][i] != a[6][i] && a[4][i] != a[7][i] && a[4][i] != a[8][i] && a[4][i] != a[9][i] &&
			a[5][i] != a[6][i] && a[5][i] != a[7][i] && a[5][i] != a[8][i] && a[5][i] != a[9][i] &&
			a[6][i] != a[7][i] && a[6][i] != a[8][i] && a[6][i] != a[9][i] &&
			a[7][i] != a[8][i] && a[7][i] != a[9][i] &&
			a[8][i] != a[9][i])
			num = 1;
		else
			num = 0;
	}
	return num;
}
int is_shudu_xy(int a[10][10])
{
	int num = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			num = is_having_same(a[1 + 3 * i][1 + 3 * j], a[1 + 3 * i][2 + 3 * j], a[1 + 3 * i][3 + 3 * j], a[2 + 3 * i][1 + 3 * j], a[2 + 3 * i][2 + 3 * j], a[2 + 3 * i][3 + 3 * j], a[3 + 3 * i][1 + 3 * j], a[3 + 3 * i][2 + 3 * j], a[3 + 3 * i][3 + 3 * j]);
			if (num == 0)
				break;
			else
				;
		}
	return num;
}
int main()
{
	cout << "请输入9*9的矩阵，值为1-9之间" << endl;
	int stack[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			stack[i][j] = 0;
		}
	}
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cin >> stack[i][j];
		}
	}
	int num = 0;
	num = num + is_shudu_xy(stack) + is_shudu_x(stack) + is_shudu_y(stack);
	if (num == 3)
		cout << "是数独的解" << endl;
	else
		cout << "不是数独的解" << endl;
	return 0;
}