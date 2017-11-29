#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15"
		<< " separated by spaces.  Hit ENTER when finisded: "
		<< endl;

	string result;
	string::size_type n;
	for ( ; cin >> n ; )
	{
		if (n < hexdigits.size())
		{
			result += hexdigits[ n ];
		}
	}
	cout << "Your hex number is: " << result << endl;
}