#include <iostream>
#include <algorithm>
#include "Sales_data.h"
//#include "compareIsbn.h"



using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;

bool compareIsbn(const Sales_data& book1, const Sales_data& book2)
{
    bool result = book1.isbn() > book2.isbn();
    cout << result << " " << book1.isbn() << book2.isbn() << endl;
    return result;
}

//void mySort(vector<Sales_data> &bookLib)
//{
//    sort(bookLib.begin(), bookLib.end(), compareIsbn);
//}

int main()
{
    Sales_data b1("a"), b2("bb"), b3("zzz"), b4("hh"), b5("ddd");
    vector<Sales_data> myBook = {b1, b2, b3, b4, b5};
    sort(myBook.begin(), myBook.end(), compareIsbn);
    for(auto &c : myBook)
        cout << c << endl;
    return 0;
}

