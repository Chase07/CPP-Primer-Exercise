#include<iostream>
#include<string>

using namespace::std;
bool f1(const string &str)
{
	for (auto i : str)
	{
		if (isupper(i))
			return true;
	}
	return false;
}
void f2(string &str)
{
	for (auto &i : str)
	{
		i = tolower(i);
	}
}
int main()
{
	string s("Who i am ?");
	cout << (f1(s) ? "Yes" : "No") << endl;
	
	f2(s);
	cout << s << endl;
	return 0;
}
