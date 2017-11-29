#include<iostream>
#include<iterator>
using namespace::std;

int main()
{
	int a[10];
	int *p = a;
	for (; p != end(a); ++p)
	{
		*p = 0;
	}
	for (auto i : a)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}