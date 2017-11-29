#include<iostream>
#include<algorithm>

using namespace::std;

int main()
{
	size_t v1 = 42;
	//auto f1 = [v1]() {return ++v1; };//Error:¥À ±captured value can't be change 
	auto f2 = [v1]() mutable { return ++v1; };
	v1 = 0;
	cout << v1 << " " << f2();

	return 0;
}