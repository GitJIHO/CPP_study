#include <iostream>
using namespace std;

#include "Person.h"

//Person.cpp
Person::Person(): Person{"Anonymous", 0} {}
// Person::Person(string d, int n):name(d),age(n){
//     cout<<"생성자 수행"<<name<<","<<age<<endl; 
// }
Person::Person(string d, int n){
    name = d;
    age = n;
    cout<<"생성자 수행"<<name<<","<<age<<endl; 
}
Person::~Person() {
    cout<<"소멸자 수행"<<name<<endl;
}
string Person::getName() {return name;}
int Person::getAge() {return age;}