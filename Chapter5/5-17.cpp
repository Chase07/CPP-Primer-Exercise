#include<iostream>
#include<vector>
#include<iterator>

using namespace::std;

int main()
{
	vector<int> v1;
	vector<int> v2;
	for (int temp; cin >> temp; v1.push_back(temp));
	cin.clear();
	cin.ignore();
	for (int temp; cin >> temp; v2.push_back(temp));
	auto end = v1.size() < v2.size() ? v1.size() : v2.size();
	decltype( end ) i = 0;
	for (;i != end; ++i)
	{
		if (v1[i] != v2[i] )
			break;
	}
	if (i == end)
		cout << "TURE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}