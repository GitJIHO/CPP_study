#include <memory> 
#include <iostream>
using namespace std;

class Person {
    string name;
    int age; 
public:
    Person(string n, int a) : name(n), age(a) { };
    ~Person() { cout << "메모리 해제" << endl; };
    void disPlay() { cout<<"name = "<<name <<", age = "<<age <<endl; }
    weak_ptr<Person> per;
    };

void show(shared_ptr<Person> sp) {
    sp->disPlay();
    cout<<"show().sp.use_count() : "<<sp.use_count() <<endl;
}
int main() {
    auto sp1 = make_shared<Person>("unique", 17); 
    show(sp1);
    cout<<"sp1.use_count() : "<<sp1.use_count() <<endl;
    sp1->per = sp1;
    // shared_ptr<Person> sp2 = sp1->per.lock();
    // show(sp2);
    show(sp1->per.lock());
    cout<<"sp1.use_count() : "<<sp1.use_count() <<endl;
}