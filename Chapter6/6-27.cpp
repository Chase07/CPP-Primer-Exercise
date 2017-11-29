#include<iostream>
#include<initializer_list>
using namespace ::std;

void sum(initializer_list<int> k)
{
	int s = 0;
	for (auto i : k)
	{
		s += i;
	}
	cout << s << endl;
}

int main()
{
	sum({ 1, 2, 3 });

	return 0;
}