#include<iostream>
#include<list>
#include<forward_list>
#include<iterator>
using namespace::std;

int main()
{
	list<int> lis{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11 };
	forward_list<int> fli{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 13 };

	auto iter1 = lis.begin();
	while (iter1 != lis.cend())
	{
		if (*iter1 % 2 != 0)
		{
			iter1 = lis.insert(iter1, *iter1);
			/*++iter;
			++iter;*/
			advance(iter1, 2);//list�е��ǵ�������bidirectional iterator,��֧�������Լ����㣬��֧������������͸��ϸ�ֵ�������+��-��+=��-=������from www.cplusplus.com
		}
		else
		{
			iter1 = lis.erase(iter1);
		}
	}
	for (auto& i : lis)
		cout << i << " ";
	cout << endl;

	auto iter2 = fli.begin();
	auto pre_iter2 = fli.before_begin();
	while (iter2 != fli.cend())
	{
		if (*iter2 % 2 != 0)
		{
			iter2 = fli.insert_after(iter2, *iter2);//�𰸵���������������ǰ�����һ��duplicate
			pre_iter2 = iter2++;
		}
		else
		{
			iter2 = fli.erase_after(pre_iter2);
		}
	}
	for (auto& i : fli)
		cout << i << " ";
	cout << endl;
	return 0;
}