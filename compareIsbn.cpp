#include "Sales_data.h"
#include "compareIsbn.h"
#include <string>

bool compareIsbn(const Sales_data& book1, const Sales_data& book2)
{
    return book1.isbn() > book2.isbn();
}
