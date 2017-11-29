#ifndef _7_21_H
#define _7_21_H
#include<string>
#include<iostream>
class Sales_data
{
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::istream& read(std::istream&, Sales_data&);
	friend std::ostream& print(std::ostream&, const Sales_data&);
public:
	Sales_data() = default;
	/* 定义一个接受一个参数的定义构造函数，相当于同时定义了
	** 一个从该参数类型到这个类的一种隐式类型转换
	*/
	Sales_data(const std::string& s) :bookNo(s) {}
    Sales_data(const std::string& s, const unsigned n, const double p) :bookNo(s), units_sold(n), price(p), revenue(p * n) {}
	explicit Sales_data(std::istream& ios )//只要有设置一个默认的实参值，就拥有了默认构造函数的作用
	{
		ios >> bookNo >> units_sold >> price;
		revenue = units_sold * price;
	}

	std::string isbn() { return bookNo; };
	Sales_data& combine(Sales_data);
	double avg_price() const;
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double price = 0.0;
	double revenue = 0.0;
};
/*Sales_data::Sales_data(std::istream& input)
{
	read(input, *this);
}*/
Sales_data& Sales_data::combine(Sales_data item)
{
	units_sold += item.units_sold;
	revenue += item.revenue;
	return *this;
}
double Sales_data::avg_price() const//若无需改变当前对象的成员，记住定义为const member funtion
{
	return revenue / units_sold;
}
Sales_data add(const Sales_data& S1, const Sales_data& S2)
{
	Sales_data temp = S1;
	temp.combine(S2);
	return temp;
}
std::istream& read(std::istream& input, Sales_data& item)
{
	input >> item.bookNo >> item.units_sold >> item.price;
	item.revenue = item.units_sold * item.price;
	return input;
}
std::ostream& print(std::ostream& output, const Sales_data& item)
{
	output << item.bookNo << " is " << item.avg_price() << " per one, sold " << item.units_sold << " and revenue is " << item.revenue << "^_^";
	return output;
}
#endif
