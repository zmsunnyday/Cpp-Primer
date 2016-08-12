#ifndef QUOTE_H
#define QUOTE_H

#include <string>
#include <iostream>

using std::ostream;
using std::string;

class Quote{
public:
    Quote() = default;
    Quote(const string &s, const double p): bookNo(s), price(p){}
    string isbn() const {return bookNo;}
    virtual double net_price(const std::size_t n) const
                    {return n * price;}
    virtual ~Quote() = default;
    virtual void debug(ostream& os) const
    {
        os << bookNo << " " << price;
    }
private:
    string bookNo;
protected:
    double price = 0.0;
};

#endif // QUOTE_H
