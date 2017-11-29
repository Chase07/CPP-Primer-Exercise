#ifndef _7_41H
#define _7_41H
#include<string>
#include<iostream>

class Sales_data
{
	friend std::istream& read(std::istream&, Sales_data& item);
public:
	
	Sales_data(const std::string str, unsigned us, double p) :bookNo(str), units_sold(us), price(p), revenue(us * p) {}
	Sales_data() :Sales_data("", 0, 0) { std::cout << "Sales_data(): " << bookNo << " " << units_sold << " " << price << " " << revenue << " " << std::endl;
	}
	Sales_data(const std::string str) :Sales_data(str, 6, 6) { std::cout << "Sales_data(std::string str): " << bookNo << " " << units_sold << " " << price << " " << revenue << " " << std::endl;
	}
	Sales_data(std::istream& input) :Sales_data() 
	{ 
		read(input, *this); 
		std::cout << "Sales_data(std::istream& input): " << bookNo << " " << units_sold << " " << price << " " << revenue << " " << std::endl;
	}
	Sales_data(std::string str, std::istream& input) :Sales_data(str)
	{ 
		read(input, *this); 
		std::cout << "Sales_data(std::string str, std::istream& input): " << bookNo <<" " << units_sold << " " << price << " " << revenue << " " << std::endl;
	}

private:
	std::string bookNo;
	unsigned units_sold;
	double price;
	double revenue;
};
std::istream& read(std::istream& input, Sales_data& item)
{
	input >> item.bookNo >> item.units_sold >> item.price;
	item.revenue = item.units_sold * item.price;
	return input;
}
#endif