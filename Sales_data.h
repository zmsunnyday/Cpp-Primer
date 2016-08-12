#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::istream;


struct Sales_data
{
public:
    friend ostream& operator<<(ostream &, const Sales_data&);
    friend istream& operator>>(istream &, Sales_data&);
    friend Sales_data operator+(const Sales_data&, const Sales_data&);
    Sales_data();
    Sales_data(const string &s, unsigned n, double p);
    Sales_data(std::istream &);
    Sales_data(const string &s);
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    Sales_data& operator+=(const Sales_data&);
    Sales_data& operator=(const Sales_data&);
private:
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);
};

ostream &operator<<(ostream &, const Sales_data&);
istream& operator>>(istream &, Sales_data&);

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

inline double Sales_data::avg_price() const
{
    return revenue / units_sold;
}

Sales_data operator+(const Sales_data&, const Sales_data&);


#endif // SALES_DATA_H

