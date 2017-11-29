#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace::std;

int main()
{
	vector<int> vec;
	fill_n(back_inserter(vec), 6, 3);
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;

	return 0;
}