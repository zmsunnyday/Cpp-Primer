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
        int cnt = 1;
        while(read(cin, book2))
        {
            if(book1.isbn() == book2.isbn())
                ++cnt;
            else
            {
                cout << "book " << book1.isbn() << ":" << cnt << endl;
                book1 = book2;
                cnt = 1;
            }
        }
    }
    else
        cout << "no data!" << endl;
    return 0;
}
