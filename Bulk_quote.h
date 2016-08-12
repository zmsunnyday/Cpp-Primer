#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#include "Quote.h"
#include <string>

using std::string;

class Bulk_quote : public Quote{
public:
    Bulk_quote() = default;
    Bulk_quote(const string& s, const double p, const std::size_t minNum, const double dis);
    double net_price(const std::size_t bookNum) const override;
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};
#endif // BULK_QUOTE_H
