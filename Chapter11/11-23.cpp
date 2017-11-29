#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<iterator>
#include<algorithm>

using namespace::std;

int main()
{
	multimap<string, string> faml;
	string last_name, first_name;

	while (cout << "PLZ input the last name:\n" && cin >> last_name && last_name != "#")
	{
		cout << "PLZ input the first name : \n";
		while (cin >> first_name && first_name != "#")
		{
			//faml.insert({ last_name, first_name });
			faml.emplace(last_name, first_name);
		}
	}
	for (auto& i : faml)
	{
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}