#include<iostream>
using namespace std;
int main()
{
	int number = 0;
	cout << "������һ��[1..30000]�������:" << endl;
	cin >> number;
	int wanwei = number / 10000;
	int qianwei = (number % 10000) / 1000;
	int baiwei = (number % 1000) / 100;
	int shiwei = (number % 100) / 10;
	int gewei = number % 10;
	cout << "��λ" << " : "<<wanwei << endl;
	cout << "ǧλ" << " : " << qianwei << endl;
	cout << "��λ" << " : " << baiwei << endl;
	cout << "ʮλ" << " : " << shiwei << endl;
	cout << "��λ" << " : " << gewei << endl;
	return 0;
}