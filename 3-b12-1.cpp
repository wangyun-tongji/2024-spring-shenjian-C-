#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	cout << "请输入一个[0,100]之间的整数" << endl;
	while (1)
	{
		
		cin >> x;
		if (cin.fail())
		{
			cout << "请输入一个[0,100]之间的整数"<<endl;
			cin.clear();
			cin.ignore(65536,'\n');
		}
		else
		{
			if (x >= 0 && x <= 100)
			{
				cout << "cin.good()=" << cin.good() << " x=" << x << endl; //此句不准动，并且要求输出时good为1
				break;
			}
			else
				cout << "请输入一个[0,100]之间的整数" << endl; ;
		}
		
	}
			

		return 0;
}