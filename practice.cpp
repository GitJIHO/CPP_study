#include <iostream>
#include <iomanip>
#include <typeinfo>
#include <initializer_list>
#include <iomanip>
using namespace std;

namespace AAA{
    namespace BBB{
        namespace CCC{}
    }
}
namespace ABC=AAA::BBB::CCC;
//범위지정연산자(::)는 지역변수가 아닌 전역변수의 접근에도 사용이 가능하다(그냥 ::만 쓰면 됨)

void method(const int* i){
    int *d = const_cast<int*>(i);
}
void add(initializer_list<int> value){
    int sum=0;
    for(int i:value){
        sum += i;
    }
    cout<<"합: "<<sum;
}
bool average(int a[], int size, int& ab) { //매개변수를 참조로 받으면 변수에 대한 참조를 받아 함수 내에서 수정한 값이 실제 값으로 전달되지만, 그냥 정수형으로 받으면 복사값이 전달되어 함수 내에서 값을 변경해도 실제 값에 영향을 주지 못함!!!!
    if (size <= 0)
        return false; //함수의 성공 여부를 bool type으로 반환 
    int sum = 0;
    for (int i = 0; i < size; i++) 
        sum += a[i];
    ab = sum / size;
    return true; //함수의 성공 여부를 bool type으로 반환 
    }
void write_avg(const int &avg) { //const 참조자 : 값 변경 금지 
    cout << "평균은 " << avg << endl; }
void write_error() {
    cout << "매개 변수 오류 " << endl; }

char& find(char s[], int index){
    return s[index];
}

