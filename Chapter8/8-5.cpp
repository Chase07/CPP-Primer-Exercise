#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace::std;

void ReadFileToVec(const string& FileName, vector<string>& vec)
{
	string str;
	fstream is(FileName);
	if (is)
	{
		while (is >> str) 
		{ vec.push_back(str); }
	}
}
int main()
{
	vector<string> vec;
	ReadFileToVec("8-4.txt", vec);
	for (auto& i : vec)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;

}