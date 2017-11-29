#include<iostream>
#include<string>
using namespace::std;
struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
int main(void)
{
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data cur;
		while (cin >> cur.bookNo >> cur.units_sold >> cur.revenue)
		{
			if (cur.bookNo == total.bookNo)
			{
				total.units_sold += cur.units_sold;
				total.revenue += cur.revenue;
			}
			else
			{
				cout << total.bookNo << " was saled "
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