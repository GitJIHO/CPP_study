#include <iostream>
using namespace std;
#include "Pizza.h"

int main() {
    int count;
    string s;
    Pizza *p;

    cout<<"피자 몇 판? ";
    cin>>count;
    p = new Pizza[count];

    cout<<"피자 크기는(small, medium, large)? ";
    cin>>s;
    for(int i=0; i<count; i++){
        p[i].setSize(s);
    }
    cout<<endl;
    for(int i=0; i<count; i++){
        cout<<i<<") "<<p[i].getSize()<<" Pizza yummy"<<endl;
    }
    cout<<endl;
    delete[] p;
    return 0;
}