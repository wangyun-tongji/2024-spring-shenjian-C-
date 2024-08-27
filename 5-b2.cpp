#include<iostream>
using namespace std;
int main()
{
	int array[101];
	int check[101];
	for (int i = 0; i < 101; i++)
	{
		array[i] = i;
		check[i] = 0;
	}
	for (int i = 1; i <= 100; i++)
	{
		for (int j = i; j <=100; j++)
		{
			if (j % i == 0)
			{
				check[j] = check[j] + 1;
			}
			else
			{
				check[j] = check[j] + 0;
			}
		}
	}
	for (int i = 1; i < 101; i++)
	{
		if (check[i] % 2 == 1)
			cout << array[i]<<" ";
		else
			;
	}
	return 0;
}