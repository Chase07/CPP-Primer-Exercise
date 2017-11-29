#include<iostream>
#include<set>
#include"7-21.h"

using namespace::std;

inline bool compare(const Sales_data& d1, const Sales_data& d2)
{
	return d1.isbn() < d2.isbn(); 
}

int main()
{
	using c_type = bool (*) (const Sales_data& d1, const Sales_data& d2);
	//c_type ��һ������ָ������
	multiset<Sales_data, c_type> bookstore(compare);
	return 0;
}