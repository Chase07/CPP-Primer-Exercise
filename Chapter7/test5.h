#ifndef _T_5
#define _T_5
class test5
{
public:
	test5(int i1)
	{//提示了未初始化就进行赋值的错误
		i = i1;
		ci = i1;
		ri = i1;
	}
private:
	int i;
	const int ci;
	int &ri;
};
#endif
