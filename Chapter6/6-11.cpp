#include<iostream>

using namespace::std;

void reset(int &i)
{
	i = 666;
}
int main()
{
	int a;
	reset( a );
	cout << a << endl ;

	return 0;
}