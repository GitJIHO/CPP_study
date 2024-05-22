#include <iostream>
using namespace std;

template <typename T, int capacity = 10>
class Stack{
T* ptr;
int size;
public:
    Stack();
    ~Stack();
    void push(const T &element);
};

template<>
class Stack<double>{
    int men;
    public:
    Stack(int value):men(value){}
};

template <typename T, int capacity>
Stack<T,capacity>::Stack(){
    ptr = new T[capacity];
    size = 0;
}

template <typename T, int capacity>
Stack<T,capacity>::~Stack(){
    delete[] ptr;
}

template <typename T, int capacity>
void Stack<T,capacity>::push(const T& element){
    if(size<capacity){
        ptr[size] = element;
        cout<<ptr[size]<<endl;
        size++;
    } else {
        cout<<"Stack full."<<endl;
        return;
    }
}

int main() {
    Stack<int, 15> s1;
    s1.push(1);
    s1.push(2);
    
    Stack<char> c1;
    c1.push('a');



}
