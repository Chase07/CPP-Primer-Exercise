#ifndef SDC
#define SDC
#include<string>

class Sales_data
{
public:
	//constructors are as follow
	Sales_data() = default;
	Sales_data(const std::string& s) : bookNo(s) {}
	Sales_data(const std::string& s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n) {}
	Sales_data(std::istream&);//函数声明
	//members are as follow
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);//函数声明
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif