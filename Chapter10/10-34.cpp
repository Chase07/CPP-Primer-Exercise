#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace::std;

int main()
{
	vector<int> vec{ 1, 3, 5, 7 };
	//ͬʱ�������������������
	ostream_iterator<int> o_iter(cout, " ");
	ostream_iterator<char> o_iter0(cout);
	for_each(vec.crbegin(), vec.crend(), [&o_iter](const int& i) {*o_iter++ = i; });
	
	*o_iter0++ = '\n';//�س������ɹ����������β����˵�����������з����ƶ�
	return 0;
}