#include<iostream>
#include<list>
#include<string>
#include<iterator>

using namespace::std;

int main()
{
	string str;
	list<string> lis;
	while(cin >> str)
	{
		lis.push_back(str);
	}
	for(auto iter = lis.cbegin(); iter != lis.cend(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;
	return 0;
}