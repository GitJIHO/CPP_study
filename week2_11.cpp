#include <iostream>
#include <string>
#include <iomanip>

int main() {
    int num;
    std::string exp;

    std::cout<<"10진수 입력 : ";
    std::cin>>num;

    std::cout<<"여러 진법으로 출력하기 oct(8), hex(16), digit(10)"<<std::endl;
    while(1){
        std::cout<<"해당 진법 입력 : ";
        std::cin>>exp;
        if(exp=="16" || exp=="hex"){
            std::cout<<" => 16진법 : 0x"<<std::hex<<num<<std::endl;
        }
        else if(exp=="8" || exp=="oct"){
            std::cout<<" => 8진법 : 0"<<std::oct<<num<<std::endl;
        }
        else if(exp=="10" || exp=="dec"){
            std::cout<<" => 10진법 : "<<std::dec<<num<<std::endl;
        }
        else {
            std::cout<<"해당 진법이 없습니다.";
            break;
       }
    }
    return 0;
}