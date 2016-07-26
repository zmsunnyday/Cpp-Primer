#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data& book2)
{
    units_sold += book2.units_sold;
    revenue += book2.revenue;
    return *this;
}

double Sales_data::avg_price() const
{
    return revenue / units_sold;
}

std::istream &read(std::istream &is, Sales_data &book)
{
    double price = 0;
    is >> book.bookNo >> book.units_sold >> price;
    book.revenue = book.units_sold * price;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &book)
{
    os << book.isbn() << " " << book.units_sold << " "
       << book.revenue << " " << book.avg_price();
    return os;
}

Sales_data add(const Sales_data &book1, const Sales_data &book2)
{
    Sales_data result = book1;
    result.combine(book2);
    return result;
}


