#include<iostream>
#include<vector>
#include<string>

using namespace::std;

void F1(int i)
{
	cout << "Enter successful !" << endl;

}

int main()
{
	vector<string> vec{ "I", "heat", "you", "!" };
	F1(vec.begin() - vec.end());//�������ú�����F11֮������vec�ĳ�Ա����begin�ڲ�
	return 0;
}