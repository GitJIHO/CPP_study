#include <iostream>
using namespace std;

class Pizza{
    string *size;
public:
    Pizza();
    ~Pizza();
    void setSize(string s);
    string getSize();
};

class PizzaManager {
     int count;
        string s;
        Pizza *p;
public:
    PizzaManager() {
        cout<<"피자 몇 판? "<<endl;
        cin>>count;
        p = new Pizza[count];

        cout<<"피자 크기는(small, medium, large)? "<<endl;
        cin>>s;
        for(int i=0; i<count; i++){
        p[i].setSize(s);
        }
        cout<<endl;
        for(int i=0; i<count; i++){
            cout<<i<<") "<<p[i].getSize()<<"yummy"<<endl;
        }
        cout<<endl;
    }
    void print() {
        for(int i=0; i<count; i++){
            cout<<i<<") "<<p[i].getSize()<<"yummy"<<endl;
        }
        cout<<endl;
    }
    ~PizzaManager() {
        delete[] p;
    }
};

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

int main() {
    PizzaManager pm;
    pm.print();
    return 0;
}