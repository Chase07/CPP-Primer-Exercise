#include<stdio.h>
#include"Sales_item.h"

int main( void )
{
	Sales_item item1, item2 ;

	if( std::cin >> item1 )
	{
		int sum = 1 ;
		for( ; std::cin >> item2 ; )
		{	
			if( item1.isbn() == item2.isbn() )
			{
				++sum ;
			}
			else
			{
				std::cout << item1.isbn() << " occur " << sum << " times " << std::endl ;
				item1 = item2 ;
				sum = 1 ;
			}
		}
		std::cout << item2.isbn() << " occur " << sum << " times " << std::endl ;  
	}
	else
	{
		std::cout << " No Data!" << std::endl ;
		return -1 ;
	}
	return 0 ;
}