#include<iostream>

using namespace::std;

int main()
{
	int a[3][2] = 
	{
		{1, 10},
		{2, 20},
		{3, 30}
	};
	for (auto p = begin(a); p != end(a) ; ++p)
	{
		for (auto q = begin(*p); q != end(*p) ; ++q)
		{
			cout << *q << ' ';
		}
		cout << endl;
	}
	return 0;
}