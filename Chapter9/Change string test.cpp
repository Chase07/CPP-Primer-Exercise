#include<iostream>
#include<string>

using namespace::std;

int main()
{
	char* str = "Don't move!";
	string str1("Go forward!");//һ��11���ַ�
	string str2("Why not go back?");//һ��16���ַ�(0~15)

	str1.insert(0, str2);
	cout << str1 << endl;
	str1.insert(0, str2, 0, 16);//same as the statement str1.insert(0, str2, 0, str2.size());
	cout << str1 << endl;
	str1.erase(16, 16);//��16��ʼ,ɾ��16���ַ�
	cout << str1 << endl;
	str1.assign(str, 5);
	cout << str1 << endl;
	str1.append(" move!");
	cout << str1 << endl;
	str1.replace(6, 1, "impr");//��"Don't move!"�е�'m'����,���滻Ϊ"impro"
	cout << str1 << endl;

	return 0;
}