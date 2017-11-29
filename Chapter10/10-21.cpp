#include<iostream>
#include<algorithm>

using namespace::std;

int main()
{
	int it;
	cin >> it;
	auto f1 = [it](int& ii)mutable->bool { if (it != 0) { while (ii != 0) { --ii; }return false; } return true; };//f1是一个函数对象
	auto flag = f1(it);//调用对象
	
	cout << it << " " << flag << endl;
	return 0;
}