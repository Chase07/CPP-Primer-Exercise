#ifndef _7_53_H
#define _7_53_H

class Debug
{
public:
	constexpr Debug(bool t = true) :b1(t), b2(t) {}
	constexpr Debug(bool t = true, bool f = false) : b1(t), b2(f) {}
	constexpr bool tof() { return b1 || b2; }
private:
	bool b1;
	bool b2;
};
#endif
