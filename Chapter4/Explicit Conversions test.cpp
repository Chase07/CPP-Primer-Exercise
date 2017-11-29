#include<iostream>

using namespace::std;

int main()
{
	double d = 1.23;
	void *p = &d;
	double *dp = static_cast<double*>(p);


	return 0;
}