#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string c = "abcdefghi";
	for ( auto &ch : c )
	{
		ch = 'X';
	}
	cout << c << endl;
	return 0;
}