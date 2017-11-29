#include<iostream>

using namespace::std;

void swap(int *p1, int *p2)
{
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;

}
int main()
{
	int a = 0, b = 1;
	swap(&a, &b);
	cout << "a = " << a << endl << "b = " << b << endl;

	return 0;
}