#include <string>
#include <iostream>
#include "Person.h"

ostream& print(ostream &os, const Person &p)
{
    os << p.getName() << p.getAddr() << endl;
    return os;
}

istream &read(istream &is, Person &p)
{
    is >> p.name >> p.addr;
    return is;
}

string Person::getName() const
{
    return name;
}

string Person::getAddr() const
{
    return addr;
}
