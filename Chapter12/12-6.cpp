#include<iostream>
#include<vector>
#include<string>
#include<iterator>

using namespace::std;
using dataType = vector<string>;

dataType* askNew()
{
	dataType* p = new dataType();
	return p;
	
}
void readIn(dataType* p)
{
	for ( ; cin; )
	{
		string str;
		cin >> str;
		p->push_back(str);
	}
}
void outPut(dataType* p)
{
	for (const auto& q : *p)
	{
		cout << q << " ";
	}
	cout << endl;
	
}
int main()
{
	dataType* p = askNew();
	readIn(p);
	outPut(p);
	delete p;
	return 0;

}