#include<iostream>

using namespace::std;

int foo()
{
	static int ctr = 100;
	return ++ctr;
}
int main()
{
	for (int a = 0; a != 10; ++a)
	{
		cout << foo() << endl ;
	}
	return 0;
}