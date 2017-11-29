#include<iostream>


constexpr int ad( void  )
{
		return 5;
}
int h = 2;
int j = 3;
int main()
{
	int n1;
	int *n2;
	int *const n3 = &n1;
	const int m1 = 666;
	const int *m2;
	m2 = &m1; // m2 is a pointer which not only can point to the object of const int 
	m2 = &n1;// but also can point to the object of int       
	n2 = &n1;
	n2 = &m1;//n2 can't point to the object of const int ( ERROR )

	const int *const p1 = &m1;// both p1 and p2 can point to the object of const int or int  
	const int *const p2 = &n1;// but p1 and p2 are const pointers   

	constexpr int q1 = m1;
	constexpr int q2 = n1;// constexpr int must need a constant expression ( ERROR )
	constexpr int q3 = ad();
	
	constexpr int *r1 = &n1;//also, constexpr pointer that point to int need a fixed address ! ( ERROR )
	constexpr int *r2 = &h;// h is defined outside any function, which have a fixed address !

	constexpr int const s1 = 1;//1 is a const expression
	constexpr int const s2 = m1;//m1 was intialized 666, so it is a constant expression
	constexpr int const s3 = n1;//s3 need a constant expression ( ERROR )

	return 0;
}