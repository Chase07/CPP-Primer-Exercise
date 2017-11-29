#include<string>
#include<vector>
#include<iostream>
#include<fstream>
#include<sstream>
using namespace::std;

int main()
{
	vector<string> vec1;
	ifstream if1("8-10.txt");
	string str1;

	if (if1)
		while (getline(if1, str1)) { vec1.push_back(str1); }
	else
	{
		cerr << "Fail to open the file !" << endl;
		return -1;
	}

	for(auto& i1 : vec1)
	{
		string str;
		istringstream is1(i1);
		while(is1 >> str)
		{
			cout << str << endl;
		}
	}

	
	return 0;
}