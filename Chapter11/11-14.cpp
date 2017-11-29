#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<numeric>

using namespace::std;

int main()
{
	map<string, vector<pair<string, string>>> families;
	string fam_name, chi_name, chi_birt;

	//cout << "PLZ input your family:" << endl;

	while (cout << "PLZ input your family:" << endl && cin >> fam_name)
	{
		cout << "PLZ input child's name and his/her birthday" << endl;
		while (cin >> chi_name && chi_name != "#" && cin >> chi_birt)
		{
			families[fam_name].emplace_back(chi_name, chi_birt);
		}
	}

	for (auto& i1 : families)
	{
		cout << i1.first << ":\n";
		for (auto& i2 : i1.second)
		{
			cout << i2.first << " " << i2.second << endl;
		}
	}
	return 0;
}