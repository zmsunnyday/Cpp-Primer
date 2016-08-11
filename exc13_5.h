#ifndef EXC13_5_H
#define EXC13_5_H
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class HasPtr{
public:
    HasPtr(const HasPtr &hp):ps(new string(*(hp.ps))), i(0){}
    HasPtr(const string& s = string()) :
            ps(new string(s)), i(0){}
    HasPtr& operator=(const HasPtr &hp){
        *ps = *(hp.ps);
        i = hp.i;
        return *this;
    }
    void print();
    ~HasPtr(){cout << "byebye" << endl;}
private:
    string *ps;
    int i;
};

void HasPtr::print(){
    cout << *ps << endl;
}
#endif // EXC13_5_H
