#include<iostream>
#include<iterator>
#include<vector>
using namespace::std;

int main()
{
	vector<int> vec1{3, 2, 1};
	vector<int> vec2{6, 6, 6};
	/*********以vector的迭代器 解释 顶层和底层const*********/
	const vector<int>::iterator pvec1 = vec1.begin();
	vector<int>::iterator const pvec3 = vec1.begin();
	pvec1 = vec2.begin();//说明pvec1是 top-level const (Error1)	
	pvec3 = vec2.begin();//pvec1和pvec3是同一种类型，原因是迭代器不是一种内置类型，编译器不可以通过const的位置来进行区分 常量iterator 还是 指向常量的iterator(Error2)
	
	//声明并定义指向常量的iterator可以如下两种方式：
	vector<int>::const_iterator pvec2 = vec1.cbegin();
	auto pvec4 = vec1.cbegin();
	*pvec2 = 0;//说明pvec2是 low-level const(Error3)
	*pvec1 = 0;//说明pvec1不是 low-level const 

	const vector<int>::const_iterator pvec5 = vec1.cbegin();
	//下面两句说明pvec5是 top&low - level const
	pvec5 = vec2.begin();//(Error4)
	*pvec5 = 0;//(Error5)

	pvec1 = pvec2;//说明 low-level const 不能 转换为 top-level const(Error6)
	pvec2 = pvec1;//说明 top-level const 可以 转换为 low-level const

	return 0;
}