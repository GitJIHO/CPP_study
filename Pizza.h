#include <iostream>
using namespace std;

#ifndef PIZZA_H
#define PIZZA_H

class Pizza{
    string *size;
public:
    Pizza();
    ~Pizza();
    void setSize(string s);
    string getSize();
};
#endif