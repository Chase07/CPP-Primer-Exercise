#include"For test2.h"
#include<sstream>
#include<iostream>
#include<string>
#include<vector>

using namespace::std;

int main()
{
	string line, word;
	vector<personInfo> people;
	istringstream record;
	while (getline(cin, line))
	{
		personInfo info;
		record.clear();//Important£¬resetting the state of stream
		record.str(line);
		record >> info.name;
		while(record >> word)
		{
			info.phoneNumber.push_back(word);
		}
		people.push_back(info);
	}
	for (auto& i1 : people)
	{
		cout << i1.name << " ";
		for (auto& i2 : i1.phoneNumber) { cout << i2 << " "; }
		cout << endl;
	}

	return 0;
}