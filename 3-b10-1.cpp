
#include <iostream>
#include<iomanip>
using namespace std;
#include <windows.h> //取系统时间

int main()
{
	LARGE_INTEGER tick, begin, end;

	QueryPerformanceFrequency(&tick);	//获得计数器频率
	QueryPerformanceCounter(&begin);	//获得初始硬件计数器计数
	int number = 0;
	/* 此处是你的程序开始 */
	for (int i = 111;i<999;i++)
	{
		for (int j = 111; j <999; j++)
		{
			for (int k = 111; k <999; k++)
			{
				if ((i + j + k) != 1953)
					;
				else
				{
					int a = i/100;
					int b = ((i % 100)/10);
					int c = i % 10;
					int d = j / 100;
					int e = ((j % 100)/10);
					int f = j % 10;
					int g = k/100;
					int h = ((k % 100)/10);
					int m = k % 10;
					if (a == b || a == c || a == d || a == e || a == f || a == g || a == h || a == m||a==0
						|| b == c || b == d || b == e || b == f || b == g || b == h || b == m||b==0
						|| c == d || c == e || c == f || c == g || c == h || c == m||c==0
						|| d == e || d == f || d == g || d == h || d == m||d==0
						|| e == f || e == g || e == h || e == m||e==0
						|| f == g || f == h || f == m||f==0
						|| g == h || g == m||g==0
						|| h == m||h==0
						||m==0)
						break;
					else
					{
						if (i < j && j < k)
						{
							number = number + 1;
							cout << "No." << setw(3) << number << " : " << i << "+" << j << "+" << k << "=" << i + j + k << endl;
						}
						else
							;
					}
				}
			}
		}
	}
	cout << "total=" << number << endl;
	/* 此处是你的程序结束 */

	QueryPerformanceCounter(&end);		//获得终止硬件计数器计数

	printf("计数器频率 : %lldHz\n", tick.QuadPart);
	printf("计数器计数 : %lld\n", end.QuadPart - begin.QuadPart);
	printf("%.6f秒\n", (double)(end.QuadPart - begin.QuadPart) / tick.QuadPart);

	return 0;
}
