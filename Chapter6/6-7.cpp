#include<iostream>

using namespace::std;

int foo()
{
	static int a = 0;
	return ++a;
}
int main()
{
	int a;
	cin >> a;//重复a次相加
	for (unsigned i = 0; i != a ; ++i)
	{
		cout << foo() << endl;
	}
	
	return 0;
}