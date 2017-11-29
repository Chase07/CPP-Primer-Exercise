#include<iostream>
#include<string>
#include<deque>
#include<iterator>

using namespace::std;

int main()
{
	string str;
	deque<string> de;
	while(cin >> str)
	{
		de.push_back(str);
	}
	de.pop_back();//抛掉最后一个
	de.pop_front();//抛掉第一个
	for(auto iter = de.cbegin(); iter != de.cend(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;
	return 0;
}