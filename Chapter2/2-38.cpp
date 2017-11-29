#include<iostream>

int main()
{
	auto a1 = 1;
	decltype(1) a2 = 1;// same, 1 is a literals of int, so a2 is a type of int 

	int b;
	auto b1 = b;
	decltype(b) b2 = b;//same, b is an variable of int, so b2 is a type of int 
	auto b3 = b + 0;
	decltype(b + 0) b4 = b;//same, "b +0" is an expression which yeild a literals of int, so b4 is a type of int 

	int c, &d = c;
	auto c1 = d;//c1 is a variable of int, here d just an alias of c ;
	decltype(d) c2 = d;//Here, Difference,  in decltype(), d is refer to c, but not treated as a alias/synonym for the object to which it refers
	decltype(d + 0) c3 = d;//Now, same, "d + 0" is an expression which treats d just an alias of c and yeilds a literals of int, so c3 is a variable of int

	int e, *f = e;
	auto e1 = f;//e1 is a variable of int*
	auto e2 = *f;//e2 is a variable of int, both are obviously !
	decltype(f) e3 = f;//same of e1, e3 is a variable of int 
	decltype(*f) e4 = e;//Difference of e2, " *f " is an expression which yeilds a L-value( int ), so e4 is a variable of int
	decltype((*f) + 666) e5 = e;//" (*f) + 666 " is an expression which yeilds a literals of int, so e5 is a variable of int
	decltype(f + 666) e6 = f;//" f + 666 " is an expression which also yeilds a pointer, so e6 is a variable of int* 

	const int g = 666;
	auto g1 = g;//g1 is a variable of int,( Top-Level const in g is dropped )
	const int g2 = g;
	decltype(g) g3 = g;//Difference of g1, decltype() return the variable including Top-Level const
	return 0;
}