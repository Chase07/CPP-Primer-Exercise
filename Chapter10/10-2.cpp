#include<iostream>
#include<string>
#include<algorithm>
#include<list>

using namespace::std;

int main()
{
	list<string> lis{ "Pratice ", "makes ", "perfect." };
	auto co1 = count(lis.cbegin(), lis.cend(), "make");
	auto co2 = count(lis.cbegin(), lis.cend(), "makes ");
	cout << co1 << " " << co2 << endl;
	return 0;
}