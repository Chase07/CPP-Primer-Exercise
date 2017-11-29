#include<iostream>
#include<string>
using namespace::std;
/*
*	通过const_cast，将string类的对象转为const string，使其可以调用重载函数Shorter_String；
*	返回const string之后，再通过const_cast转为string，这样就通过重载和const_cast的配合使用
*	完成了对普通string使用const string函数进行操作的过程 :-)
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