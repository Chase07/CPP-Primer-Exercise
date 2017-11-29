#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace::std;

int main()
{
	vector<int> vec{ 1, 3, 5, 7 };
	//同时定义两个输出流迭代器
	ostream_iterator<int> o_iter(cout, " ");
	ostream_iterator<char> o_iter0(cout);
	for_each(vec.crbegin(), vec.crend(), [&o_iter](const int& i) {*o_iter++ = i; });
	
	*o_iter0++ = '\n';//回车符被成功添加在数字尾部，说明不能在流中反向移动
	return 0;
}