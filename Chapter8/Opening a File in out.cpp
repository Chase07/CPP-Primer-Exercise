#include<fstream>
#include<iostream>

using namespace::std;

int main()
{

	//ofstream out1("file1.txt");//运行后文件内容为空
	//ofstream out2("file1.txt", ofstream::out);//运行后文件内容为空，显式地以out模式打开
	//ofstream out3("file1.txt", ofstream::out | ofstream::trunc);//运行后文件内容也为空，显式地以out模式打开，显式地截断

	//ofstream app1("file2.txt", ofstream::app);//内容得以保留，隐式地以out模式打开
	ofstream app2("file2.txt", ofstream::out | ofstream::app);//内容得以保留，显式地以out模式打开
	
	return 0;
}