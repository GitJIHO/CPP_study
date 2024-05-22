#include <memory> 
#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
public:
    weak_ptr<Person> twins; //twins변수는 shared_ptr이기 때문에 Person객체는 다 가르킬수 있다.
    Person(string n, int a) : name(n), age(a) { };
    ~Person() {
    cout << name << "메모리 해제" << endl;
    }
    void disPlay() { cout << "name = " << name << ", age = " << age; } 
};

void show(shared_ptr<Person> sp){
    sp->disPlay();
    cout << ", show().sp.use_count() = " << sp.use_count() << endl;
}

int main() {
    auto tw1 = make_shared<Person>("daniel", 20);
    auto tw2 = make_shared<Person>("benny", 20);
    show(tw1);
    show(tw2);
    cout << endl;
    cout << "main : tw1.use_count() = " << tw1.use_count() << endl; 
    cout << "main : tw2.use_count() = " << tw2.use_count() << endl; 
    cout << endl;
    tw1->twins = tw2;
    tw2->twins = tw1;    
}