#include "person.h"
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

Person::Person(const string & ln, const char * fn) {
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const {
    cout << fname << " " << lname << endl;
}
void Person::FormalShow() const {
    cout << lname << ", " << fname << endl;
}
