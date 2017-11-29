#include<iostream>
#include<string>

using namespace::std;

inline string combine(string& name, const string& prefix, const string& suffix)
{
	name.insert(name.begin(), prefix.begin(), prefix.end());
	name.append(suffix);
	return name;
}

int main()
{
	string name("JB Li"), prefix("Mr."), suffix("Jr.");
	cout << combine(name, prefix, suffix) << endl;
	
	return 0;
}