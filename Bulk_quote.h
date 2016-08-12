#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#include "Disc_quote.h"
#include <string>

using std::string;

class Bulk_quote : public Disc_quote{
public:
    Bulk_quote() = default;
    Bulk_quote(const string& s, const double p, const std::size_t minNum, const double dis);
    double net_price(const std::size_t bookNum) const override;
};
#endif // BULK_QUOTE_H
