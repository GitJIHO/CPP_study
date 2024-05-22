#include <iostream>
using namespace std;

class Array
{
    double *ptr;
    int size;

public:
    Array(int size);
    ~Array();
    void show(string name);
    double& operator[](int index);
    Array& operator=(const Array& b);
};

Array::Array(int size){
    this->size = size;
    ptr = new double[size];
}
Array::~Array(){
    delete[] ptr;
}
void Array::show(string name){
    cout<<"arr = {"; for(int i=0; i<size; i++) cout<<ptr[i]<<" "; cout<<"}"<<endl;
}
double &Array::operator[](int index){
    if(index<0 || index>=size){
        cout<<"인덱스 범위 초과 오류"<<endl;
        exit(0);
    }
    return ptr[index];
}
Array &Array::operator=(const Array& b){
    if(this == &b) return *this;
    delete [] ptr;
    ptr = nullptr;

    this->size = b.size;
    for(int i=0; i<size; i++){
       ptr[i] = b.ptr[i];
    }
    return *this;
}
int main()
{
    int size;
    cout << "array size ? ";
    cin >> size;
    Array arr(size), brr(size);
    for (int i = 0; i < size; i++)
    {
        cout << i << ") input>> ";
        cin >> arr[i];
    }
    arr.show("arr");
    brr = arr;
    brr.show("brr");
    brr[2] = 34.5;
    brr[4] = 56.3;
    arr.show("arr");
    brr.show("brr");
    return 0;
}