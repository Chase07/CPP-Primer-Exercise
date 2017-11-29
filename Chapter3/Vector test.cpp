#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> iv;
	for (decltype(iv.size()) i = 0; i != 10; ++i)
	{
		iv.push_back( i );//正确写法
	}
	/*for (decltype(iv.size()) i = 0; i != 10; ++i)
	{
		iv[i] = i; //iv是空的，严重错误 
	}*/
	return 0;
}