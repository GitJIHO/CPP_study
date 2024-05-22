#include <iostream>
#include <array>

int main() {

    std::array<int, 5> array;

    std::cout<<"정수 입력 ( 5번):"<<std::endl;
    for(int i=0; i<5; i++){
        std::cin>>array[i];
    }

    std::cout<<"배열에 저장된 내용 : ";
    for(int num : array){
        std::cout << num <<" ";
    }
    std::cout<<std::endl;

    std::sort(array.begin(), array.end());

    std::cout<<"배열 오름차순 정렬 : ";
    for(int num : array){
        std::cout << num << " ";
    }
    std::cout<<std::endl;
    
    return 0;
}
