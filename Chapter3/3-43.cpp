#include<iostream>

using namespace::std;

int main()
{
	int ia[3][4] =
	{
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};/*
	//(1)
	//����Ҫ���������������������ڲ��ı������ݣ����Զ�����const�޶���
	for (const int (&p)[4] : ia)//����p��p����һ������Ϊ4��int��������
	{
		for (const int q : p)
		{
			cout << q << ' ';
		}
		cout << endl;
	}*/
	//(2)
	
	//(3)
	for (const int (*p)[4] =  ia ; p != ia + 3  ; ++p)//p��һ��ָ�򳤶�Ϊ4��int���͵������ָ��
	{
		for (const int *q = *p ; q != *p + 4 ; ++q)//q��һ��ָ��int���͵�ָ��
		{
			cout << *q << ' ';
		}
		cout << endl;
	}

	return 0;
}