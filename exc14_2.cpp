#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data book1("heihei", 2, 10.0);
    cout << book1 << endl;
    cin >> book1;
    cout << book1 << endl;
    return 0;

}
