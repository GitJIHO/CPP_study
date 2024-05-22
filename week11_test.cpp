#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
public:
    Power(int a, int b):kick{a}, punch{b}{}
    void operator+=(const Power &b) {
        this->kick += b.kick;
        this->punch += b.punch;
    }
    void print() {
        cout<<this->kick<<endl;
        cout<<this->punch<<endl;
    }
    ~Power(){}
};

int main() {
    Power *a = new Power(3,5);
    Power *b = new Power(2,4);

    *a+=*b;
    a->print();

    delete a;
    delete b;
}