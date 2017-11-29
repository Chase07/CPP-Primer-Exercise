#include<iostream>
#include<string>

using namespace::std;

int main()
{
	string str, prestr;
	bool tf = false;
	while (cin >> str)
	{
		if (! isupper(str[0]))
			continue;
		else if (str == prestr)
		{
			tf = true;
			break;
		}	
		prestr = str;
	}
	if (tf)
	{
		cout << prestr << endl;
	}
	else
		cout << "No such word !" << endl;

	return 0;
}