#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace::std;

string findword(string& str_a_dea, ifstream& input)//输入流必须为引用
{
	if (!input) return "Fail to open file!";
	string str;
	vector<string> vec;
	while (input >> str)
	{
		vec.push_back(str);
	}
	for(auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		if ((*iter).find_first_of(str_a_dea) != string::npos)
		{
			iter = vec.erase(iter);
			--iter;
		}
	}
	str = vec[0];
	for (auto& i : vec)
	{
		if (i.size() > str.size())
		{
			str = i;
		}
	}
	return str;
}

int main()
{
	string str_a_dea("bdfjklpqty");
	ifstream ifs("9-49.txt");
	cout << findword(str_a_dea, ifs) << endl;
	return 0;
}