#ifndef _N_D
#define _N_D
#include<string>

class NoDefault
{
public:
	NoDefault(const std::string&) {}
};
NoDefault d();//实际上声明的是一个返回类型为NoDefault,名字为d的函数
NoDefault D;//正确定义一个使用默认构造函数的对象
struct A
{
	NoDefault my_mem;
};
A a;
struct B
{
	B() {}//Error
	NoDefault b_member;
};
#endif