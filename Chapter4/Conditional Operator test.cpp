#include<iostream>

using namespace ::std;

int main()
{
	int grade;
	cin >> grade;
	cout << ((grade < 60) ? "fail" : "pass") << endl;
	cout << (grade < 60) ? "fail" : "pass" ;//��grade < 60 �Ľ�����
	cout << grade < 60 ? "fail" : "pass";//Error�� ��grade������ٱȽ�cout��60
	return 0;
}