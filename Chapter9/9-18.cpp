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
	de.pop_back();//�׵����һ��
	de.pop_front();//�׵���һ��
	for(auto iter = de.cbegin(); iter != de.cend(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;
	return 0;
}