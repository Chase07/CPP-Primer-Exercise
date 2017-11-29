#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void)
{
	
	string s1, s2;
	/*A
	cout << "writing two words, ok?" << endl;
	cin >> s1 >> s2;
	if ( s1 == s2 )
	{
		cout << "They are equal~" << endl;
	}
	else if ( s1 > s2 )
	{
		cout << "s1 is large!" << endl;
	}
	else
	{
		cout << "s2 is large!" << endl;
	}*/
	cout << "writing two lines ,be quite!" << endl;
	getline( cin, s1 );
	getline( cin, s2 );
	if ( s1.size() == s2.size() )
	{
		cout << "They have same length~" << endl;
	}
	else if (s1.size() > s2.size())
	{
		cout << "s1 is larger!" << endl;
	}
	else
	{
		cout << "s2 is larger!" << endl;
	}
	return 0;
}