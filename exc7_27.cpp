#include <iostream>
#include "Screen.h"

using std::cout;

int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    myScreen.display(cout);
    return 0;
}
