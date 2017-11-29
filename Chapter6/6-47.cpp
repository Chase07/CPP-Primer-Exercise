#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using namespace::std;
using Iter = vector<string>::iterator;

#define NDEBUG
void recursive_print(vector<string>& v)
{
#ifdef NDEBUG//如果定义了NDEBUG，则执行
	cout << "The vector size is :" << v.size() << endl;
#endif
	if (!v.empty())
	{
		auto temp = v.back();
		v.pop_back();
		recursive_print(v);
		cout << temp << " ";
	}
}

int main()
{
	vector<string> v{ "I", "Love", "C++", "Programming", "!" };
	recursive_print(v);
	cout << endl;
	return 0;
}