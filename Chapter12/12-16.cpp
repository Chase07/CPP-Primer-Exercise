#include<iostream>
#include<memory>
#include<string>

using namespace std;

int main()
{
	unique_ptr<string> p1(new string("Chase07~"));
	//Call to implicitly - deleted copy constructor of 'unique_ptr<string>'
	unique_ptr<string> p2(p1);
	unique_ptr<string> p3 = p1;


	return 0;
}