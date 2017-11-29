#include"12-2-19-22.h"
#include<iostream>
#include<fstream>
using namespace::std;

int main()
{
	ifstream inFile("12-20.txt");// 创建一个输入流
	StrBlob sb;
	// 从流中循环读入一个单词（string）
	for (string str; inFile >> str; ) { sb.push_back(str); }
	
	for (StrBlobPtr beg(sb.begin()), end(sb.end()); beg != end ; ++beg )
	{
		cout << beg.deref() << endl;
	}

	return 0;
}