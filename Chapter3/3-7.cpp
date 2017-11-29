#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string; 

int main()
{
	string c = "Are you ok?";
	for ( char &ch : c )// no different
	{
		ch = 'x';
	}
	cout << c << endl;
	return 0;
}