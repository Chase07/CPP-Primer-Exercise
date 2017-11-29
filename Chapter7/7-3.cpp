#include "7-2.h"
#include <iostream>
using namespace::std;

int main(void)
{
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data cur;
		while (cin >> cur.bookNo >> cur.units_sold >> cur.revenue)
		{
			if (cur.isbn() == total.isbn())
			{
				total.combine(cur);
			}
			else
			{
				cout << total.isbn() << " was saled "
					<< total.units_sold << " and revenue is "
					<< total.revenue << endl;
				total = cur;
			}
		}
		cout << total.bookNo << " was saled "
			<< total.units_sold << " and revenue is "
			<< total.revenue << endl;
	}
	else
	{
		cout << "No data !?" << endl;
	}
	return 0;
}