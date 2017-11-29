#include<iostream>
#include<string>
#include<iterator>
#include<vector>
using namespace::std;

int main()
{
	char text;
	unsigned a, e, i, o, u, space, tabs, newlines;
	a = e = i = o = u = space = tabs = newlines = 0;
	while (cin >> noskipws >> text)
	{
			switch	(text)
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
			case ' ':
				++space;
				break;
			case '\t':
				++tabs;
				break;
			case '\n':
				++newlines;
				break;
			default:;
			}
	}
	cout << "a:\t" << a << "\n"
		<< "e:\t" << e << "\n"
		<< "i:\t" << i << "\n"
		<< "o:\t" << o << "\n"
		<< "u:\t" << u << "\n"
		<< "space:\t" << space << "\n"
		<< "tabs:\t" << tabs << "\n"
		<< "newlines:\t" << newlines << endl;
	return 0;
}