#include "Sales_data.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data book1("nihao", 2, 10);
    Sales_data book2("hello", 3, 11);
    cout << book1 << endl << book2 << endl;
    book2 = book1;
    cout << book2 << endl;
    book2 += book1;
    cout << book2 << endl;
    Sales_data book3(book1);
    book3 = book1 + book2;
    cout << book3 << endl;
    return 0;
}
