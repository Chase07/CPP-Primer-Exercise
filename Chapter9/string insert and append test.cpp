#include<iostream>
#include<string>
#include<iterator>

using namespace::std;

int main()
{
	string str0("Suck!");
	string str("You're deserve it!!");
	/*auto s1 = str.insert(0, "Suck!");
	cout << s1 << endl;
	cout << str << endl;*/
	auto s2 = str.insert(str.begin(), str0.begin(), str0.end());
	cout << *s2 << endl;
	cout << str << endl;
	return 0;
}