#include<iostream>

using namespace ::std;

int main()
{
	int grade;
	cin >> grade;
	cout << ((grade < 60) ? "fail" : "pass") << endl;
	cout << (grade < 60) ? "fail" : "pass" ;//将grade < 60 的结果输出
	cout << grade < 60 ? "fail" : "pass";//Error， 将grade输出，再比较cout和60
	return 0;
}