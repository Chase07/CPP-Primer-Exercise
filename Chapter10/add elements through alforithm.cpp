#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace::std;

int main()
{
	vector<int> vec;
	auto it = back_inserter(vec);
	*it = 42;
	cout << vec.size() << " " << vec[0] << endl;
	fill_n(back_inserter(vec), 10, 0);
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;
	return 0;
}