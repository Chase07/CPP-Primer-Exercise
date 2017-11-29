#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> v1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};//no.1
	vector<int> v2(10, 42);//no.2
	vector<int> v3(10);
	for (decltype(v3.size()) i = 0; i != v3.size() ; ++i)
	{
		v3[i] = 42;
	}//no.3
	vector<int> v4;
	for (int i = 0; i < 10; ++i)
	{
		v4.push_back(42);
	}//no.4
	vector<int> v5(10);
	for (auto &i : v5)
	{
		i = 42;
	}//no.5
	for (auto i : v5)
	{
		cout << i << endl;
	}
	return 0;
}