#include<iostream>
#include<string>
#include<cstring>
using namespace::std;

int main()
{
	const char c1[] = { 'w', 'h', 'a', 't', '\0' };
	const char c2[] = { 'w', 'h', 'a', 't', '\0' };
	auto re = strcmp(c1, c2)
	if ( re == 0 )
	{
		cout << "RIGHT" << endl;
	}
	else if ( re < 0 )
	{
		cout << "c1 < c2" << endl;
	}
	else
	{
		cout << "c1 > c2" << endl;
	}
	/*
	string s1("what");
	string s2("what");
	if (s1 == s2)
	{
		cout << "RIGHT" << endl;
	}*/

	return 0;
}