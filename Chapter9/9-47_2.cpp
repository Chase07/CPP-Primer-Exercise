#include<iostream>
#include<string>
#include<iterator>

using namespace::std;

int main()
{
	string str("ab2c3d7R4E6");
	string numbers("0123456789");
	string alphabets("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	for (string::size_type pos = 0; (pos = str.find_first_not_of(alphabets, pos)) != string::npos; ++pos)
	{
		cout << str[pos] << " ";
	}
	cout << endl;
	for (string::size_type pos = 0; (pos = str.find_first_not_of(numbers, pos)) != string::npos; ++pos)
	{
		cout << str[pos] << " ";
	}
	cout << endl;
	return 0;
}