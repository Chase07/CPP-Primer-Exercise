#include<iostream>
#include<vector>
#include<algorithm>

using namespace::std;

int main()
{
	vector<int> vec{0, -4, -3, 7, -8};
	transform(vec.begin(), vec.end(), vec.begin(), [](int i)->unsigned {return i > 0 ? i : i; });//Lambda 也支持返回类型的隐式类型转换（与函数的情况一样）
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;

	return 0;
}