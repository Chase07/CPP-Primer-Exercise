#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<numeric>

using namespace::std;

int main()
{
	
	istream_iterator<int> in_iter(cin);
	istream_iterator<int> eof;//Ĭ�ϳ�ʼ�����������������������Ե���β�������ʹ��
	vector<int> vec(in_iter, eof);//more useful from
	/*while (in_iter != eof)
		vec.push_back(*in_iter++);*/
	//cout << accumulate(in_iter, eof, 0) << endl;
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;

	
	return 0;
}