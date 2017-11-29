#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
	string line;
	string word;
	cout << " Writing a line, now! " << endl;
	getline(cin, line);
	cout << line << endl;
	cout << " Only a word, write now! " << endl;
	cin >> word;
	cout << word << endl;

	return 0;
}