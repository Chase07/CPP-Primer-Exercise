#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
using namespace::std;

int main()
{
	vector<int> vec;
	list<int> lis{ 666, 666, 777 };
	replace(lis.begin(), lis.end(), 666, 999);
	for (auto& i : lis)
		cout << i << " ";
	cout << endl;
	replace_copy(lis.begin(), lis.end(), back_inserter(vec), 666, 999);
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;
	return 0;
}