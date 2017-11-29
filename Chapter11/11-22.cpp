#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>

using namespace::std;

int main()
{
	vector<int> vec;
	map<string, vector<int>> mymap;
	pair<map<string, vector<int>>::iterator, bool> ret = mymap.insert(make_pair("CPP", vec));

	return 0;
}