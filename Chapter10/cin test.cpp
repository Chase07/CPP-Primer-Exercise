#include<iostream>
#include<string>
#include<vector>
using namespace::std;

int main()
{
	vector<string> vec;
	string str;
	while (cin)
	{
		cin >> str;

		vec.push_back(str);
	}
	for (auto& i : vec)
	{
		cout << i << " ";
	}
	cout << vec.size() << endl;
	return 0;
}