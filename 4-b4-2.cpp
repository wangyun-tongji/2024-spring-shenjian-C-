#include <iostream>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;

const int MAX_X = 69;	//定义*组成的边框的宽度
const int MAX_Y = 17;	//定义*组成的边框的高度
const int MIN_X = 1;
const int MIN_Y = 1;
const int bet_x = 35;
const int bet_y = 9;
/***************************************************************************
  函数名称：
  功    能：完成与system("cls")一样的功能，但效率高
  输入参数：
  返 回 值：
  说    明：清除整个屏幕缓冲区，不仅仅是可见窗口区域(使用当前颜色)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* 取当前缓冲区信息 */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* 填充字符 */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* 填充属性 */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* 光标回到(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  函数名称：gotoxy
  功    能：将光标移动到指定位置
  输入参数：HANDLE hout ：输出设备句柄
			int X       ：指定位置的x坐标
			int Y       ：指定位置的y坐标
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  函数名称：showch
  功    能：在指定位置处打印一个指定的字符
  输入参数：HANDLE hout ：输出设备句柄
			int X       ：指定位置的x坐标
			int Y       ：指定位置的y坐标
			char ch     ：要打印的字符
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  函数名称：init_border
  功    能：显示初始的边框及随机字符
  输入参数：HANDLE hout：输出设备句柄
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//光标移回左上角(0,0)
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

	/* 随机显示20个大写字母，字母的值、XY坐标都随机显示
	   rand()函数的功能：随机生成一个在 0-32767 之间的整数
	   思考：在什么情况下，下面这个循环执行生成后，你看到的实际字母个数不足20个？ */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}

/* -- 按需增加的若干函数可以放在此处 --*/
 int menu()
{
	
	cout << "1.用I、J、K、L键控制上下左右(大小写均可，边界停止)" << endl;
	cout << "2.用I、J、K、L键控制上下左右(大小写均可，边界回绕)" << endl;
	cout << "3.用箭头控制上下左右，边界停止" << endl;
	cout << "4.用箭头控制上下左右，边界回绕" << endl;
	cout << "0.退出" << endl;
	cout << "[请选择0-4]";
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
			cout << "游戏结束，按回车键结束" << endl;
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
			cout << "游戏结束，按回车键结束" << endl;
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
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数仅用于初始演示，可以按题目要求全部推翻重写
***************************************************************************/
int main()
{
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //取标准输出设备对应的句柄

	/* 生成伪随机数的种子，只需在程序开始时执行一次即可 */
	srand((unsigned int)(time(0)));

	/* 此句的作用是调用系统的cls命令清屏 */
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