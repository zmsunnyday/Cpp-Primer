#ifndef QUOTE_H
#define QUOTE_H

#include <string>

using std::string;

class Quote{
public:
    Quote() = default;
    Quote(const string &s, double p): bookNo(s), price(p){}
    string isbn() const {return bookNo;}
    virtual double net_price(std::size_t n) const
                    {return n * price;}
    virtual ~Quote() = default;
private:
    string bookNo;
protected:
    double price = 0.0;
};

#endif // QUOTE_H
