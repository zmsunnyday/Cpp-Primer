#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data book1(cin);
    if(!book1.isbn().empty())
        while(1)
        {
            Sales_data book2(cin);
            if(book2.isbn().empty())
            {
                print(cout, book1);
                break;
            }
            else
            {
                if(book1.isbn() == book2.isbn())
                {
                    book1.combine(book2);
                }
                else
                {
                    print(cout, book1);
                    book1 = book2;
                }
            }
        }
    else
    {
        cout << "no data!" << endl;
    }
    return 0;
}
