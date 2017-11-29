#include<iostream>
#include"My_Sales_data.h"

int main(void)
{
	double price1,price2;
	My_Sales_data item1, item2;
	std::cin >> item1.bookNo >> item1.units_sold >> price1;
	std::cin >> item2.bookNo >> item2.units_sold >> price2;
	item1.Calrevenue();
	item2.Calrevenue();
	My_Sales_data total;
	total = item1.Add( item2 );
	std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
	return 0;
}