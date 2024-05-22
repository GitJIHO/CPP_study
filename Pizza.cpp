#include <iostream>
using namespace std;
#include "Pizza.h"

Pizza::Pizza() {
    size=nullptr;
}
Pizza::~Pizza() {
    delete size;
    cout<<"소멸자 I had it all."<<endl;
}
void Pizza::setSize(string s) {
    Pizza::size = new string(s);
}
string Pizza::getSize() {
    return *Pizza::size;
}