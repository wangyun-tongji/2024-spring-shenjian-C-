#include <iostream>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;

const int MAX_X = 69;	//����*��ɵı߿�Ŀ��
const int MAX_Y = 17;	//����*��ɵı߿�ĸ߶�
const int MIN_X = 1;
const int MIN_Y = 1;
const int bet_x = 35;
const int bet_y = 9;
/***************************************************************************
  �������ƣ�
  ��    �ܣ������system("cls")һ���Ĺ��ܣ���Ч�ʸ�
  ���������
  �� �� ֵ��
  ˵    �������������Ļ���������������ǿɼ���������(ʹ�õ�ǰ��ɫ)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* ȡ��ǰ��������Ϣ */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* ����ַ� */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* ������� */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* ���ص�(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  �������ƣ�gotoxy
  ��    �ܣ�������ƶ���ָ��λ��
  ���������HANDLE hout ������豸���
			int X       ��ָ��λ�õ�x����
			int Y       ��ָ��λ�õ�y����
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  �������ƣ�showch
  ��    �ܣ���ָ��λ�ô���ӡһ��ָ�����ַ�
  ���������HANDLE hout ������豸���
			int X       ��ָ��λ�õ�x����
			int Y       ��ָ��λ�õ�y����
			char ch     ��Ҫ��ӡ���ַ�
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  �������ƣ�init_border
  ��    �ܣ���ʾ��ʼ�ı߿�����ַ�
  ���������HANDLE hout������豸���
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//����ƻ����Ͻ�(0,0)
	cout << "***********************************************************************" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "***********************************************************************" << endl;

	/* �����ʾ20����д��ĸ����ĸ��ֵ��XY���궼�����ʾ
	   rand()�����Ĺ��ܣ��������һ���� 0-32767 ֮�������
	   ˼������ʲô����£��������ѭ��ִ�����ɺ��㿴����ʵ����ĸ��������20���� */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}

/* -- �������ӵ����ɺ������Է��ڴ˴� --*/
 int menu()
{
	
	cout << "1.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ)" << endl;
	cout << "2.��I��J��K��L��������������(��Сд���ɣ��߽����)" << endl;
	cout << "3.�ü�ͷ�����������ң��߽�ֹͣ" << endl;
	cout << "4.�ü�ͷ�����������ң��߽����" << endl;
	cout << "0.�˳�" << endl;
	cout << "[��ѡ��0-4]";
	int a = _getche();
	return a;
}
 void move_by_ijkl(const HANDLE hout,int canshu)
{
	gotoxy(hout, bet_x, bet_y);
	int x = bet_x;
	int y = bet_y;
	int c;
	while (1)
	{
		c = _getch();
		if (c == 'i' || c == 'I')
		{
			if (y == MIN_Y)
			{
				if (canshu == 1)
				{
					continue;
				}
				if (canshu == 2)
				{
					y = y + MAX_Y - 1;
				}
			}
			else
			{
				x = x;
				y = y - 1;
				gotoxy(hout, x, y);
			}
		}
		if (c == 'K' || c == 'k')
		{
			if (y == MAX_Y)
			{
				if (canshu == 2)
				{
					y = y - MAX_Y + 1;
				}
				if (canshu == 1)
				{
					continue;
				}
			}
			else
			{
				x = x;
				y = y + 1;
				gotoxy(hout, x, y);
			}
		}
		if (c == 'j' || c == 'J')
		{
			if (x == MIN_X)
			{
				if (canshu == 1)
				{
					continue;
				}
				if (canshu == 2)
				{
					x = x + MAX_X - 1;
					y = y;
					gotoxy(hout, x, y);
				}
			}
			else
			{
				x = x - 1;
				y = y;
				gotoxy(hout, x, y);
			}
		}
		if (c == 'l' || c == 'L')
		{
			if (x == MAX_X)
			{
				if (canshu == 1)
				{
					continue;
				}
				if (canshu == 2)
				{
					x = x - MAX_X + 1;
				}
			}
			else
			{
				x = x + 1;
				y = y;
				gotoxy(hout, x, y);
			}
		}
		if (c == ' ')
		{
			cout << " ";
			x = x;
			y = y;
			gotoxy(hout, x, y);
		}
		if (c == 'q' || c == 'Q')
		{
			gotoxy(hout, 0, 22);
			cout << "��Ϸ���������س�������" << endl;
			while (1)
			{
				int d;
				d = _getche();
				if (d == 13)
					return;
				else
					continue;
			}
		}
	}
}
void move_by_arrow(const HANDLE hout, int canshu)
{
	gotoxy(hout, bet_x, bet_y);
	int x = bet_x;
	int y = bet_y;
	int c;
	while (1)
	{
		c = _getch();
		if (c == ' ')
		{
			cout << " ";
			x = x;
			y = y;
			gotoxy(hout, x, y);
		}
		if (c == 'q' || c == 'Q')
		{
			gotoxy(hout, 0, 22);
			cout << "��Ϸ���������س�������" << endl;
			while (1)
			{
				int d;
				d = _getche();
				if (d == 13)
					return;
				else
					continue;
			}
		}
		while(c == 224)
		{
			c = _getch();
		}
		if (c == 72)
		{
			if (y == 1)
			{
				if (canshu == 3)
				{
					continue;
				}
				if(canshu==4)
				{
					y = y + 16;
				}
			}
			else
			{
				x = x;
				y = y - 1;
				gotoxy(hout, x, y);
			}
		}
		if (c == 80)
		{
			if (y == 17)
			{
				if (canshu == 3)
				{
					continue;
				}
				if (canshu == 4)
				{
					y = y - 16;

				}
			}
			else
			{
				x = x; 
				y = y + 1;
				gotoxy(hout, x, y);
			}
		}
		if (c == 75)
		{
			if (x == 1)
			{
				if (canshu == 3)
				{
					continue;
				}
				if (canshu == 4)
				{
					x = x + 68;
				}
			}
			else
			{
				x = x - 1;
				y = y;
				gotoxy(hout, x, y);

			}
		}
		if (c == 77)
		{
			if (x == MAX_X)
			{
				if (canshu == 3)
				{
					continue;
				}
				if (canshu == 4)
				{
					x = x - 68;
				}
			}
			else
			{
				x = x + 1;
				y = y;
				gotoxy(hout, x, y);
			}
		}
	}
}
/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main���������ڳ�ʼ��ʾ�����԰���ĿҪ��ȫ���Ʒ���д
***************************************************************************/
int main()
{
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //ȡ��׼����豸��Ӧ�ľ��

	/* ����α����������ӣ�ֻ���ڳ���ʼʱִ��һ�μ��� */
	srand((unsigned int)(time(0)));

	/* �˾�������ǵ���ϵͳ��cls�������� */
	cls(hout);

	while (1)
	{
		cls(hout);
		int caidan = menu();
		if (caidan == 48)
		{
			return 0;
		}
		if (caidan == 49||caidan==50)
		{
			cls(hout);
			init_border(hout);
			move_by_ijkl(hout, caidan - 48);
		}
		if (caidan == 51 || caidan == 52)
		{
			cls(hout);
			init_border(hout);
			move_by_arrow(hout, caidan - 48);
		}
	}
	return 0;
}