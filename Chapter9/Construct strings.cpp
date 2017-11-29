#include<iostream>
#include<string>

using namespace::std;

int main()
{
	const char* cp = "Hello World!!!";
	char noNull1[] = { 'H', 'i' };
	char noNull2[] = { 'H', 'i', 0 };
	string s1(cp);//"Hello World!!!"
	string s2(noNull1, 2);//noNull is a pointer; "Hi";
	//string s3(noNull1);//undefined
	string s4(noNull2);//"Hi"
	string s5(cp+6, 5);//cp+6 is point to 'w'.
	string s6(s1, 0, 5);//"Hello"
	string s7(s1, 6);//"World!!!"
	string s8(s1, 6, 100);//"World!!!"
	//string s9(s1, 16);//throws an out_of_range exception

	cout << s1 << " " << s2 << " " << s4 << " " << s5 << " " << s6 << " " << s7 << " " << s8 << " " <<  endl;

	return 0;
}
