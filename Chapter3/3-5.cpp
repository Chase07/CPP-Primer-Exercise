#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str, tempstr;
	/*A
	cout << "Please writing serveal words or sentences as you like~" << endl;
	while ( getline( cin, tempstr) )
	{
		str += tempstr;
		
	}*/
	cout << "Please writing and separating serveal words or sentences by a space on one line~" << endl;
	while ( cin >> tempstr )
	{
		if ( str.empty() )
		{
			str += tempstr;//The first time input 
		}
		else
		{
			str += " " + tempstr;
		}
	}
	cout << str << endl;
	return 0;
}