#include<iostream>
#include<map>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace::std;

int main()
{
	map<string, vector<int>> mymap{ {"No.1", {1, 2, 3}}, {"No.2", {4, 5, 6}} };

	map<string, vector<int>>::iterator iter = mymap.find("No.2");
	return 0;
}