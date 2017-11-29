#include<iostream>

using namespace::std;

int main()
{
	int i1 = 8;
	auto f1 = [i1](int ii)->int {return i1 + ii; };
	cout << f1(6) << endl;
	return 0;
}