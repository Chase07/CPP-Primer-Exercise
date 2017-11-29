#include<iostream>

using namespace::std;

void swap(int &a , int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
int main()
{
	int a = 999, b = 666;
	swap(a, b);

	cout << "a = " << a << endl <<"b = " << b << endl;
	return 0;
}