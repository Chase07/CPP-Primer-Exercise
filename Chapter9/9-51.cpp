#include<iostream>
#include"9-51.h"

using namespace::std;

int main()
{
	dateRecord d1("12/03/1996"), d2("April 3, 1996"), d3("Ap 3, 1996");
	d1.showDate(cout) << endl;
	d2.showDate(cout) << endl;
	d3.showDate(cout) << endl;
	return 0;
}
