#include <iostream>
using namespace std;
#include "Pizza.h"

class PizzaManager {
     int count;
        string s;
        Pizza *p;
public:
    PizzaManager() {
        cout<<"피자 몇 판? ";
        cin>>count;
        p = new Pizza[count];

        cout<<"피자 크기는(small, medium, large)? ";
        cin>>s;
        for(int i=0; i<count; i++){
        p[i].setSize(s);
        }
    }
    void print() {
        for(int i=0; i<count; i++){
            cout<<i<<") "<<p[i].getSize()<<" Pizza yummy"<<endl;
        }
        cout<<endl;
    }
    ~PizzaManager() {
        delete[] p;
    }
};