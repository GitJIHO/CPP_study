#include <memory>
#include <iostream>
using namespace std;

class Person{
    string name;
    int age;
public:
    Person(){}
    Person(string s,int age):name{s}, age{age}{}
    ~Person() {cout<<"메모리 해제";}
    void disPlay(string s){
        cout<<s<<") name: "<<name<<"age: "<<age<<endl;
    }
    void changeName(string s){
        this->name = s;
    }
};

int main()
{
    auto p1 = std::make_shared<Person>("benny", 17);
    p1->disPlay("p1");
    std::cout << "main() : p1.use_count() : " << p1.use_count() << std::endl;
    std::shared_ptr<Person> p2 = p1;
    p2->changeName("daniel");
    p1->disPlay("p1");
    p2->disPlay("p2");
    std::cout << "main() : p1.use_count() : " << p1.use_count() << std::endl;
}
