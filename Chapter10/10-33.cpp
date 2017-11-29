#include<iostream>
#include<fstream>
#include<algorithm>
#include<iterator>

using namespace::std;

int main()
{
	ifstream r_data("10-33-integer.txt");
	ofstream w_data1, w_data2;

	istream_iterator<int> in(r_data), eof;
	ostream_iterator<int> out1(w_data1," "), out2(w_data2, "\n");
	//��ס���㷨�����ڵ���������ģ������㷨������������������д����

	w_data1.open("10-33-odd.txt");
	w_data2.open("10-33-even.txt");
	for_each(in, eof, [&out1, &out2](const int& i) { *(i % 2 == 0 ? out1 : out2)++ = i; });//��ֻ�ܱ����ã����ܱ�����
	w_data1.close();
	w_data2.close();
	return 0;
}