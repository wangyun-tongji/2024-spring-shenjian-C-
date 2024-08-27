#include<iostream>
#include<cstdlib>
#include<ctime> 
using namespace std;
int check(int i, int j,int a[12][28])
{
	int number = 0;
	if (a[i - 1][j] == 9)
		number = number + 1;
	else
		;
	if (a[i + 1][j] == 9)
		number = number + 1;
	else;
	if (a[i - 1][j-1] == 9)
		number = number + 1;
	else;
	if (a[i - 1][j+1] == 9)
		number = number + 1;
	else;
	if (a[i+1][j-1] == 9)
		number = number + 1;
	else;
	if (a[i+1][j+1] == 9)
		number = number + 1;
	else;
	if (a[i][j+1] == 9)
		number = number + 1;
	else
		;
	if (a[i][j-1] == 9)
		number = number + 1;
	else
		;
	return number;
}
int main()
{
	srand((unsigned int)time(NULL));
	int a[12][28] = { 0 };
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 28; j++)
			a[i][j] = 0;
	}
	for (int i = 0; i < 50; i++)
	{
		int y = rand()%10+1;
		int x = rand()%26+1;
		if (a[y][x] != 9)
		{
			a[y][x] = 9;
		}
		else
		{
			i--;
		}
	}
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 27; j++)
		{
			if (a[i][j] != 9)
				a[i][j] = check(i, j, a);
			else
				;
		}
	}
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 27; j++)
		{
			if (a[i][j] == 9)
				cout << "* ";
			else
				cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
