#ifndef _N_S
#define _N_S
#include<string>
int height;
class Screen
{
public:
	using pos = std::string::size_type;
	void dummy_fcn(pos height)
	{
		cursor = width * height;
		cursor = width * ::height;//ֱ��ʹ��scope operator��������height(int ����)
	}
	
private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
};
#endif