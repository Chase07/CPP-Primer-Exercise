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
	//copy(in_iter, eof, out_iter);//copy算法通过迭代器，直接把文本输出到了标准输出流
	vector<string> vec(in_iter, eof);
	copy(vec.cbegin(), vec.cend(), out_iter);*/
	cout << endl;
	return 0;
}