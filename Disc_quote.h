#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H
#include <string>
#include "Quote.h"

using std::string;
using std::size_t;

class Disc_quote : public Quote{
public:
    Disc_quote() = default;
    Disc_quote(const string& s, const double p, const size_t bookNum, const double dis) :
                Quote(s, p), quantity(bookNum), discount(dis){}
    virtual ~Disc_quote(){}
    double net_price(const size_t bookNum) const override = 0;

protected:
    size_t quantity = 0;
    double discount = 0.0;
};

#endif // DISC_QUOTE_H
