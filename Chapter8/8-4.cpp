#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace::std;

void ReadFileToVec(const string& FileName, vector<string>& vec)//C++编程注重性能与安全性，需要记住不需要改变值得使用const，不影响原数据的情况下使用reference（&）
{
	ifstream is(FileName);
	if (is)//检查文件是否打开成功
	{
		string str;
		while (getline(is, str))
		{
			vec.push_back(str);
		}
	}
}
int main()
{
	vector<string> vec;
	ReadFileToVec("8-4.txt", vec);
	for(const auto &i : vec)//不改变原值，使用reference（&）
	{
		cout << i << endl;
	}
	 
	return 0;
}