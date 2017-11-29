#ifndef _F_D_S
#define _F_D_S

struct X
{
	friend void f() {}
	X() { f(); }
	void g();
	void h();
};

void X::g() { return f(); }
void f();
void X::h() { return f(); }
#endif