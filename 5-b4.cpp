#include<iostream>
using namespace std;
int main()
{
	int number;
	int score[101][1];
	int data[1000];
	for (int i = 0; i < 1000; i++)
	{
		data[i] = 0;
	}
	for (int i = 0; i < 101; i++)
	{
		score[i][0] = 0;
	}
	cout << "������ɼ�(���1000��)��������������" << endl;
	for (int i = 0; i < 1000; i++)
	{
		cin >> data[i];
		if (data[i] < 0)
		{
			number = i;
			break;
		}
		else
			;
	}
	cout << "���������Ϊ:" << endl;
	for (int i = 0; i < 1000; i++)
	{
		if (data[i] >= 0)
		{
			cout << data[i]<<" ";
			if ((i + 1) % 10 == 0)
			{
				cout << endl;
			}
			else
			{
				if (i == number-1)
					cout << endl;
				else
					;
			}
		}
		else
			break;
	}
	for (int i = 0; i <number; i++)
	{
		score[data[i]][0] = score[data[i]][0] + 1;
	}
	cout << "�����������Ķ�Ӧ��ϵΪ:" << endl;
	for (int i = 100; i >= 0; i--)
	{
		if (score[i][0] > 0)
			cout << i << " " << score[i][0] << endl;
		else
			;
	}
	return 0;
}