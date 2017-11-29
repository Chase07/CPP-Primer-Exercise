#include<iostream>
#include<vector>
#include<iterator>

using namespace::std;

int main()
{
	int a[] = { 0, 2, 3, 4 };
	vector<int> vec(a, end(a));

	for (auto i = vec.cbegin(); i != vec.cend(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}