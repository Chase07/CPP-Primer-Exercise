#include"7-27.h"
#include<iostream>

using namespace::std;
int main()
{
	Screen my;
	Screen myscreen(5, 5, 'X');
	myscreen.move(4,0 ).set('#').display(cout);
	cout << endl;
	myscreen.display(cout);
	cout << endl;
	return 0;
}
