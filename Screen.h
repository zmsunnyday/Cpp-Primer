#ifndef SCREEN_H
#define SCREEN_H
#include <string>
#include <iostream>

using std::string;
using std::endl;
using std::cout;
using std::cin;

struct Screen{
public:
    friend void window_mgr::clear(screenIndex);
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char a) : height(ht), width(wd),
    contents(ht * wd, a) {}
    Screen(pos ht, pos wd) : height(ht), width(wd),
    contents(ht * wd, ' ') {}
    char get() const
    {
        return contents[cursor];
    }
    char get(pos r, pos c) const
    {
        return contents[r * width + c];
    }
    Screen &move(pos r, pos c)
    {
        cursor = r * width + c;
        return *this;
    }
    Screen set(char a);
    Screen &set(pos r, pos c, char a);
    Screen &display(std::ostream &os);
    const Screen &display(std::ostream &os) const;
private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    string contents;
    void do_display(std::ostream &os) const
    {
        os << contents << endl;
    }
};

inline Screen Screen::set(char a)
{
    contents[cursor] = a;
    return *this;
}

inline Screen &Screen::set(pos r, pos c, char a)
{
    contents[r * width + c] = a;
}

inline Screen &Screen::display(std::ostream &os)
{
    do_display(os);
    return *this;
}

inline const Screen &Screen::display(std::ostream &os) const
{
    do_display(os);
    return *this;
}
#endif // SCREEN_H
