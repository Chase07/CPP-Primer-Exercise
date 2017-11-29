#include<iostream>
#include<string>
#include<cstring>
using namespace::std;

int main()
{
	const char ca[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	const char s[] = "world";
	const char *p = ca;
	for (; *p ; ++p)
	{
		cout << *p ;
	}

	cout << endl;
	return 0;
}