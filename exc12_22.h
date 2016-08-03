#ifndef EXC12_22_H
#define EXC12_22_H
#include <vector>
#include <string>
#include <memory>
#include <initializer_list>
#include <stdexcept>

using std::vector;
using std::string;
using std::shared_ptr;
using std::initializer_list;
using std::make_shared;
using std::weak_ptr;
using std::runtime_error;
using std::out_of_range;

class ConstStrBlobPtr;

class StrBlob{
public:
    typedef vector<string>::size_type size_type;
    friend class ConstStrBlobPtr;
    StrBlob():data(make_shared<vector<string>>()){}
    StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){}
    bool empty() const {return data -> empty();}
    size_type size() const {return data -> size();}
    void push_back(string &t) {data -> push_back(t);}
    void pop_back();
    string &front();
    string &back();
    const string &front() const;
    const string &back() const;
    ConstStrBlobPtr begin() const;
    ConstStrBlobPtr end() const;
private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
};

class ConstStrBlobPtr
{
public:
    typedef vector<string>::size_type size_type;
    ConstStrBlobPtr() : curr(0){}
    ConstStrBlobPtr(const StrBlob &a, size_type sz = 0) : wptr(a.data), curr(sz){}
    const string &deref() const;
    ConstStrBlobPtr& incr();
private:
    const shared_ptr<const vector<string>> check(size_type, const string&) const;
    weak_ptr<const vector<string>> wptr;
    size_type curr;
};

inline void StrBlob::pop_back()
{
    check(0, "pop_back on empty vector!");
    data -> pop_back();
}

inline string& StrBlob::front()
{
    check(0, "front on empty vector!");
    data -> front();
}

inline string& StrBlob::back()
{
    check(0, "back on empty vector!");
    data -> back();
}

inline const string& StrBlob::front() const
{
    check(0, "const front on empty vector!");
    data -> front();
}

inline const string& StrBlob::back() const
{
    check(0, "const back on empty vector!");
    data -> back();
}

inline void StrBlob::check(size_type i, const string &msg) const
{
    if(i >= data -> size())
        throw std::out_of_range(msg);
}

inline const string &ConstStrBlobPtr::deref() const
{
    auto a = check(curr, "deref out of range!");
    return (*a)[curr];
}

inline const shared_ptr<const vector<string>> ConstStrBlobPtr::check(size_type i, const string &msg) const
{
    auto ret = wptr.lock();
    if(!ret)
        throw runtime_error("ubound StrBlobPtr!");
    if(i >= ret -> size())
        throw out_of_range("msg");
    return ret;
}

inline ConstStrBlobPtr& ConstStrBlobPtr::incr()
{
    check(curr, "incr out of range!");
    ++curr;
    return *this;
}

inline ConstStrBlobPtr StrBlob::begin() const
{
    return ConstStrBlobPtr(*this);
}

inline ConstStrBlobPtr StrBlob::end() const
{
    return ConstStrBlobPtr(*this, data -> size());
}

#endif
