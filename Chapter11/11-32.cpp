#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<iterator>

using namespace::std;

int main()
{
	multimap<string, string> authorsToWorks{ { "Su", "book1" },{ "Su", "book2" },{ "Li", "book1" },{ "Li", "book2" },{ "Li", "book3" } };
	for (auto& i : authorsToWorks)
	{
		cout << i.first << ": " << i.second << endl;
	}
	return 0;
}