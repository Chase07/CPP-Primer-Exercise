#include<stdio.h>
#include"Sales_item.h"

int main( void )
{
	Sales_item curitem, total ;
	if( std::cin >> total )
	{
		for( ;std::cin >> curitem ; )
		{
			total += curitem ;
			std::cout << total <<std::endl ;
		}
	}
	else
	{
		std::cout << " No Data! " << std::endl ;
		return -1 ;
	}

	return 0 ;
}