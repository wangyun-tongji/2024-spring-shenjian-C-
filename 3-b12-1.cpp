#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	cout << "������һ��[0,100]֮�������" << endl;
	while (1)
	{
		
		cin >> x;
		if (cin.fail())
		{
			cout << "������һ��[0,100]֮�������"<<endl;
			cin.clear();
			cin.ignore(65536,'\n');
		}
		else
		{
			if (x >= 0 && x <= 100)
			{
				cout << "cin.good()=" << cin.good() << " x=" << x << endl; //�˾䲻׼��������Ҫ�����ʱgoodΪ1
				break;
			}
			else
				cout << "������һ��[0,100]֮�������" << endl; ;
		}
		
	}
			

		return 0;
}