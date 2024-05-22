#include <iostream>
using namespace std;

void find2replace(string &fstr, const string &has, const string &replace, bool &result) {
    int f_index = fstr.find(has);
    int count = 0;
    result = false;
    for(int i=0; i<fstr.length(); i++){
        if(f_index != string::npos){
            fstr.replace(f_index,1,replace);
            f_index = fstr.find(has,f_index+1);
            result = true;
        }
    }
}

int main() {
    std::string str = "C++ programming";
    std::string has = "+";
    string replace = "p";
    bool result = false;
    
    cout<<"20205233 이지호"<<endl;
    cout<<"변경 전 문자열 = "<<str<<endl;

    find2replace(str,has,replace,result);

    if(result == true)
        cout<<"변경 후 문자열 = "<<str<<endl;
    else
        cout<<str<<"에서"<<has<<"를 발견하지 못함."<<endl;
    return 0;
}