#include<iostream>
#include<string>
#include<vector>
using namespace::std;

int main()
{
	vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	for (auto i = v.begin() ; i != v.end() ; ++i)
	{
		(*i) *= 2;
	}
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}