#include <iostream>
using namespace std;

#ifndef ARRAY_H
#define ARRAY_H


class Array {
    int capacity;
    int size;
    int *arr;

    public:
       Array()=default;
       Array(int count);
       ~Array();
       void print() const;
       void insert(int val);
};
#endif