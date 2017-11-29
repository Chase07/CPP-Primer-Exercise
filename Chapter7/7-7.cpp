#include<iostream>
#include"7-6.h"

using namespace::std;
int main()
{
	Sales_data total;
	if (read(cin, total))
	{
		Sales_data cur;
		while (read(cin, cur))
		{
			if (total.isbn() == cur.isbn())
			{
				total = add(total, cur);
				//total.combine(cur);
			}
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
	}
	return 0;
}