#include<iostream>

int main(void)
{
	int a = 3, b = 4;
	decltype(a) c = a;//c is an int&( wrong at first, c is an int:-) )
	decltype((a)) d = a;//d is an int&
	++c;
	++d;
	return 0;
}