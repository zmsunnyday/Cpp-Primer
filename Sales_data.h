#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data
{
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

#endif // SALES_DATA_H

