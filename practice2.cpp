#include <iostream>
using namespace std;

void find2replace(string& str, string& has, string& replace, bool& result){
    int i=0;
    while((i=str.find(has))!=-1){
        str.replace(i,replace.size(),replace);
        result = true;
    }
}

int main() {
std::string str = "C++ programming"; 
std::string has = "+";
string replace = "p";
bool result = false;
cout << "변경 전 문자열 = " << str << endl;
find2replace(str, has, replace, result);
if (result == true)
cout << "변경 후 문자열 = " << str << endl;
else
cout << str << "에서 " << has << "를 발견하지 못함." << endl;
return 0; }

//범위 지정 연산자 :: 기억!!!!!
//접근 지정자가 private일 때는 동일한 클래스의 멤버 함수에서만 값을 접근 가능하고 main에서 public 접근지정자인 생성자의 객체를 만든다고 하더라도 객체.멤버변수 로 접근 안됨

//main문에서 객체 생성 시 주의사항
//Circle donut; 가능(디폴트생성)
//Circle donut(); 불가능(함수 원형과 충돌)
//Circle donut{}; 가능(디폴트생성)

//생성자 initializer 사용시 나열한 데이터 멤버는 initializer에 나열한 순서가 아닌 클래스 정의에 작성한 순서대로 초기화됨
//Point::Point() : x(0), y(0) {} 이지만(디폴트 생성자)
//Point::Point(int a, int b) : x{a}, y{b} {}로 해야됨(매개변수가 있는 생성자)

//fruitseller.cpp 참조
//소멸자의 소멸 순서는 지역객체 생성 역순 후 전역객체 생성 역순

//상수형 함수는 함수 원형 뒤에 const붙임
//class 선언부에서 int getr() const;로 선언 구현부에서 int CLASS::getr() const{return ~~;}형태로 해야됨

//const형을 일반으로 바꾸는법
//void f(const int& data){
//    int &newdata = const_cast<int &>(data); }

//클래스 선언부에 구현된 멤버 함수는 자동 인라인 함수이다.
// ex) Circle() { radius=1; } (원래 구현부에서는 Circle::Circle() : radius{1}{} 이였음)

//구조체는 디폴트가 public이다

//구현부의 함수에서 다른 클래스의 객체를 생성할 수 있다.
// ex) void Cal::run() { a = 3; b = 2; Adder add(a,b); add.progress(); }

//객체 배열은 반드시 매개변수가 없는 디폴트 생성자만 생성 가능하다

//vector나 arrary를 활용해서 배열을 만들면 만들어진 이름이 배열의 첫번째 주소가 아님(이름.data()가 주소가 됨) char이나 string으로 만들어주면 맞음
//따라서 vector나 array로 만들어진 배열을 포인터값으로 저장하려면 int *p = arr.data(); 해줘야함

//일차원 객체 배열을 초기화할 때 Circle circleArray[3] = {Circle(10), Circle(20), Circle()}; 이런식으로 해주면 디폴트와 매개변수있는 생성자를 동시에 초기화 가능
//array<Circle 3>cricleArray {Circle(10), Circle(20), Circle()} 이런식으로도 가능
//Circle::Circle(~~,~~,~~):~~{~~},~~{~~},~~{~~}{}와 헷갈리지 않게 주의


//delete는 일반 소멸자와는 달리 생성한 순서와 관계없이 원하는 순서대로 delete가 가능하다

//객체 메모리를 동적을 할당할 때 Color *p = new Color{}; 처럼 생성자옆 괄호가 일반적으로 () 이 괄호가 아닌 {} 이 괄호를 쓴다(매개변수가 있던 디폴트던 동일)

//배열 형태로 동적 생성 가능 Color *p = new Color [5]; (but, delete[]와 포인터를 Nullptr로 만들어주는걸 잊지 말아야됨)
//배열로 동적생성한 포인터는 delete[] 로 반환해야됨
//int *parr = new int[4]{3,4,5,6}; 도 가능 

//동적 배열은 범위기반 for 사용 불가능 

//동적 배열의 값을 보기 위해서는 p포인터의 동적배열이 있을 때 반복문으로(범위기반 x) p[i]으로 보거나 p[i].(값 리턴 함수) 또는 p->(값 리턴함수)로 봐야됨
//동적 배열에 값을 넣으려면 p[i] = 값; 또는 p[i].(함수 클래스의 지역변수를 리턴하는 함수) 또는 p->(함수 클래스의 지역변수를 리턴하는 함수)로 넣어야 됨 

//Color *p[3];만 하고 p[i]= new Color(~~,~~);를 하면 위에랑 다름 / 위(p가 Color라는 생성자의 객체배열) 지금(p가 객체 포인터 배열)
//즉, p[0], p[1], p[2] 각각 다른 객체의 주소임 그러나 위에는 p[0], p[1], p[3] , ... 는 각각 다른 객체 안의 데이터임
//따라서 delete도 delete[] p 가 아니라 detele[] p[i] 해줘야됨

//shared_ptr은 참조 카운트 수를 use_count()로 나타내고 이 use_count()수가 0이면 자동으로 메모리를 해제함
//weak_ptr은 shared_ptr이 가리키는 객체를 참조 할 수 있지만, 참조 카운트수를 늘리지 않는다

//스마트포인터로 객체를 선언하고 호출할 때 일반적인 방법인 sp1.함수()로 하는게 아니라 함수 안에 