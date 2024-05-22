#include <iostream>
using namespace std;

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
    if(size == capacity){
        cout<<"데이터 "<<val<<"는 추가할 수 없습니다. 배열이 가득 찼습니다.";
        return;
    }
    arr[size] = val;
    size++;
}


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