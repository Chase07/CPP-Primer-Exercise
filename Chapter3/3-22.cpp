#include<iostream>
#include<string>
#include<vector>
using namespace::std;

int main()
{
	vector<string> text{"stuff", "happens", ",", "and", "we", "can", "either"};
	for (auto i = text.begin(); i != text.end() && ! i->empty() ; ++i)
	{
		for ( auto &j : *i )
		{
			j = toupper( j );
		}
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}