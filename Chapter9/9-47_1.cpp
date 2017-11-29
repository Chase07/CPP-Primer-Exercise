#include<iostream>
#include<string>
#include<iterator>

using namespace::std;

int main()
{
	string str("ab6c3d7R4E2");

	string::size_type pos = 0;
	char c = '2';
	while (c != '7')
	{
		pos = str.find_first_of(c, pos);
		if (pos != string::npos)
		{
			cout << "The '" << c << "' is at " << pos << endl;
		}
		pos = 0;
		++c;
	}

	string alphabet("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	for (string::size_type pos = 0; (pos = str.find_first_of(alphabet, pos)) != string::npos; ++pos)
	{
		cout << str[pos] << " ";
	}
	cout << endl;
	return 0;
}