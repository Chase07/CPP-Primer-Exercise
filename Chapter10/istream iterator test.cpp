#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<numeric>

using namespace::std;

int main()
{
	
	istream_iterator<int> in_iter(cin);
	istream_iterator<int> eof;//默认初始化定义输入流迭代器，可以当做尾后迭代器使用
	vector<int> vec(in_iter, eof);//more useful from
	/*while (in_iter != eof)
		vec.push_back(*in_iter++);*/
	//cout << accumulate(in_iter, eof, 0) << endl;
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;

	
	return 0;
}