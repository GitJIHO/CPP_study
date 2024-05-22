// #include <iostream>
// using namespace std;
// #include "account.h"

// namespace Bank {
// account::account(){}
// account::account(string n, int balance):name(n), balance(balance){}
// account::~account(){}
// string account::getOwner() {return name;}
// void account::deposit(int money){
//     balance += money;
// }
// int account::withdraw(int money){
//     if(money > 0 && balance >= money) {
//         balance -= money;
//         return money;
//     }return 0;
// }
// int account::check() {
//     return balance;
// }
// }

#include <iostream>
#include "account.h"
using namespace std;


namespace BANK{
account::account(){}
account::account(string name, int balance):name{name},balance{balance}{}
account::~account(){
    cout<<name<<"객체 소멸";
}
void account::deposit(int m){
    balance += m;
}
string account::getOwner(){
    return name;
}
int account::check(){
    return balance;
}
int account::withdraw(int m){
    balance -= m;
    return m;
}
}