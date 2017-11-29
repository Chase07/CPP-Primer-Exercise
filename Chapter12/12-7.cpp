#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<memory>

using namespace::std;
using dataType = vector<string>;

shared_ptr<dataType> askNew()
{
	initializer_list<string> il = { "6", "5" };
	return make_shared<dataType>(il);

}
void readIn(shared_ptr<dataType> p)
{
	for (; cin; )
	{
		string str;
		cin >> str;
		p->push_back(str);
	}
}
void outPut(shared_ptr<dataType> p)
{
	for (const auto& q : *p)//此处灰色的星号，说明操作符进行了重载
	{
		cout << q << " ";
	}
	cout << endl;
}
int main()
{
	//shared_ptr<dataType> p = askNew();
	auto p = askNew();
	readIn(p);
	outPut(p);

	return 0;
}