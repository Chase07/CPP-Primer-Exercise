#include<iostream>
#include<vector>
#include<iterator>
using namespace::std;

int main()
{
	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto &it : v)
	{
		it % 2 == 0 ? it : it *= 2;
	}
	for (auto it : v)
	{
		cout << it << ' ';
	}
	cout << endl;
	return 0;
}