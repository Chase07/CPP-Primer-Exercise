#include"7-21.h"
#include<iostream>

using namespace::std;

int main()
{
	Sales_data total(cin);
	Sales_data cur;
	if (!total.isbn().empty())//total.isbn()���ص���string�࣬����ֱ���ø����µĳ�Ա����
	{
		/*
		istream& input = cin;
		while (input)
		{
			Sales_data cur(input);
			......
		}*/
		while (read(cin, cur))
		{
			if (total.isbn() == cur.isbn())
				total.combine(cur);
			else
			{
				print(cout, total) << endl;
				total = cur;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cout << "No data!?" << endl;
		return -1;
	}
	return 0;
}