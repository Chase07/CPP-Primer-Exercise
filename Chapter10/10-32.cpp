#include"7-21.h"
#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<string>
#include<fstream>
#include<numeric>
using namespace::std;

int main()
{
	ifstream input("10-32.txt");
	//һ��ʼ����ָ��ʲô����type�Ķ����������
	//�ڵ�֪Sales_data��Ҫ���ز�����֮������������ͨ��
	istream_iterator<Sales_data> in(input), eof;
	ostream_iterator<Sales_data> op(cout);
	
	Sales_data total(*in++);
	vector<Sales_data> vec{ total };
	while (in != eof)
	{
		vec.push_back(*in);
		if (total.isbn() == in->isbn())
		{
			total.combine(*in++);
		}
		else
		{
			print(cout, total) << endl;
			total = *in++;
		}
	}
	print(cout, total) << endl;
	//ͳһ��00X����ʽ���뽻�׵��ţ�XΪ�����ַ������Կ�����string��� < ������
	sort(vec.begin(), vec.end(), [](const Sales_data& s1, const Sales_data& s2)->bool {return s1.isbn() < s2.isbn(); });
	//��ͬ����֮�䰴��������
	sort(vec.begin(), vec.end(), [](const Sales_data& s1, const Sales_data& s2)->bool {if (s1.isbn() == s2.isbn()) { return s1 < s2; } else { return false; } });
	for (auto& i : vec)
		cout << i << endl;
	cout << endl;

	for (auto beg = vec.cbegin(), end = beg; end != vec.cend(); beg = end)
	{
		end = find_if(beg, vec.cend(), [beg](const Sales_data& s)-> bool { return beg->isbn() != s.isbn(); });
		cout << accumulate(beg, end, Sales_data(beg->isbn())) << endl;//��Sales_dataʹ��accumulate��Ҫ��operator'+'��������
	}
	
	return 0;
}