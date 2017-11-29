#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>

using namespace::std;

int main()
{
	vector<int> vec{ 1, 1, 2, 2, 3, 5 };
	list<int> lis;

	unique_copy(vec.cbegin(), vec.cend(), back_inserter(lis));

	for (auto& i : lis)
		cout << i << " ";
	cout << endl;

	unique_copy(vec.cbegin() + 2, vec.cend(), inserter(lis, --lis.end()));
	for (auto& i : lis)
		cout << i << " ";
	cout << endl;
	return 0;
}