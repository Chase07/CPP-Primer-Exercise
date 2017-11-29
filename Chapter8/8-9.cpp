#include<iostream>
#include<sstream>
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
	istringstream istr("Naruto!!!!!!!");
	F1(istr);
	return 0;
}