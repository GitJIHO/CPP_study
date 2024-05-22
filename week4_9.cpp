#include <iostream>
#include <string>

std::string removeChar(std::string str, char c) {
    size_t index = str.find(c);
    while(index != -1){
        str.erase(index,1);
        index = str.find(c);
    }
    return str;
}
std::string findAndReplace(std::string str, std::string olds, std::string news){
    size_t index = str.find(olds);
    while(index != -1){
        str.replace(index,olds.length(),news);
        index = str.find(olds);
}
    return str;
}

int main() {
    std::string str;
    char c;

    std::cout<<"문자열 입력: ";
    getline(std::cin, str);
    std::cout<<"삭제하고자 하는 문자 입력: ";
    std::cin>>c;

    std::string mod = removeChar(str,c);
    std::cout<<"삭제 후 문자열 ="<< mod << std::endl;

    std::string str1 = "an old string";
    std::string str2("an old");
    std::string str3("a new");

    std::cout<<str1<<"에서";
    std::string strnew = findAndReplace(str1, str2, str3);
    std::cout<<str2<<" 문자열을 "<<str3<<" 로 교체 후 문자열= "<<strnew<<std::endl;
    
    
    return 0;
}