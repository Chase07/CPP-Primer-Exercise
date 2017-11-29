#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
	vector<string> v;
	for ( string str ; cin >> str ; )
	{
		v.push_back( str );
	}

	/*vector<int> v;
	for ( int  t ; cin >> t ; )
	{
		v.push_back( t );
	}*/

	return 0;
}