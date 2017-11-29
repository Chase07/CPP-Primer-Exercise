#include<iostream>
#include<string>
#include<iterator>

using namespace::std;

inline string combine(string& name, const string& prefix, const string& suffix)
{
	name.insert(0, prefix);
	name.insert(name.size(), 1, ' ');
	name.insert(name.size(), suffix);
	return name;
}

int main()
{
	string name("JB Li"), prefix("Mr."), suffix("Jr.");
	cout << combine(name, prefix, suffix) << endl;
	return 0;
}