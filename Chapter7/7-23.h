#ifndef Class_Screen
#define Class_Screen
#include<string>

class Screen
{
	friend std::istream& read(std::istream& input, Screen& item);
public:
	using pos = std::string::size_type;
	Screen() = default;
	Screen(pos& ht, pos& wh) :height(ht), width(wh), contents(ht * wh, ' ') {}
	Screen(pos& cr, pos& ht, pos& wh, char& c) :cursor(cr), height(ht), width(wh), contents(ht * wh, c) {}
	Screen(std::istream& input) { read(input, *this); }
	char get() const { return contents[cursor]; }
	/*it is legal to specify inline on declaration or define, or both do.(Form C++ Primer Page-355) */
	inline char get(pos ht, pos wd) const;
	Screen& move(pos r, pos c);
	Screen& set(char);
	Screen& set(pos, pos, char);
private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	std::string contents;
};
std::istream& read(std::istream& input, Screen& item)
{
	input >> item.cursor >> item.height >> item.width >> item.contents;
	return input;
}
char Screen::get(pos ht, pos wd) const
{
	pos row = ht * width;
	return contents[row + wd];
}
Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}
inline Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
inline Screen& Screen::set(pos r, pos col, char ch)
{
	contents[r * width + col] = ch;
	return *this;
}
#endif