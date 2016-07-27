#include "Sales_data.h"

int main()
{
    Sales_data book1;
    print(cout, book1);
    Sales_data book2("nihao");
    print(cout, book2);
    Sales_data book3("nihaoma", 3, 12.5);
    print(cout, book3);
    Sales_data book4(cin);
    print(cout, book4);
    return 0;
}
