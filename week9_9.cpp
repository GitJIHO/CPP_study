#include <iostream>
#include <string>
using namespace std;

void message_print(string&& s){
    cout<<"message = "<<s<<endl;
}

int main()
{
    cout<<"20205233 이지호"<<endl;
    string stra = "apple";
    string strb = "banana";
    message_print(std::move(stra));
    message_print(stra + strb);
    return 0;
}