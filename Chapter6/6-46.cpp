#include<iostream>

using namespace::std;

constexpr bool isShort(const string& str1, const string& str2)
{
	return str1.size() < str2.size();//Exercise4.6 的答案是错误的，在Pezy的GItHub的原答案已经修改->https://github.com/ReadingLab/Discussion-for-Cpp/issues/22  (2016.9.29)
}
int main()
{

	return 0;
}