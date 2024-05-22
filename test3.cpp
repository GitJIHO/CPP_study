#include <iostream>
#include <vector>
using namespace std;
class Person
{
    char *name;
    int id;

public:
    Person(int id, const char *name) {
        cout<<"생성자 실행"<<endl;
        int len = strlen(name);
        this->name = new char[len+1];
        this->id = id;
    }
    Person(const Person &p){
        int len = strlen(name); //name의 문자 개수
        this->name = new char[len + 1]; //name 문자열 공간 할당
        strcpy(this->name, name); //name에 문자열 복사
        this->id = id;
        cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
    } 
    Person(Person &&p) noexcept;      // 이동 생성자
    ~Person(){
        delete[] name;
    }                       // 구현 생략
    void show() { cout << id << ',' << name << endl; }
};
Person::Person(Person &&p) noexcept
{
    cout << " 이동 생성자 실행 " << endl;
        id = p.id;
    name = p.name;
    p.name = nullptr;
    p.id = 0;
}
void disPlay(Person &&per)
{
    per.show();
}
int main()
{
    vector<Person> vp;
    cout << "=1==========" << endl;
    vp.push_back(Person(1, "python")); // 이동
    cout << "=2==========" << endl;
    vp.push_back(Person(2, "java")); // 이동
    cout << "=3==========" << endl;
    vp.emplace_back(3, "c");
    cout << "=4==========" << endl;
    vp.emplace_back(4, "c++");
    // vector<Person*> vp; //이동 생성자 없으면 포인터 사용
    // vp.push_back(new Person(3, “c”))
    for (auto &tmp : vp)
        tmp.show();
    cout << "=5==========" << endl;
    // rvalue참조를 매개변수로 갖는 함수 호출
    disPlay(Person(5, "web"));
    return 0;
}