#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <string>
#include <vector>
#include "Screen.h"

using std::string;
using std::vector;

class window_mgr{
public:
    typedef vector<Screen>::size_type screenIndex;
    void clear(screenIndex);
private:
    vector<Screen> screens{Screen(24, 80, ' ')};
};

void window_mgr::clear(screenIndex i)
{
    screens[i].contents = {screens[i].height, screens[i].width, ' '};
}


