#ifndef _T_5
#define _T_5
class test5
{
public:
	test5(int i1)
	{//��ʾ��δ��ʼ���ͽ��и�ֵ�Ĵ���
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
