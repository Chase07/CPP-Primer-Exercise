#include<iostream>
#include<vector>
#include<iterator>

using namespace::std;

int main()
{
	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6 };
	auto begin = vec.begin();
	while (begin != vec.cend())
	{
		++begin;
		vec.insert(begin, 42);//��������ֵ����begin��ֵ��ԭbegin�����ָ����һ��Ұָ�루������ڲ�ԭ���в��˽⣩��
		++begin;
	}
	for (auto& i : vec)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
