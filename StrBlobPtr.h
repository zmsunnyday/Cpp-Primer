#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H
#include "exc12_2.h"
#include <vector>
#include <string>
#include <memory>
#include <stdexcept>

using std::string;
using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::weak_ptr;
using std::runtime_error;

class StrBlobPtr
{
public:
    typedef vector<string>::size_type size_type;
    StrBlobPtr() : curr(0){}
    StrBlobPtr(StrBlob &a, size_type sz = 0) : wptr(a.data), curr(sz){}
    string &deref() const;
    StrBlobPtr& incr();
private:
    shared_ptr<vector<string>> check(size_type, const string&) const;
    weak_ptr<vector<string>> wptr;
    size_type curr;
};

inline string &StrBlobPtr::deref() const
{
    auto a = check(curr, "deref out of range!");
    return (*a).[curr];
}

inline shared_ptr<vector<string>> StrBlobPtr::check(size_type i, const string &msg) const
{
    auto ret = wptr.lock();
    if(!ret)
        throw runtime_error("ubound StrBlobPtr!");
    if(i >= ret -> size())
        throw out_of_range("msg");
    return ret;
}

inline StrBlobPtr& StrBlobPtr::incr()
{
    check(curr, "incr out of range!");
    ++curr;
    return *this;
}

#endif


