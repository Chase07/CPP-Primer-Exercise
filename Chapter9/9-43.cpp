#include<iostream>
#include<string>
#include<iterator>

using namespace::std;

void replace(string& s, const string& oldVal, const string&  newVal)
{
	for (auto i = s.begin(); i != s.cend(); ++i)
	{
		if (*i != oldVal.front()) continue;
		if (distance(i, s.end()) < oldVal.size()/*distance(oldVal.begin(), oldVal.end())*/) break;
		if (string{ i, i + oldVal.size() } == oldVal)
		{
			s.erase(i, i + oldVal.size());
			s.insert(i, newVal.cbegin(), newVal.cend());
			i += newVal.size() - 1;
		}
	}
}
int main()
{
	string s("Hey!Go tho, come tho!"), oldVal("tho"), newVal("though");
	replace(s, oldVal, newVal);
	cout << s << endl;
	return 0;
}