#include <iostream>
using namespace std;
#include "Array.h"

Array::Array(int count) : capacity(count) {
    arr = new int[capacity];
    size = 0;
}
Array::~Array() {
    delete [] arr;
}
void Array::print() const{
    cout<<"arr = ";
    for(int i=0; i<size; i++){
        cout<<"  "<<arr[i];
    }
}
void Array::insert(int val) {
    if(size >= capacity){
        cout<<"\n데이터 "<<val<<"는 추가할 수 없습니다. 배열이 가득 찼습니다.";
        return;
    }
    arr[size] = val;
    size++;
}