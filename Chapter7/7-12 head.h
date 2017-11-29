#ifndef _7_12_H
#define _7_12_H
#include<string>
/*为了把Sales_data(std::istream&)放进类，需要先声明read(),声明read()，又必须先声明Sales_data
*/
/*本题应该想表达：需要调用非成员函数的构造函数应该在类外定义，仅在类内声明即可*/
class Sales_data;
std::istream& read(std::istream&, Sales_data&);
class Sales_data
{
public:
	std::string bookNo;
	unsigned units_sold;
	double price;
	double revenue;

	std::string isbn() const
	{
		return bookNo;
	}
	Sales_data() = default;
	Sales_data(const std::string& s, unsigned n, double p) : bookNo(s), units_sold(n), price(p), revenue(p * n) {}

	Sales_data::Sales_data(std::istream& input)
	{
		read(input, *this);
	}
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

#endif