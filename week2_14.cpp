#include <iostream>

/*char list_exam(std::initializer_list<char> charList, char targetChar){ //방법 1
    char closest = *charList.begin();
    double min = std::abs(targetChar-closest);

    for (char ch : charList){
        double distance = std::abs(targetChar - ch);
        if(distance < min){
            min = distance;
            closest = ch;
        }
    }
    return closest;
}*/

char list_exam(std::initializer_list<char> value, char f){ //방법 2
    char c;
    int n=127; //아스키코드이기 때문에 주소값이 가장 멀어봤자 127이하이다.
    for(char i : value){
        if(std::abs(i-f)<n){
            n = std::abs(i-f);
            c = i;
        }
    }
    return c;
}


int main() {
    std::cout<<"{'d','p','r','w','g','f'}문자 중 h와 가까운 문자는 : ";
    std::cout<<list_exam({'d','p','r','w','g','f'},'h')<<std::endl;

    std::cout<<"{'k','q','b','r','a','e','v','z'}문자 중 w와 가까운 문자는 : ";
    std::cout<<list_exam({'k','q','b','r','a','e','v','z'},'w')<<std::endl;

    return 0;
}
