#include <iostream>
using namespace std;
#include "Array.h"

int main() {
    int count;
    cout<<"array size? ";
    cin >> count;

    Array array1(count);

    for(int i=0; i<count; i++){
        array1.insert(i+10);
    }
    array1.print();
    array1.insert(34);
    cout<<endl;
    return 0;
}