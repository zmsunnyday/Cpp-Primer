#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::istream;
using std::ostream;

struct Person
{
public:
    Person() = default;
    Person(const string &sName, const string &sAddr) : name(sName), addr(sAddr) {}
    string getName() const;
    string getAddr() const;
private:
    string name;
    string addr;
};
#endif // PERSON_H

