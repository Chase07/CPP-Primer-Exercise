#ifndef _7_12_H
#define _7_12_H
#include<string>
/*Ϊ�˰�Sales_data(std::istream&)�Ž��࣬��Ҫ������read(),����read()���ֱ���������Sales_data
*/
/*����Ӧ�������Ҫ���÷ǳ�Ա�����Ĺ��캯��Ӧ�������ⶨ�壬����������������*/
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