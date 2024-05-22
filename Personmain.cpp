#include <iostream>
using namespace std;
#include "Person.h"

int main() {
    Person baby;
    Person child("benny", 10);
    cout<<"baby name = "<<baby.getName()<<endl;
    cout<<"child name = "<<child.getName()<<endl;
}