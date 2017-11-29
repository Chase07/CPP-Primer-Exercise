#ifndef _7_43_44_45_H
#define _7_43_44_45_H
#include<vector>
class NoDefault
{
public:
	NoDefault(int i) {}
};
class C
{
public:
	NoDefault a;
	C() = default;
};
std::vector<NoDefault> vec1(10);//illegal
std::vector<C> vec2(10);//legal
#endif
