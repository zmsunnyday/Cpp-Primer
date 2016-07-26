#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data book1;
    if(read(cin, book1))
    {
        Sales_data book2;
        while(read(cin, book2))
        {
            if(book1.isbn() == book2.isbn())
            {
                book1.combine(book2);
            }
            else
            {
                print(cout, book1);
                cout << endl;
                book1 = book2;
            }
        }
    }
    else
        cout << "no data!" << endl;
    return 0;
}
