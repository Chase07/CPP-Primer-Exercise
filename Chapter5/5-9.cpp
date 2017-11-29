#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using namespace::std;

int main()
{
	string text;
	int a, e, i, o, u;
	a = e = i = o = u = 0;
	while (cin >> text)
	{
		for (auto it : text)
		{
			if (it == 'a')
			{
				++a;
			}
			else if (it == 'e')
			{
				++e;
			}
			else if (it == 'i')
			{
				++i;
			}
			else if (it == 'o')
			{
				++o;
			}
			else if (it == 'u')
			{
				++u;
			}
		}
	}
	cout << "Number of vowel a: \t" << a << '\n' << "Number of vowel e: \t"
		<< e << '\n' << "Number of vowel i: \t" << i << '\n'
		<< "Number of vowel o: \t" << o << '\n' << "Number of vowel u: \t"
		<< u << endl;
	return 0;
}