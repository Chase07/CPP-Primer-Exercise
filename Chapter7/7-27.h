#ifndef Class_Screen
#define Class_Screen
#include<string>
#include<iostream>
#include<vector>
class Screen
{
	friend std::istream& read(std::istream& input, Screen& item);
	
public:
	using pos = std::string::size_type;
	Screen() = default;
	Screen(const pos& ht, const pos& wh) :height(ht), width(wh), contents(ht * wh, ' ') {}
	Screen(const pos& ht, const pos& wh, const char& c) :height(ht), width(wh), contents(ht * wh, c) {}
	Screen(std::istream& input) { read(input, *this); }
	//得到当前光标位置的内容
	char get() const { return contents[cursor]; }
    //得到指定光标位置的内容
	char get(pos ht, pos wd) const
	{
		return contents[ht * width + wd];
	}
	Screen move(pos ht, pos wd);
	Screen set(char c);
	Screen set(pos ht, pos wd, char c);
	Screen display(std::ostream& output)
	{
		do_display(output);
		return *this;
	}
	const Screen display(std::ostream& output) const//const成员函数里也必须调用const函数
	{
		do_display(output);
		return *this;
	}
private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	std::string contents;
	void do_display(std::ostream& output) const
	{
		output << contents;
	}
};
inline std::istream& read(std::istream& input, Screen& item)
{
	input >> item.cursor >> item.height >> item.width >> item.contents;
	return input;
}

inline Screen Screen::move(pos ht, pos wd)
{
	cursor = ht * width + wd;
	return *this;
}

inline Screen Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen Screen::set(pos ht, pos wd, char c)
{
	contents[ht * width + wd] = c;
	return *this;
}
#endif
