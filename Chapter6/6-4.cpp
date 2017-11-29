#include<iostream>

using namespace::std;

void factorial_and_interacts()
{
	int a; //不用unsigned，是因为其无法检测用户是否输入负数
	cout << "Please input a postive number:";
	while (cin >> a && a < 0)
		cout << "Please input a postive number:";
	unsigned long long result = 1;//结果使用unsigned类型是为了方便后面的if判断
	while(a > 1)
		result *= a--;//result的结果一旦超过类型的范围，发生转置，result变为0。
	if (result)//利用unsigned类型非负的特性，进行判断
		cout << endl << "The result" << a << " is " << result << endl;
	else
		cout << endl<< "The result is too big !" << endl;

}


int main()
{
	factorial_and_interacts();

	return 0;
}