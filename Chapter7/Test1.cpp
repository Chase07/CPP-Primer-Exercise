#include<iostream>
#include<string>
int main()
{
	//�ǿ��Զ���һ��û�����ֵ�ʵ��
	std::string i = std::string(6,'7');
	std::string ii(std::string(6, 'c'));
	std::cout << i << std::endl;
	std::cout << ii << std::endl;
	return 0;
}