#ifndef _N_R_F
#define _N_R_F
#include<string>
int height;
class Screen
{
public:
	using pos = std::string::size_type;
	void setHeight(pos);
	pos height = 0;//����Screen���������������ⲿ��height

};
Screen::pos verify(Screen::pos);
void Screen::setHeight(pos var)
{
	height = verify(var);
}
#endif
