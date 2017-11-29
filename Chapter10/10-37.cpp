#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace::std;

int main()
{
	vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8 };
	auto beg = vec.crbegin() + vec.size() - 7 + 1;
	auto end = vec.crend() - 3 + 1;
	list<int> lis(beg, end);

	for (auto& i : lis)
		cout << i << " ";
	cout << endl;
	return 0;
}