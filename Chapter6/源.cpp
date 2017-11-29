#include<iostream>

using namespace::std;

int main()
{
	const int a = 1;
	int b = 2;
	const int &i = 42;
	int *p = &b;
	const int *q = &b;//low-level const
	p = q;//Error:low-level const不能用来赋值一个nonconst
	q = p;//Ok:nonconst可以用来赋值一个low-level const


	return 0;
}