#include<iostream>
using namespace::std;

class A;
class B
{
public:
	void b(A* a);
};
class A
{
	friend void B::b(A* a);
public:
	int getA()
	{
		return a;
	}
private:
	int a;
};
void B::b(A* a)
{
	a->a = 10;
}
int main()
{
	A a;
	B b;
	b.b(&a);
	cout << a.getA() << endl;
}