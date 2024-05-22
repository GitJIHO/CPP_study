#include <iostream>
using namespace std;

template <typename T>
class Stack{
T* ptr;
int size;
int capacity;
public:
    Stack(int capacity);
    ~Stack();
    void push(const T& element);
};
template <typename T>
Stack<T>::Stack(int capacity){
    this->capacity = capacity;
    ptr = new T[capacity];
    size = 0;
}


template <typename T>
Stack<T>::~Stack() {
    delete[] ptr;
}

template <typename T>
void Stack<T>::push(const T& element){
    if(size < capacity){
        ptr[size] = element;
        cout<<ptr[size]<<endl;
        size++;
    } else {
        cout<<"Stack is full." <<endl;
        return;
    }
}

int main(){
    Stack<int> s(3);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
}