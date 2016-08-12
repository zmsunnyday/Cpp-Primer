#include "Bulk_quote.h"
#include <string>

using std::string;
using std::size_t;

Bulk_quote::Bulk_quote(const string& s, const double p, const size_t minNum, const double dis):
                    Disc_quote(s, p, minNum, dis){}

double Bulk_quote::net_price(const size_t bookNum) const
{
    return bookNum >= quantity? (bookNum * price * discount) : (bookNum * price);
}
