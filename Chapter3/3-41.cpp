#include<iostream>
#include<vector>
#include<string>
using namespace::std;

int main()
{
	int i1[] = { 1, 2, 3 };
	vector<int> i2( begin(i1), end(i1) );
	for (auto i : i2)
	{
		cout << i << " ";
	}
	return 0;
}