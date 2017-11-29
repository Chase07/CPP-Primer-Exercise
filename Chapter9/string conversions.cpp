#include<iostream>
#include<string>
#include<iterator>

using namespace::std;

int main()
{
	string str1 = to_string(678), str2 = to_string(67.89101);
	cout << str1 << " " << str2 << endl;

	int i = stoi(str1);
	double d = stof("67.89295");
	cout << i << " " << d << endl;


	cout << stoi("0010", nullptr, 2) << endl;
	cout << stoi("678", nullptr) << endl;//默认当作10进制转换
	cout << stoi("678", nullptr, 8) << endl;

	string str3("19960511, my birthday");
	size_t pos;
	auto answer = stoi(str3, &pos, 10);
	cout << answer << str3[pos] << str3.substr(pos) << endl;
	// 下面的语句是未定义行为，因为一条语句的计算顺序是未定义的，所以不清楚pos的值什么时候得出 
	//cout << stoi(str3, &pos, 10) << str3[pos] << str3.substr(pos) << endl;
	string str4("0x7a");
	cout << stoi(str4, nullptr, 0) << endl;
	//cout << stoi("O78", nullptr, 0) << endl;
	return 0;
}