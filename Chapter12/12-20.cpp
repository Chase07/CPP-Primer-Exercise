#include"12-2-19-22.h"
#include<iostream>
#include<fstream>
using namespace::std;

int main()
{
	ifstream inFile("12-20.txt");// ����һ��������
	StrBlob sb;
	// ������ѭ������һ�����ʣ�string��
	for (string str; inFile >> str; ) { sb.push_back(str); }
	
	for (StrBlobPtr beg(sb.begin()), end(sb.end()); beg != end ; ++beg )
	{
		cout << beg.deref() << endl;
	}

	return 0;
}