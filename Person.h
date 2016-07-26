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
    string name;
    string addr;
    string getName() const;
    string getAddr() const;
};
#endif // PERSON_H


