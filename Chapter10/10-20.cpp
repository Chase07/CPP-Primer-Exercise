#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<string>
using namespace::std;

int main()
{
	ifstream ip("10-20.txt");
	vector<string> vec;
	for (string str; ip >> str; vec.push_back(str));
	unsigned count = count_if(vec.begin(), vec.end(), [](const string& str)->bool {return str.size() >= 6 ? true : false; });
	cout << count <<endl;
	return 0;
}