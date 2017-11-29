#include"7-21.h"
#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<string>
#include<fstream>
#include<numeric>
using namespace::std;

int main()
{
	ifstream input("10-32-test.txt");
	vector<Sales_data> vec;
	Sales_data temp;
	while (input >> temp)
		vec.push_back(temp);
	for (auto& i : vec)
		cout << i << endl;
	cout << accumulate(vec.cbegin(), vec.cend(), Sales_data(vec.cbegin()->isbn())) << endl;//此算法应用于自定义的类需要重载operator '+'
}
