#include<iostream>

using namespace::std;

int main()
{
	int x[10];
	int *p = x;

	cout << sizeof (int) << endl;//��������ҪԲ����
	cout << sizeof x /sizeof *x  << endl;
	cout << sizeof *p << endl;
	
	
	return 0;
}