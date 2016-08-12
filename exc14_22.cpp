#include "Sales_data.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Sales_data book1("haha", 1, 10);
    book1 = "hello world";
    cout << book1 << endl;
    return 0;
}
