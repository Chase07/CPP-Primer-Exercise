#include<iostream>
#include<forward_list>
#include<iterator>
#include<string>

using namespace::std;

void replace(forward_list<string>& li, const string& str1, const string& str2)
{
	auto pre = li.before_begin(), cur = li.begin();
	for ( ; cur != li.end(); pre = cur++)
	{
		if (str1 == *cur)
		{
			li.insert_after(cur, str2);
			//break;
			return;//ʹ��return���Ա�֤Ψһ������ѭ������
		}
	}
	li.insert_after(pre, str2);//ѭ����ʹ��return�Ϳ�����ȥ�ж�ֱ��ִ�и����
	/*if (cur == li.cend())
	{
		li.insert_after(pre, str2);
	}*/
}

int main()
{
	forward_list<string> li{ "I ", "really ", "love ", "you!" };
	//replace(li, "really ", "really ");
	replace(li, "?", " you know?");
	for (auto& i : li)
	{
		cout << i;
	}
	cout << endl;
	return 0;
}