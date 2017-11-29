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
	vector<int> vec;
	for (int i; cin >> i; )
	{
		vec.push_back( i );
	}
	/*(1)
	decltype(vec.size()) i = 0;
	for (  ; i + 1 < vec.size(); i += 2 )
	{
		cout << vec[i] + vec[i + 1] << endl;
		
	}
	if ( i + 1 == vec.size() )
	{
		cout << vec[i] << endl;
	}*/
	decltype(vec.size()) i = 0;
	decltype(vec.size()) j = vec.size() - 1;
	for ( ; i < vec.size() / 2 ; ++i, --j )
	{
		cout << vec[ i ] + vec[ j ] << endl;
	}
	return 0;
}