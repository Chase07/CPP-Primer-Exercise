#include<iostream>

int main()
{
	int i = 1;
	int Li = 20, Si = 18 , Bi = 17, Ji = 16 ;
	int *a = nullptr;
	a = &Li;
	std::cout << *a << std::endl;
	std::cout << *a << *( a = &Si ) << *( a = &Bi ) << *( a = &Ji ) << *( a = &Li ) << std::endl;
	std::cout << *a << std::endl;
	std::cout << i << ++i << ++i << ++i << ++i << std::endl;
	return 0;
}