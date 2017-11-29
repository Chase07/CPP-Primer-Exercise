#include"For test2.h"
#include<fstream>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace::std;

int main()
{
	string oneLine, word;
	vector<personInfo> people;
	while (getline(cin, oneLine))
	{
		istringstream oneRecord(oneLine);
		personInfo info;
		oneRecord >> info.name;
		while (oneRecord >> word) { info.phoneNumber.push_back(word); }
		people.push_back(info);
	}

	ofstream outf("Test2.txt", ofstream::app);
	if (outf)
	{ 
		for (auto& i1 : people)
		{
			outf << i1.name << " ";
			for (auto& i2 : i1.phoneNumber)
			{
				outf << i2 << " ";
			}
			outf << endl;
		}
	}
	else
	{
		cout << "Fail to open a file" << endl;
	}
	
	return 0;
}