#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> v;
	for ( string str ; cin >> str  ; )
	{
		for ( char &i : str )
		{
			i = toupper(i);
		}
		v.push_back( str );
	}
	for ( auto i : v )
	{
		cout << i << endl;
	}
	return 0;
}