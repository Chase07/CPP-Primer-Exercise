#include<iostream>

using namespace::std;

int main()
{
	char text;
	unsigned a, e, i, o, u;
	a = e = i = o = u = 0;
	while (cin >> text)
	{
		switch (text)
		{
			case 'a':
			case 'A': 
				++a;
				break;
			case 'e':
			case 'E':
				++e;
				break;
			case 'i':
			case 'I': 
				++i;
				break;
			case 'o':
			case 'O': 
				++o;
				break;
			case 'u':
			case 'U': 
				++u;
				break;
			default:;
		}
	}
	cout << "a:\t" << a << "\n"
		<< "e:\t" << e << "\n"
		<< "i:\t" << i << "\n"
		<< "o:\t" << o << "\n"
		<< "u:\t" << u << endl;
	return 0;
}