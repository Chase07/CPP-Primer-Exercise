#ifndef _N_D
#define _N_D
#include<string>

class NoDefault
{
public:
	NoDefault(const std::string&) {}
};
NoDefault d();//ʵ������������һ����������ΪNoDefault,����Ϊd�ĺ���
NoDefault D;//��ȷ����һ��ʹ��Ĭ�Ϲ��캯���Ķ���
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