#include "Bulk_quote.h"
#include "Quote.h"
#include <string>
#include <iostream>

using std::string;
using std::size_t;
using std::ostream;
using std::cout;

void printTotal(ostream&, const Quote&, const size_t bookNum);

int main()
{
    Quote book1("hello", 30);
    Bulk_quote book2("nihao", 10, 5, 0.8);
    printTotal(cout, book1, 10);
    cout << std::endl;
    printTotal(cout, book2, 10);
    return 0;
}

void printTotal(ostream& os, const Quote& book, const size_t bookNum)
{
    os << book.isbn() <<":" <<book.net_price(bookNum);
}
