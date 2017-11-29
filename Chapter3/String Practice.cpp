#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main( void )
{
	/* A
	string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;
	*/
	/* B
	string word;
	while ( cin >> word )
	{
		cout << word << endl;
	}
	*/
	/* C
	string line;
	for (; getline(cin, line); )//If the first character is newline, the line will be a empty string
	{							//It means newline is not stored in the string
		if( ! line.empty() )
		{
			cout << line << endl;
		}
		if ( line.size() > 10 )
		{
			cout << line << endl;
		}
	}*/
	string line("I Love You!");

	auto len = line.size();
	return 0;
}