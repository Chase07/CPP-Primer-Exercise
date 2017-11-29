#include<iostream>
#include<iterator>
#include<algorithm>
#include<list>

using namespace::std;

int main()
{
	list<int> lis{ 1, 3, 5, 0, 7 };

	auto iter = find(lis.crbegin(), lis.crend(), 0);
	cout << *iter << endl;
	
	return 0;
}