#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string ch;
	for (; getline(cin, ch);)
	{
		for (auto i : ch)
		{
			if (! ispunct(i))
			{
				cout << i;
			}
		}
	}
	cout << endl;
	return 0;
}