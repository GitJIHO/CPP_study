#include <iostream>

enum class Choice {
    Rack = 1, Paper = 2, Scissors = 3
};

int main() {
    int input;
    std::cout<<"20205233 이지호"<<std::endl;

    while(1){
        std::cout<<"정수 입력(1, 2, 3이 아닌 수는 프로그램 종료) : ";
        std::cin>>input;

        Choice c = static_cast<Choice>(input);

        if(c == Choice::Rack){
            std::cout<<"Rack"<<std::endl;
            continue;
        }
        if(c == Choice::Paper){
            std::cout<<"Paper"<<std::endl;
            continue;
        }
        if(c == Choice::Scissors){
            std::cout<<"Scissors"<<std::endl;
            continue;
        }
        else{
            break;
        }
    }
    return 0;
        
}