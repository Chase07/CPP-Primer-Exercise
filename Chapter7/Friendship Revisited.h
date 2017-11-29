#ifndef _F_R
#define _F_R
#include<string>
#include<vector>
#include<iterator>

class Screen;//������Screen��
class Window_mgr
{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	std::vector<Screen> screens;//��������������û�����⣬run�Ļ��ͻ����Screen��û�й��캯������ʾ
};
class Screen
{
	//friend Window_mgr;//�����Ϊ��Ԫ
	friend void Window_mgr::clear(ScreenIndex i);//������һ���ض��ĺ�����Ϊ��Ԫ
public:
	using pos = std::string::size_type;
	Screen() = default;
	Screen(const pos& ht, const pos& wh) :height(ht), width(wh), contents(ht * wh, ' ') {}
	Screen(const pos& ht, const pos& wh, const char& c) :height(ht), width(wh), contents(ht * wh, c) {}

private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	std::string contents;
};
inline void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, '@');
}
#endif