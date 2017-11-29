#include<iostream>
#include<string>
using namespace::std;

struct Sales_data1 {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
struct Sales_data2 {
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};
int main()
{
	Sales_data1 item1 = {"666-777-999", 25, 15.99};//Sales_data is not a aggregate class
	Sales_data2 item2 = {"666-777-999", 25, 15.99};
	return 0;
}