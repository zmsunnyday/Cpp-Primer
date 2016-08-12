#include "Bulk_quote.h"
#include <string>

using std::string;
using std::size_t;

Bulk_quote::Bulk_quote(const string& s, const double p, const size_t minNum, const double dis):
                    Quote(s, p), min_qty(minNum), discount(dis){}

double Bulk_quote::net_price(const size_t bookNum) const
{
    return bookNum >= min_qty? (bookNum * price * discount) : (bookNum * price);
}
