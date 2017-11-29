#include<iostream>
#include<string>

using namespace::std;

int main()
{
	string str1, str2;
	string str;
	do 
	{
		cout << "Plase input two strings: ";
		cin >> str1 >> str2;
		cout << (str1 <= str2 ? str1 : str2) << endl;
		cout << "More? Enter yes or no: " << endl;
		cin >> str;
	} while ( !str.empty() && str[0] == 'y' );




	return 0;
}