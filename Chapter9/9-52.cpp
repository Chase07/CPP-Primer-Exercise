#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace::std;

void calculate(string& exp)
{
	const char value = ' ';
	unsigned seen = 0;
	stack<char, string> expStk;
	for (auto& i : exp)
	{
		expStk.push(i);
		if (i == '(') { ++seen; }
		if (seen == 1 && i == ')')
		{
			while(expStk.top() != '(')
			{
				expStk.pop();
			}
			expStk.pop();
			expStk.push(value);
			seen = 0;
		}
	}
	exp = "";
	for ( ; !expStk.empty(); expStk.pop())
	{
		exp.insert(exp.cbegin(), expStk.top());
	}
}

int main()
{
	string exp("Let us go(some)to(goooooooooooogle)studio!");
	calculate(exp);
	cout << exp << endl;
	return 0;
}