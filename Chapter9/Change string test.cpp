#include<iostream>
#include<string>

using namespace::std;

int main()
{
	char* str = "Don't move!";
	string str1("Go forward!");//一共11个字符
	string str2("Why not go back?");//一共16个字符(0~15)

	str1.insert(0, str2);
	cout << str1 << endl;
	str1.insert(0, str2, 0, 16);//same as the statement str1.insert(0, str2, 0, str2.size());
	cout << str1 << endl;
	str1.erase(16, 16);//从16开始,删除16个字符
	cout << str1 << endl;
	str1.assign(str, 5);
	cout << str1 << endl;
	str1.append(" move!");
	cout << str1 << endl;
	str1.replace(6, 1, "impr");//在"Don't move!"中的'm'擦除,再替换为"impro"
	cout << str1 << endl;

	return 0;
}