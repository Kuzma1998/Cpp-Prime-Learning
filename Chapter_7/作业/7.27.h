/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-09 19:22:59
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-09 19:24:07
 */
#ifndef CP5_ex7_27_h
#define CP5_ex7_27_h

#include <string>
#include <iostream>

class Screen
{
public:
	using pos = std::string::size_type;

	Screen() = default; // 1
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht*wd, ' ') {} // 2
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {} // 3

	char get() const { return contents[cursor]; }
	char get(pos r, pos c) const { return contents[r*width + c]; }
    Screen& move(pos r, pos c);
    Screen& set(char c);
    Screen& set(pos r, pos c, char ch);

	const Screen& display(std::ostream &os) const { do_display(os); return *this; }
	Screen& display(std::ostream &os) { do_display(os); return *this; }

private:
	void do_display(std::ostream &os) const { os << contents; }

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

inline Screen& Screen::move(pos r, pos c)
{
	cursor = r*width + c;
	return *this;
}

inline Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen& Screen::set(pos r, pos c, char ch)
{
	contents[r*width + c] = ch;
	return *this;
}

#endif