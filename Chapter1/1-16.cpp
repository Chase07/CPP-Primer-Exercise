#include<iostream>

int main()
{
	int sum = 0, value = 0 ;
	for ( ;std::cin >> value; )
	{
		sum += value ;
	}
	std::cout << sum << std::endl; 
	return 0 ;
}