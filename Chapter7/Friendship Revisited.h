#ifndef _F_R
#define _F_R
#include<string>
#include<vector>
#include<iterator>

class Screen;//先声明Screen类
class Window_mgr
{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	std::vector<Screen> screens;//问题出在这里，编译没有问题，run的话就会出现Screen类没有构造函数的提示
};
class Screen
{
	//friend Window_mgr;//让类成为友元
	friend void Window_mgr::clear(ScreenIndex i);//让类中一个特定的函数成为友元
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