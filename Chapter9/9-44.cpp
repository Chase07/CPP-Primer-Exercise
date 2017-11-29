#include<iostream>
#include<string>

using namespace ::std;

void replace(string& str, const string& oldVal, const string& newVal)
{
	for (unsigned i = 0; i != str.size(); ++i)
	{
		if (str[i] != oldVal[0]) continue;
		if (str.size() - i < oldVal.size()) break;
		if (str.substr(i, oldVal.size()) == oldVal)
		{
			str.replace(i, oldVal.size(), newVal);
			i += newVal.size() - 1;
		}
	}
}

int main()
{
	string str("To drive straight thru is a foolish,tho courageous act.");
	
	replace(str, "tho", "though");
	replace(str, "thru", "through");
	cout << str << endl;

	return 0;
}