#include <iostream>
using namespace std;

string untilFive(string stra){
    return stra.substr(0,5);
}

int main() {
    string stra, outstr;
    cout <<"20205233 이지호"<<endl;
    cout << "Enter a string: ";
    getline(cin, stra);

    outstr = untilFive(stra);
    cout << " -> " << outstr;

    char strb[50];
    cout << "\nEnter a string: ";
    fgets(strb,50,stdin);
    outstr = untilFive(strb);
    cout << " -> " << outstr;

    return 0;
}