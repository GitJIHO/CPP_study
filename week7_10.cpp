#include <iostream>
#include <memory>

class Person{
std::string name;
int age;
public:
    std::shared_ptr<Person> per;
    Person()=default;
    Person(std::string n, int a) : name(n), age(a){};
    ~Person(){
        std::cout<<"메모리 해제";
    };
    void disPlay(std::string n){
        std::cout<<n<<") name = "<<name<<", age = "<<age<<std::endl;
    }
    void changeName(std::string n){
        this->name = n;
    }
};

int main() {
    auto p1 = std::make_shared<Person>("Benny", 17);
    p1->disPlay("p1");
    std::cout<<"main() : p1.use_count() : "<<p1.use_count()<<std::endl;

    std::shared_ptr<Person> p2 = p1;
    p2->changeName("daniel");

    p1->disPlay("p1");
    p2->disPlay("p2");
    std::cout<<"main() : p1.use_count() : "<< p1.use_count() << std::endl;

}