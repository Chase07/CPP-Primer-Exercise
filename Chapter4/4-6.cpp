#include<iostream>

using namespace::std;

int main()
{
	int some_number;
	cin >> some_number;
	if ( some_number % 2 )
	{
		cout << "Odd number!" << endl;
	}
	else
	{
		cout << "Even number!" << endl;
	}
	some_number % 2 == 0 ? "even" : "odd";
	return 0;
}