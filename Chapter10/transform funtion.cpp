#include<iostream>
#include<vector>
#include<algorithm>

using namespace::std;

int main()
{
	vector<int> vec{0, -4, -3, 7, -8};
	transform(vec.begin(), vec.end(), vec.begin(), [](int i)->unsigned {return i > 0 ? i : i; });//Lambda Ҳ֧�ַ������͵���ʽ����ת�����뺯�������һ����
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;

	return 0;
}