int main() {
    bool flag;
    // cin>>boolalpha>>flag; //<<<<<<<<형태 기억!!!!!!!
    // cout<<boolalpha<<flag;


    enum Menu {insert=1, Delete, Update};
    enum Color {blue = 1, green, red, black}; //#include <iomanip> 사용해야함

    Menu choice = insert;
    Color color = blue;
    Menu choice2 = Menu::Delete;

    if(choice2 == 2){
        // cout<<"delete"<<endl;
    }
    if(static_cast<int>(color)==1){
        // cout<<"blue"<<endl;
    }

    //edum은 열거 타입 값이 자동으로 정수로 변환됨
    //edum class는 열거 타입 값을 사용할 때 반드시 범위지정연산사(::)를 사용해야 함

    //const_cast: 포인터 또는 참조형의 const속성 추가 또는 제거
    //static_cast: 언어에서 허용하는 명시적 형 변환, 컴파일시 타입 검사
    //dynamic_cast: 동일한 상속 계층에 속한 클래스 타입의 객체 포인터 or 객체 레퍼런스 사이의 변환, 실행 시간에 타입 검사
    //reinterpret_cast: 서로 관련 없는 타입의 포인터 또는 레퍼런스 사이의 변환, 함수 포인터 사이의 변환

    enum class color1{a = 1, b, c};
    color1 cl = color1::b;

    // cout<<static_cast<int>(cl);

    //auto는 함수 매개변수, 구조체나 클래스의 멤버 변수로는 사용 불가능!!!!
    
    //auto name = "range";
    auto value = 20;
    auto number{20};
    auto digit = {20};

    // cout<<"name(type) "<<typeid(name).name()<<endl;
    // cout<<"value(type) "<<typeid(value).name()<<endl;

    // vector<int> v;
    // for(int i=0; i<11; i++){
    //     v.push_back(i);
    // }
    // for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
    //     cout<<*iter<<" ";
    // for(int i : v)
    //     cout<<i<<" ";

    // add({1,3,2,4,5,2});
    // for (auto i : {1,3,2,4,23,4,4}){
    //     cout<<i<<" ";
    // }
    
    int arr[]{2,3,4}; //int arr[]={2,3,4}; 나 int arr[(숫자)] = {2,3,4}; 로도 가능
    for (int i : arr)
        cout<<i<<" ";
    
    int d = {3};

    //실행중인 프로그램의 메모리공간
    //데이터영역: 전역변수가 저장되는 공간
    //스택영역: 지역변수 및 매개변수가 저장되는 영역
    //힙 영역: 프로그램이 실행되는 과정에서 동적으로 할당이 이루어 지는 영역

    //배열(array)는 스택 영역에 정적으로 만들어지는 배열로 자료형과 크기를 반드시 명시해야 함
    //배열은 크기가 고정되어 있고 저장할 정보의 크기가 작다면 배열이 효과적(메모리 효율성 우수)
    //벡터(vector)는 힙 영역에 동적으로 만들어지는 배열 자료형만 명시하면 됨(크기 정해도 가변적)
    //원소의 크기가 가변적일때, 저장할 정보의 크기가 클 때 vector가 효과적 why? vector는 순차적인 메모리 블록에 데이터를 저장하므로, 데이터를 연속적으로 접근하는데 최적화
    //array도 순차적인 메모리 블록에 데이터를 저장하지만, vector의 크기 가변성때문에 vector가 더 효과적이라고 생각

    //namespace 다시 보기

    // string str;
    // getline(cin,str,'a');
    // cout<<str;

    char text[] = {'l','o','v','e'};
    string title(text);
    cout<<text;

    string *p = new string("C++");
    cout<<*p;
    p->append("wow");
    cout<<*p;
    delete p;

    //참조 선언시 반드시 원본 변수로 초기화 - 초기화가 없으면 오류가 발생한다(null로 초기화하는 것도 x), 참조 배열 생성 불가능
    //변수의 성향을 지닌 대상은 참조 선언 가능 ex) 배열의 요소

    // int n = 5;
    // int &refn = n;
    // int *pdd = &refn;
    // *pdd = 20;
    
    //const로 선언한 값을 그냥 선언한 참조로 변경 x, but const로 선언한 참조로는 변경 가능
    
   // const int &ref = 30;
    //원래 참조는 상수 참조가 안되지만, const참조자는 상수를 메모리 공간에 임시적으로 저장하기 때문에 가능(매개변수에서도 가능)
    //활용: const로 안하면 main에서 sum(3,2)를 하고 싶어도 매개변수가 상수라 안됨 a=3; b=2; sum(a,b);를 해야 작동함 그러나 함수에서 const상수참조를하면 그냥 해도 작동

    //참조를 가장 많이 활용하는 사례: 참조를 사용한 함수 호출
    //함수의 매개 변수를 참조 타입으로 선언 시 참조매개변수의 이름만 생기고 공간이 생기지 않음
    //그러나 참조 매개 변수에 대한 조작은 실 인자 변수의 조작 효과를 가짐

    cout<<endl;
    
    int x[] = { 0,1,2,3,4,5 }; 
    int avg;
    // average(x, 6, avg) ? write_avg(avg) : write_error(); //avg는 평균, average()는 true 리턴, write_avg() 실행 
    // average(x, -2, avg) ? write_avg(avg) : write_error(); //false 반환, write_error() 실행

    char name[] = "Mike"; 
    cout << name << endl;
    
    find(name, 0) = 'S'; 
    cout << name << endl;
    char& ref = find(name, 2); //ref는 name[2] 참조
    ref = 't'; // name = "Site"
    cout << name << endl;

    char wowo[] = "ABCDE";
    // char& wo = find(wowo, 2);
    // wo = 'W';
    char& wo = wowo[2];
    wo = 'W';
    cout<<wowo;



    //참조로 리턴받지않거나 매개변수를 참조로 두지 않으면 수정이 불가능
    
    bool wowow;
    cout<<"불자료형으로 입출력";
    cin>>boolalpha>>wowow;
    cout<<boolalpha<<wowow<<endl;

    double dddd;
    cout<<"고정소수점 입출력";
    cin>>dddd;
    cout<<fixed<<setprecision(2)<<dddd<<endl;
}