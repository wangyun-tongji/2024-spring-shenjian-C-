#include<iostream>
using namespace std;
int main()
{
	cout << "�����������������(�������20��)��0������������" << endl;
	int array[21] ;
	for (int i = 0; i < 20; i++)
	{
		array[i] = 0;
	}
	for (int i = 0; i < 20; i++)
	{
		cin >> array[i];
		if (array[i] <= 0)
		{
			break;
		}
		else
			;
	}
	cin.ignore(65536, '\n');
	if (array[0] <= 0)
	{
		cout << "����Ч����" << endl;
	}
	else
	{
		cout << "ԭ����Ϊ��" << endl;
		for (int j = 0; j < 20; j++)
		{
			if (array[j] > 0)
				cout << array[j] << " ";
			else
				break;
		}
		cout << endl;
		cout << "������Ҫ�����������" << endl;
		int number;
		cin >> number;
		array[20] = number;
		for (int i = 0; i < 21; i++)
		{
			for (int j = 0; j < 20 - i; j++)
			{
				if (array[j] < array[j + 1])
					;
				else
				{
					int t = array[j];
					array[j] = array[j + 1];
					array[j + 1] = t;
				}
			}
		}
		cout << "����������Ϊ��" << endl;
		for (int i = 0; i < 21; i++)
		{
			if (array[i] > 0)
				cout << array[i] << " ";
			else
				;
		}
	}
	return 0;
}