#include"7-21.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<fstream>
using namespace::std;

inline bool compareIsbn(const Sales_data& data1, const Sales_data& data2)
{
	return data1.avg_price() < data2.avg_price();
}
void sort_Sales(vector<Sales_data>& vec)
{
	sort(vec.begin(), vec.end(), compareIsbn);
}
int main()
{
	ifstream input("10-12.txt");
	vector<Sales_data> vec;
	Sales_data temp;
	while (read(input, temp))
		vec.push_back(temp);
	sort_Sales(vec);
	for (auto& i : vec)
		print(cout, i) << endl;
	return 0;
}