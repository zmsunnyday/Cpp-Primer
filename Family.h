#ifndef FAMILY_H
#define FAMILY_H
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <sstream>

using std::string;
using std::map;
using std::vector;
using std::istream;
using std::endl;
using std::istringstream;
using std::ostream;

class Family{
public:
    typedef map<string, vector<string>>::size_type size_type;
    Family(){};
    Family(istream &is);
    void insert(const string &il);
    size_type size()const{return data.size();}
    void print(ostream &os) const;

private:
    map<string, vector<string>> data;
};

#endif // FAMILY_H
