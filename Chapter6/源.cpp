#include<iostream>

using namespace::std;

int main()
{
	const int a = 1;
	int b = 2;
	const int &i = 42;
	int *p = &b;
	const int *q = &b;//low-level const
	p = q;//Error:low-level const����������ֵһ��nonconst
	q = p;//Ok:nonconst����������ֵһ��low-level const


	return 0;
}