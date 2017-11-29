#ifndef _7_6_H
#define _7_6_H
#include<string>

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	std::string isbn() const
	{
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);
};
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
std::istream& read(std::istream& input, Sales_data& item)
{
	double price = 0.0;//Sales_data类里面没有price成员
	input >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return input;
}
std::ostream& print(std::ostream& output, const Sales_data& item)//记住养成习惯，不打算改变形参的值就将它定义为const类型
{
	output << item.bookNo << " is sold " << item.units_sold << " and revenue is " << item.revenue;
	return output;

}
#endif 
