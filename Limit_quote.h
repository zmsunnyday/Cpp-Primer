#ifndef LIMIT_QUOTE_H
#define LIMIT_QUOTE_H

#include "Quote.h"
#include <string>

using std::string;
using std::size_t;

class Limit_quote : public Quote{
public:
    Limit_quote() = default;
    Limit_quote(const string&, const double p, const size_t max_num, const double disc);
    double net_price(const size_t bookNum) const override;
    ~Limit_quote() = default;
private:
    size_t maxNum = 0;
    double discount = 0.0;
};

#endif // LIMIT_QUOTE_H
