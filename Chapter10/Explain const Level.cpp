#include<iostream>
#include<iterator>
#include<vector>
using namespace::std;

int main()
{
	vector<int> vec1{3, 2, 1};
	vector<int> vec2{6, 6, 6};
	/*********��vector�ĵ����� ���� ����͵ײ�const*********/
	const vector<int>::iterator pvec1 = vec1.begin();
	vector<int>::iterator const pvec3 = vec1.begin();
	pvec1 = vec2.begin();//˵��pvec1�� top-level const (Error1)	
	pvec3 = vec2.begin();//pvec1��pvec3��ͬһ�����ͣ�ԭ���ǵ���������һ���������ͣ�������������ͨ��const��λ������������ ����iterator ���� ָ������iterator(Error2)
	
	//����������ָ������iterator�����������ַ�ʽ��
	vector<int>::const_iterator pvec2 = vec1.cbegin();
	auto pvec4 = vec1.cbegin();
	*pvec2 = 0;//˵��pvec2�� low-level const(Error3)
	*pvec1 = 0;//˵��pvec1���� low-level const 

	const vector<int>::const_iterator pvec5 = vec1.cbegin();
	//��������˵��pvec5�� top&low - level const
	pvec5 = vec2.begin();//(Error4)
	*pvec5 = 0;//(Error5)

	pvec1 = pvec2;//˵�� low-level const ���� ת��Ϊ top-level const(Error6)
	pvec2 = pvec1;//˵�� top-level const ���� ת��Ϊ low-level const

	return 0;
}