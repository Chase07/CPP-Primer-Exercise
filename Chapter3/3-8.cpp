#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string c = "Are you ok?";
	
	for ( decltype( c.size() ) i = 0 ; i < c.size() ; ++i )
	{
		c[i] = 'X';
	}
	cout << c << endl;
	return 0;
}
/*int main()
{
	string c =  "Are you ok?";
	int i = 0;
	while ( i < c.size() )
	{
		c[ i ] = 'X';
		i++;
	}
	cout << c << endl;
	return 0;
}*/