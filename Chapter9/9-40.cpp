#include<iostream>
#include<vector>
#include<iterator>

using namespace::std;

int main()
{
	vector<string> svec;
	svec.reserve(1024);
	string word = "GG";
	for(int i = 0; i != 1048; ++i)
	{
		svec.push_back(word);
	}
	svec.resize(svec.size() + svec.size() / 2);
	cout << svec.size() << "\t" << svec.capacity() << endl;
	return 0;
}