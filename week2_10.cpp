#include <iostream>
#include <iomanip>

int main() {
    int num1;
    int num2;
    int num3;
    double total;
    double aver;


    std::cout<<"퀴즈, 중간고사, 기말고사 성적을 입력하세요: ";
    std::cin>>num1>>num2>>num3;

    total=num1+num2+num3;

    std::cout<<"total : "<<total<<std::endl;
    std::cout<<"average : "<< std::fixed << std::setprecision(2) << total/3 <<std::endl;
}