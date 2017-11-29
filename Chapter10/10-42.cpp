#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
#include<string>

using namespace::std;

int main()
{
	list<string> lis1{ "go", "go", "back", "back", "home", "home" };
	lis1.sort();
	lis1.unique();
	for (auto& i : lis1)
		cout << i << " ";
	cout << endl;
	return 0;
}