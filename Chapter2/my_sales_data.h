#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
struct My_Sales_data 
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	void Calrevenue( double price );
	void Add( My_Sales_data data );
};
void My_Sales_data::Calrevenue( double price )
{
	revenue = units_sold * price;
}
void My_Sales_data::Add( My_Sales_data data )
{
	revenue += data.revenue;
	units_sold += data.units_sold;
}
#endif

