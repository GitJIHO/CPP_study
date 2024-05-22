#include <iostream>
using namespace std;

//컴파일방법: gcc Person.h Person.cpp Person_main.cpp로 나눠서 함

//Person.h
#ifndef PERSON_H
#define CIRCLE_H
class Person{
    string name;
    int age;
    public:
    Person();
    Person(string name, int age);
    ~Person();
    string getName();
    int getAge();
};
#endif
