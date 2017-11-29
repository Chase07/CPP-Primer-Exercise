#include<iostream>
#include<string>
using namespace::std;

int main()
{
	int str;
	while (cin >> str) 
	{
		cout << "rdstate" << "\t" << "eofbit" << "\t" << "failbit" << "\t" << "goodbit" << endl;
		cout << cin.rdstate() << "\t" << cin.eof() << "\t" << cin.fail() << "\t" << cin.good() << endl;
	}
	cout << "rdstate" << "\t" << "eofbit" << "\t" << "failbit" << "\t" << "goodbit" << endl;
	cout << cin.rdstate() << "\t" << cin.eof() << "\t" << cin.fail() << "\t" << cin.good() << endl;

	cout << (cin.rdstate() & ~cin.failbit & ~cin.badbit) << endl;
	cin.clear(0);
	cout << "After executing cin.clear():" << endl;
	cout << "rdstate" << "\t" << "eofbit" << "\t" << "failbit" << "\t" << "goodbit" << endl;
	cout << cin.rdstate() << "\t" << cin.eof() << "\t" << cin.fail() << "\t" << cin.good() << endl;
	cout << cin.rdstate() << ~cin.failbit << ~cin.badbit << endl;
	return 0;
}