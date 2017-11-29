#ifndef _T_6
#define _T_6

class X
{
public:
	int i;
	int j;
	X(int val) :j(val), i(j) {}//实际上按照声明的顺序初始化i和j这两个变量，所以i被未定义的j初始化了
};
#endif

