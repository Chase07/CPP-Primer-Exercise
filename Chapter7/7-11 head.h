#ifndef _7_11_H
#define _7_11_H
#include<string>

class Sales_data
{
public:
	std::string bookNo;
	unsigned units_sold;
	double price;
	double revenue;
	Sales_data() = default;
	Sales_data(const std::string& s, unsigned n, double p) : bookNo(s), units_sold(n), price(p), revenue(p * n) {}
	Sales_data(std::istream&);
	std::string isbn() const
	{
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);

};
std::istream& read(std::istream& input, Sales_data& item)
{
	input >> item.bookNo >> item.units_sold >> item.price;
	item.revenue = item.units_sold * item.price;
	return input;
}
std::ostream& print(std::ostream& output, const Sales_data& item)
{
	output << item.bookNo << " is sold " << item.units_sold << " and revenue is " << item.revenue;
	return output;
}
Sales_data::Sales_data(std::istream& input)
{
	read(input, *this);
}
Sales_data& Sales_data::combine(const Sales_data& temp)
{
	units_sold += temp.units_sold;
	revenue += temp.revenue;
	return *this;
}
#endif