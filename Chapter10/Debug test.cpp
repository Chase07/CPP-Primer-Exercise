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
	F1(vec.begin() - vec.end());//这样调用函数，F11之后会进入vec的成员函数begin内部
	return 0;
}