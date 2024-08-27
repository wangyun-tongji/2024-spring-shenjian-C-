#include<iostream>
using namespace std;
int main()
{
	int number = 0;
	cout << "请输入一个[1..30000]间的整数:" << endl;
	cin >> number;
	int wanwei = number / 10000;
	int qianwei = (number % 10000) / 1000;
	int baiwei = (number % 1000) / 100;
	int shiwei = (number % 100) / 10;
	int gewei = number % 10;
	cout << "万位" << " : "<<wanwei << endl;
	cout << "千位" << " : " << qianwei << endl;
	cout << "百位" << " : " << baiwei << endl;
	cout << "十位" << " : " << shiwei << endl;
	cout << "个位" << " : " << gewei << endl;
	return 0;
}