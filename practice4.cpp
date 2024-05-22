#include <iostream>
#include <typeinfo>
using namespace std;


int main(){
    enum MENU {AAA=1,BBB,CCC,DDD};
    enum class PEOPLE {EEE=1,FFF,GGG,HHH};
    int num;
    while(1){
        cout<<"입력: ";
        cin>>num;

        PEOPLE choice = static_cast<PEOPLE>(num);
        if(choice == PEOPLE::EEE){
            cout<<"EEE"<<endl;
            continue;
        }
        else{
            break;
        }
    }

    // auto name = "range";
    // auto value = 20;
    // auto number{20};
    // auto digit = {20};

    // cout<<typeid(name).name()<<endl;
    // cout<<typeid(value).name()<<endl;
    // cout<<typeid(number).name()<<endl;
    // cout<<typeid(digit).name()<<endl;

    //initializer_list와 uniform initialization은 다른것
    //전자: 동일타입의 요소를 여러개 보관하는 템플릿 클래스
    //후자: {}변수, 배열, 객체 초기화
}