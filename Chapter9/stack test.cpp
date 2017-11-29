#include<iostream>
#include<stack>

using namespace::std;

int main()
{
	stack<int> intstack;
	for (size_t ix = 0; ix != 10; ++ix)
	{
		intstack.push(ix);
	}
	while (!intstack.empty())
	{
		cout << intstack.top() << " ";
		intstack.pop();
	}
	cout << endl;
	if (intstack.empty()) cout << "Stack is empty!" << endl;
	else cout << "Stack is not empty!" << endl;
	return 0;
}