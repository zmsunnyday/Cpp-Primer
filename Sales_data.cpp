#include "Sales_data.h"

Sales_data::Sales_data(const string &s, unsigned n, double p) :
                        bookNo(s), units_sold(n), revenue(p * n) {
}

Sales_data::Sales_data() : Sales_data("", 0, 0.0) {};

Sales_data::Sales_data(const string &s) : Sales_data(s, 0, 0.0) {
    cout << "Sales_data(const string &s)" << endl;
}


Sales_data::Sales_data(std::istream &is) : Sales_data("", 0, 0.0)
{
    read(is, *this);
    cout << "Sales_data(std::istream &is)" << endl;
}

Sales_data& Sales_data::combine(const Sales_data& book2)
{
    units_sold += book2.units_sold;
    revenue += book2.revenue;
    return *this;
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
       << book.revenue << " " << book.avg_price() << endl;
    return os;
}

Sales_data add(const Sales_data &book1, const Sales_data &book2)
{
    Sales_data result = book1;
    result.combine(book2);
    return result;
}
ostream& operator<<(ostream& os, const Sales_data& book)
{
    os << book.bookNo << " " << book.units_sold << " " << book.revenue;
    return os;
}

istream& operator>>(istream& is, Sales_data& book)
{
    double p;
    is >> book.bookNo >> book.units_sold >> p;
    book.revenue = book.units_sold * p;
    return is;
}

Sales_data operator+(const Sales_data& book1, const Sales_data& book2)
{
    Sales_data sum = book1;
    sum.units_sold += book2.units_sold;
    sum.revenue += book2.revenue;
    return sum;
}

Sales_data& Sales_data::operator+=(const Sales_data& book)
{
    units_sold += book.units_sold;
    revenue += book.revenue;
    return *this;
}
Sales_data& Sales_data::operator=(const Sales_data& book)
{
    units_sold = book.units_sold;
    revenue = book.revenue;
    return *this;
}

Sales_data& Sales_data::operator=(const string &s)
{
    bookNo = s;
    units_sold = 0;
    revenue = 0.0;
    return *this;
}

