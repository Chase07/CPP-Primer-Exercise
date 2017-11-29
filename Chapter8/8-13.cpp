#include"For test2.h"
#include<fstream>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace::std;

bool valid(const string& str)
{
	return isdigit(str[0]);//判断是否为数据
}
string format(const string& str)
{
	return str.substr(0, 3) + "-" + str.substr(3, 4) + "-" + str.substr(7);
}

int main()
{
	string oneLine, word;
	vector<personInfo> people;
	ifstream if1("test2.txt");
	if (if1)
	{
		while (getline(if1, oneLine))
		{
			personInfo info;
			istringstream is1(oneLine);
			is1 >> info.name;
			while (is1 >> word) { info.phoneNumber.push_back(word); }
			people.push_back(info);
		}
		for (const auto& i1 : people)
		{
			ostringstream formatted, badNums;
			for (const auto& i2 : i1.phoneNumber)
			{
				if (!valid(i2))
					badNums << " " << i2;
				else
					formatted << " " << format(i2);
			}
			if (badNums.str().empty())//若badNums中的string为空
				cout << i1.name << " " << formatted.str() << endl;
			else
				cerr << "Error: " << i1.name << " has invalid number(s) " << badNums.str() << endl;//错误的号码可能有多个，所以number后面带(s)
		}
	}
	else
	{
		cerr << "Fail to open the file !" << endl;
		return -1;
	}
		return 0;
}
