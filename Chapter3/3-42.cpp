#include<iostream>
#include<vector>
#include<iterator>
using namespace ::std;

int main()
{
	vector<int> v{1, 2, 3, 4};
	int i[4];
	auto a1 = v.begin();
	for ( int b = 0 ; a1 != v.end() ; ++a1, ++b)
	{
		i[ b ] = *a1;
	}
	for ( auto a : i )
	{
		cout << a << " ";
	}
	return 0;
}