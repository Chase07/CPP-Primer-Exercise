#include<vector>
#include<iostream>

class NoDefault
{
public:
	NoDefault(int i) {}
};
class C
{
public:
	C() :a(0) {}
private:
	NoDefault a;
};
int main()
{
	std::vector<NoDefault> vec1(10);//illegal, it's lack of default constructor
	std::vector<C> vec2(10);//legal, we have defined a default construtor
	return 0;
}//?Dev-C++ 