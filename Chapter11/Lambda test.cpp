#include<iostream>
#include<string>

using namespace::std;

int main()
{

	bool bl = [](const string s1, const string s2)->bool 
	{ 
		return s1.size() < s2.size(); 
	}("Hello", "beybey");
	cout << bl << endl;
	return 0;
}