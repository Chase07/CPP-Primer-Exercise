#include<iostream>
#include<string>
using namespace::std;

istream& F1(istream& input)
{
	string str;
	while (input >> str) { cout << str << endl; }
	input.clear();
	cout << input.rdstate() << endl;
	return input;
}

int main()
{
	F1(cin);
	return 0;
}