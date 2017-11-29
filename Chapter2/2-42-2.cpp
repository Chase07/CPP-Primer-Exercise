#include<iostream>
#include"My_Sales_data.h"
int main(void)
{
	double price;
	My_Sales_data total;

	if( std::cin >> total.bookNo >> total.units_sold >> price )
	{
		total.Calrevenue( price );
		for ( My_Sales_data curitem ; std::cin >> curitem.bookNo >> curitem.units_sold >> price; )
		{
			if ( total.bookNo == curitem.bookNo )
			{
				curitem.Calrevenue( price );
				total.Add( curitem );
			}
		}
		std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
		return 0;
	}
	else
	{
		std::cout << "No Data!!" << std::endl;
		return 1;
	}
}
