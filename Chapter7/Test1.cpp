#include<iostream>
#include<string>
int main()
{
	//是可以定义一个没有名字的实体
	std::string i = std::string(6,'7');
	std::string ii(std::string(6, 'c'));
	std::cout << i << std::endl;
	std::cout << ii << std::endl;
	return 0;
}