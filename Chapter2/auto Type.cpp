#include<iostream>

int main()
{
	auto n1;//a variable uses auto type must have an initializer ( ERROR )
	auto n2 = 1 + 1.2;
	printf( "%d\n" , n2 );
	n2 = 6;
	printf( "%f\n" , n2 );//now n1 is a double type

	int i = 0, &r = i;
	auto a = r;//r just an alias for i, so a is an int
	const int ci = i, &cr = ci;
	auto b1 = ci;//here, b1 just is an int
	auto c = cr;//same as previous line
	const auto b2 = ci;//now,b2 is a const int ( must say explicitly )
	auto d = &i;//d is an int*
	auto e = &ci;//e is a const int*( & of a const object is Low-level const )
	
	auto &g = ci;// g is a const int& that bounud to ci
	auto &h1 = 42;//two lines are same ERROR
	int &h2 = 42;//
	const auto &j1 = 42;//two lines are same meaning
	const int &j2 = 42;//
	auto &n = i, *p1 = &ci;
	const auto *p2 = &ci;
	return 0;
}