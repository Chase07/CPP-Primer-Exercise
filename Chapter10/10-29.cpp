#include<iostream>
#include<fstream>
#include<vector>
#include<iterator>
#include<string>
#include<algorithm>

using  namespace::std;

int main()
{
	ifstream input("10-29.txt");
	istream_iterator<string> in_iter(input), eof;
	ostream_iterator<string> out_iter(cout, " ");
	//copy(in_iter, eof, out_iter);//copy�㷨ͨ����������ֱ�Ӱ��ı�������˱�׼�����
	vector<string> vec(in_iter, eof);
	copy(vec.cbegin(), vec.cend(), out_iter);*/
	cout << endl;
	return 0;
}