#ifndef _7_31_H
#define _7_31_H

class X;
class Y;

class X
{
	Y* y = nullptr;
};
class Y
{
	X x;
};
#endif