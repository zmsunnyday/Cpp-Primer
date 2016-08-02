#include "exc12_2.h"

StrBlob::StrBlob():data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il):
                data(make_shared<vector<string>>(il)){}
void StrBlob::pop_back(){
    data -> pop_back();
}
string& StrBlob::front()
{
    return *(vector.begin());
}

string& StrBlob::back()
{
    return *(vector.end());
}

