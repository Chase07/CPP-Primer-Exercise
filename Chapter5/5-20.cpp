#include<iostream>
#include<string>

using namespace::std;

int main()
{
	string  str, prestr;

	while (cin >> str)
	{
		if (str == prestr)
		{
			str = "";
			break;
		}
		prestr = str;
	}
	if (str.empty())
		cout << prestr << endl;
	else
		cout << "No word was repeated !" << endl;

	return 0;
}