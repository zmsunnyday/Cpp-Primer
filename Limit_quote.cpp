#include "Limit_quote.h"
#include <string>

using std::string;
using std::size_t;

Limit_quote::Limit_quote(const string& s, const double p, const size_t bookNum, const double dis)
                    : Quote(s, p), maxNum(bookNum), discount(dis){}

double Limit_quote::net_price(const size_t bookNum) const
{
    return bookNum > maxNum? ((bookNum - maxNum) * price + maxNum * price * discount)
                        : (bookNum * price * discount);
}
