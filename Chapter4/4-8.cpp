#include<iostream>

using namespace::std;

int main()
{
	// Three expressions will overflow
	short n1 = 32767;
	cout << ++n1 << endl;//overflow
	unsigned short n2 = 0; 
	cout << --n2 << endl;//overflow
	unsigned short n3 = 65535;
	cout << ++n3 << endl;//overflow 

	return 0;
}