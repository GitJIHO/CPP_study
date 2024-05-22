#include <iostream>

int main(){
    double num = 0.0;
    int num_int = 0;
    double num_dou = 0.0;

    std::cout<<"실수를 입력하세요: ";
    std::cin>>num;

    num_int = static_cast<int>(num);
    std::cout<<"정수 part : "<<num_int<<std::endl;

    num_dou = num-static_cast<double>(num_int);
    std::cout<<"소수 part : "<<num_dou<<std::endl;


    return 0;
}