#include<fstream>
#include<iostream>

using namespace::std;

int main()
{

	//ofstream out1("file1.txt");//���к��ļ�����Ϊ��
	//ofstream out2("file1.txt", ofstream::out);//���к��ļ�����Ϊ�գ���ʽ����outģʽ��
	//ofstream out3("file1.txt", ofstream::out | ofstream::trunc);//���к��ļ�����ҲΪ�գ���ʽ����outģʽ�򿪣���ʽ�ؽض�

	//ofstream app1("file2.txt", ofstream::app);//���ݵ��Ա�������ʽ����outģʽ��
	ofstream app2("file2.txt", ofstream::out | ofstream::app);//���ݵ��Ա�������ʽ����outģʽ��
	
	return 0;
}