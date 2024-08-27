#include<iostream>
#include"5-b7.h"
#include<iomanip>
#include<Windows.h>
#define X 24
#define Y 25
#define Z 27
#define A 14
using namespace std;
int num_a = 0;
int num_b = 0;
int num_c = 0;
int a[10], b[10], c[10];
void hanoi(int is_delay, int is_pre, int n, char src, char tmp, char dst)
{
	static int t = 0;
	static int i = 1;
	if (is_delay == 0)
	{
		
		if (n == 1)
		{
			while (getchar() != '\n')
				;
			cct_gotoxy(A, Z);
			cout << "第" << setw(4) << i++ << "步( " << n << "):" << src << "-->" << dst << " ";
			switch (src - 'A')
			{
				case 0:
					t = a[--num_a];
					a[num_a] = 0;
					cct_gotoxy(A, X- num_a);
					cout << " ";
					break;
				case 1:
					t = b[--num_b];
					b[num_b] = 0;
					cct_gotoxy(A + 10 * 1, X- num_b);
					cout << " ";
					break;
				case 2:
					t = c[--num_c];
					c[num_c] = 0;
					cct_gotoxy(A + 10 * 2, X - num_c);
					cout << " ";
					break;
			}
			switch (dst - 'A')
			{
				case 0:
					a[num_a++] = t;
					cct_gotoxy(A, Y- num_a);
					cout << t;
					break;
				case 1:
					b[num_b++] = t;
					cct_gotoxy(A + 10 * 1, Y - num_b);
					cout << t;
					break;
				case 2:
					c[num_c++] = t;
					cct_gotoxy(A + 10 * 2, Y - num_c);
					cout << t;
					break;
			}
			if (is_pre)
			{
				while (getchar() != '\n')
					;
				cct_gotoxy(X, Z);
				for (int i = 0; i < 3; i++)
				{
					cout << char(65 + i) << ":";
					for (int j = 0; j < 10; j++)
					{
						if (i == 0)
						{
							if (a[j])
								cout << a[j]<<" ";
							else
								cout << "  ";

						}
						if (i == 1)
						{
							if (b[j])
								cout << b[j]<<" ";
							else
								cout << "  ";

						}
						if (i == 2)
						{
							if (c[j])
								cout << c[j]<<" ";
							else 
								cout << "  ";

						}
					}
					if (i == 2)
						cout << endl;
					else
						;
				}
			}
			else
				;
			//根据参数判断是否输出内部数组
		}
		else
		{
			hanoi(is_delay, is_pre, n - 1, src, dst, tmp);
			
			while (getchar() != '\n')
				;
			cct_gotoxy(A, Z);
			cout << "第" << setw(4) << i++ << "步( " << n << "):" << src << "-->" << dst << " ";
			switch (src - 'A')
			{
				case 0:
					t = a[--num_a];
					a[num_a] = 0;
					cct_gotoxy(A, X - num_a);
					cout << " ";
					break;
				case 1:
					t = b[--num_b];
					b[num_b] = 0;
					cct_gotoxy(A + 10 * 1, X - num_b);
					cout << " ";
					break;
				case 2:
					t = c[--num_c];
					c[num_c] = 0;
					cct_gotoxy(A + 10 * 2, X - num_c);
					cout << " ";
					break;
			}
			switch (dst - 'A')
			{
				case 0:
					a[num_a++] = t;
					cct_gotoxy(A, Y - num_a);
					cout << t;
					break;
				case 1:
					b[num_b++] = t;
					cct_gotoxy(A + 10 * 1, Y- num_b);
					cout << t;
					break;
				case 2:
					c[num_c++] = t;
					cct_gotoxy(A + 10 * 2, Y - num_c);
					cout << t;
					break;
			}
			if (is_pre)
			{
				while (getchar() != '\n')
					;
				cct_gotoxy(X, Z);
				for (int i = 0; i < 3; i++)
				{
					cout << char(65 + i) << ":";
					for (int j = 0; j < 10; j++)
					{
						if (i == 0)
						{
							if (a[j])
								cout << a[j]<<" ";
							else
								cout << "  ";

						}
						if (i == 1)
						{
							if (b[j])
								cout << b[j]<<" ";
							else
								cout << "  ";

						}
						if (i == 2)
						{
							if (c[j])
								cout << c[j]<<" ";
							else
								cout << "  ";

						}
					}
					if (i == 2)
						cout << endl;
					else
						;
				}
			}
			else
				;
			//根据参数判断是否输出内部数组
			hanoi(is_delay, is_pre, n - 1, tmp, src, dst);
		}
		
	}
	else
	{
		if (n == 1)
		{
			Sleep(600 - 100 * is_delay);
			cct_gotoxy(A, Z);
			cout << "第" << setw(4) << i++ << "步( " << n << "):" << src << "-->" << dst << " ";
			switch (src - 'A')
			{
				case 0:
					t = a[--num_a];
					a[num_a] = 0;
					cct_gotoxy(A, X - num_a);
					cout << " ";
					break;
				case 1:
					t = b[--num_b];
					b[num_b] = 0;
					cct_gotoxy(A + 10 * 1, X - num_b);
					cout << " ";
					break;
				case 2:
					t = c[--num_c];
					c[num_c] = 0;
					cct_gotoxy(A + 10 * 2, X - num_c);
					cout << " ";
					break;
			}
			switch (dst - 'A')
			{
				case 0:
					a[num_a++] = t;
					cct_gotoxy(A, Y - num_a);
					cout << t;
					break;
				case 1:
					b[num_b++] = t;
					cct_gotoxy(A + 10 * 1, Y - num_b);
					cout << t;
					break;
				case 2:
					c[num_c++] = t;
					cct_gotoxy(A + 10 * 2, Y - num_c);
					cout << t;
					break;
			}
			if (is_pre)
			{
				cct_gotoxy(X, Z);
				for (int i = 0; i < 3; i++)
				{
					cout << char(65 + i) << ":";
					for (int j = 0; j < 10; j++)
					{
						if (i == 0)
						{
							if (a[j])
								cout << a[j]<<" ";
							else
								cout << "  ";

						}
						if (i == 1)
						{
							if (b[j])
								cout << b[j]<<" ";
							else
								cout << "  ";

						}
						if (i == 2)
						{
							if (c[j])
								cout << c[j]<<" ";
							else
								cout << "  ";

						}
					}
					if (i == 2)
						cout << endl;
					else
						;
				}
			}
			else
				;
			//根据参数判断是否输出内部数组
		}
		else
		{
			hanoi(is_delay, is_pre, n - 1, src, dst, tmp);
			Sleep(600 - 100 * is_delay);
			cct_gotoxy(A, Z);
			cout << "第" << setw(4) << i++ << "步( " << n << "):" << src << "-->" << dst << " ";
			switch (src - 'A')
			{
				case 0:
					t = a[--num_a];
					a[num_a] = 0;
					cct_gotoxy(A, X - num_a);
					cout << " ";
					break;
				case 1:
					t = b[--num_b];
					b[num_b] = 0;
					cct_gotoxy(A + 10 * 1, X - num_b);
					cout << " ";
					break;
				case 2:
					t = c[--num_c];
					c[num_c] = 0;
					cct_gotoxy(A + 10 * 2, X - num_c);
					cout << " ";
					break;
			}
			switch (dst - 'A')
			{
				case 0:
					a[num_a++] = t;
					cct_gotoxy(A, Y - num_a);
					cout << t;
					break;
				case 1:
					b[num_b++] = t;
					cct_gotoxy(A + 10 * 1, Y - num_b);
					cout << t;
					break;
				case 2:
					c[num_c++] = t;
					cct_gotoxy(A + 10 * 2, Y - num_c);
					cout << t;
					break;
			}
			if (is_pre)
			{
				cct_gotoxy(X, Z);
				for (int i = 0; i < 3; i++)
				{
					cout << char(65 + i) << ":";
					for (int j = 0; j < 10; j++)
					{
						if (i == 0)
						{
							if (a[j])
								cout << a[j] << " ";
							else
								cout << "  ";

						}
						if (i == 1)
						{
							if (b[j])
								cout << b[j] << " ";
							else
								cout << "  ";

						}
						if (i == 2)
						{
							if (c[j])
								cout << c[j] << " ";
							else
								cout << "  ";

						}
					}
					if (i == 2)
						cout << endl;
					else
						;
				}
			}
			else
			;
			//根据参数判断是否输出内部数组
			hanoi(is_delay, is_pre, n - 1, tmp, src, dst);
		}
	}
}
int main()
{
	char src, tmp, dst;
	int layer;
	int is_delay;
	while (1)
	{
		cout << "请输入汉诺塔的层数(1-10)" << endl;
		cin >> layer;
		if (!(layer <= 10 && layer >= 1))
		{
			cin.clear();
			cin.ignore(65536, '\n');
			continue;
		}
		else
		{
			break;
		}
	}
	while (1) {
		cout << "请输入起始柱(A-C)" << endl;
		cin >> src;
		if (!(src == 'a' || src == 'A' ||
			src == 'B' || src == 'b' ||
			src == 'C' || src == 'c'))
		{
			cin.clear();
			cin.ignore(65536, '\n');
			continue;
		}
		else
		{
			break;
		}
	}
    while (1)
    {

        cout << "请输入目标柱" << endl;

        cin >> dst;

        if (!(dst == 'a' || dst == 'A' ||

            dst == 'B' || dst == 'b' ||

            dst == 'C' || dst == 'c'))

        {

            cin.clear();

            cin.ignore(65536, '\n');

            continue;

        }

        else
        {
            if (dst == src)
            {
                cout << "目标柱(" << dst << ")不能与起始柱(" << src << ")相同" << endl;
                cin.clear();
                cin.ignore(65536, '\n');
                continue;
            }
            else
                break;
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
	{
		num_a = layer;
		
	}
    else
    {
		if (src == 'B')
		{
			num_b = layer;

		}
        else
            num_c = layer;
    }
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
	}//数组初值赋值为0
	for (int i = 0; i < layer; i++)
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
	}//起始柱赋值
	cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
	cin >> is_delay;
	cout << "请输入是否显示内部数组值(0-不显示 1-显示)" << endl;
	int is_pre;
	cin >> is_pre;
	cct_cls();
	cout << "从" << src << "移动到" << dst << ",共" << layer << "层，延时设置为" << is_delay;
	if(is_pre)
	cout<< ",显示内部数组值" << endl;
	else
		cout<< ",不显示内部数组值" << endl;
	cct_gotoxy(12, Y);
	for (int i = 0; i < 30; i++)
		cout << "=";
	cout << endl;
	cct_gotoxy(12, 26);
	for (int i = 0; i < 3; i++)
	{
		cout << "  ";
		cout << char(65 + i);
		cout << "       ";
	}
	for (int i = 0; i < layer; i++)
	{
		if (num_a)
		{
			cct_gotoxy(A, X-i)
				;
			cout << a[i];
		}
		else
		{
			if (num_b)
			{
				cct_gotoxy(A+10*1, X - i)
					;
				cout << b[i];
			}
			else
			{
				cct_gotoxy(A + 10 * 2, X - i)
					;
				cout << c[i];
			}
		}
	}
	hanoi(is_delay, is_pre, layer, src,tmp,dst);
	return 0;
}
