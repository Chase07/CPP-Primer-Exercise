#include<iostream>
#include<string>
using namespace::std;
/*
*	ͨ��const_cast����string��Ķ���תΪconst string��ʹ����Ե������غ���Shorter_String��
*	����const string֮����ͨ��const_castתΪstring��������ͨ�����غ�const_cast�����ʹ��
*	����˶���ͨstringʹ��const string�������в����Ĺ��� :-)
*/
const string& Shorter_String( const string& str1, const string& str2 )
{
	return str1.size() <= str2.size() ? str1 : str2;
}
string& Shorter_String( string& str1, string& str2 )
{
	auto& str = Shorter_String(const_cast<const string&>(str1), const_cast<const string&>(str2));
	return const_cast<string&>(str);
}
int main()
{
	string str1 = "I Love You!", str2 = "You Love me?";
	string& Astr1 = str1, Astr2 = str2;
	string Fstr = Shorter_String(Astr1, Astr2);
	cout << Fstr << endl;
	return 0;
}