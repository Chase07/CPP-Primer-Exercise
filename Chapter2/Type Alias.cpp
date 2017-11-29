#include<iostream>

int main( void )
{
	using Li = int*;
	int n1 = 666;
	int n2 = 333;
	Li p1 = &n1;
	const Li p2 = &n1;
	p1 = &n2;
	p2 = &n2;// here it means that p2 is a constant object  

	return 0;
}