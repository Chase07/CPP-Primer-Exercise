#include<iostream>
#include<vector>
#include<algorithm>

using namespace::std;

int main()
{
	vector<int> vec{ 1, 2, 3, 4, 5, 6, 6, 6, 7 };
	auto val = 6;
	decltype(6) val1; 
	auto cou = count(vec.cbegin(), vec.cend(), 7);
	cout << cou << endl;
	return 0;
}