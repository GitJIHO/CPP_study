#include <iostream>
using namespace std;

class Person
{
    string name;

public:
    Person() : name{""} { cout << "default 생성자 실행" << endl; };
    Person(string n) : name{n} { cout << "생성자 실행" << endl; };
    Person(const Person &person); // 복사 생성자
    Person(Person &&p);           // 이동 생성자
    ~Person() { cout << "소멸자 실행" << endl; };
    void show(string obj) { cout << obj << " name = " << name << endl; }
};

Person::Person(const Person &person){
    cout<<"복사생성자 실행"<<endl;
    name = person.name;
}
Person::Person(Person &&p){
    cout<<"이동생성자 실행"<<endl;
    name = p.name;
    p.name.clear();
}

int main()
{
    cout << "-1----------" << endl;
    Person dan("daniel");
    Person ben = Person("benny");
    cout << "-2----------" << endl;
    Person mvdan = move(dan);

    cout << "-3----------" << endl;
    Person cpben = ben;
    Person cpmvdan(mvdan);
    cout << "-4----------" << endl;
    dan.show("dan");
    ben.show("ben");
    mvdan.show("mvdan");
    cpben.show("cpben");
    cpmvdan.show("cpmvdan");
    return 0;
}