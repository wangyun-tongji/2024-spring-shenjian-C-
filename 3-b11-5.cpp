#include<iostream>
using namespace std;
int main()
{
	int i, j, k, sum = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			for (k = 0; k < 5; k++)
			{
				cout << "*";
				sum = sum + 1;
				if (k > 2)
					break;
			}
			cout << " ";
			break;
		}
		cout << endl;
		break;
	}
	cout << "sum=" << sum << endl;
	cout << "i=" << i << endl;
	cout << "j=" << j << endl;
	cout << "k=" << k << endl;
	return 0;
}