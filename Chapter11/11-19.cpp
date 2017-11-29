#include<iostream>
#include<set>
#include<string>
#include<iterator>
#include"7-21.h"

using namespace::std;

bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs)
{
	return lhs.isbn() < rhs.isbn();
}
int main()
{
	using comp = bool(*) (const Sales_data& lhs, const Sales_data& rhs);
	multiset<Sales_data, comp> bookstore(compareIsbn);
	multiset<Sales_data, comp>::iterator boo_it = bookstore.begin();

	return 0;
}