#include<iostream>
#include<string>

using namespace::std;

string (&fun(string(&str)[4])) [4]
{
	str[1] = "999";
	return str;
}

int main()
{
	string str[4] = {"66", "66", "66", "66"};//����ֻ���б��ʼ��
	for (auto i : fun(str))
	{
		cout << i << endl;
	}
	return 0;
}
