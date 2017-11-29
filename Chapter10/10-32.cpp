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
	//一开始纠结指明什么样的type的对象给迭代器
	//在得知Sales_data需要重载操作符之后，这个问题就想通了
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
	//统一以00X的形式输入交易单号，X为整数字符，所以可以用string类的 < 操作符
	sort(vec.begin(), vec.end(), [](const Sales_data& s1, const Sales_data& s2)->bool {return s1.isbn() < s2.isbn(); });
	//相同单号之间按利润排序
	sort(vec.begin(), vec.end(), [](const Sales_data& s1, const Sales_data& s2)->bool {if (s1.isbn() == s2.isbn()) { return s1 < s2; } else { return false; } });
	for (auto& i : vec)
		cout << i << endl;
	cout << endl;

	for (auto beg = vec.cbegin(), end = beg; end != vec.cend(); beg = end)
	{
		end = find_if(beg, vec.cend(), [beg](const Sales_data& s)-> bool { return beg->isbn() != s.isbn(); });
		cout << accumulate(beg, end, Sales_data(beg->isbn())) << endl;//对Sales_data使用accumulate需要对operator'+'进行重载
	}
	
	return 0;
}