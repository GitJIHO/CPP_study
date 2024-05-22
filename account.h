// #include <iostream>
// using namespace std;
// #ifndef ACCOUNT_H
// #define ACCOUNT_H

// namespace Bank {
//     enum class MENU{
//         DEPOSIT=1,WITHDRAW,CHECK,QUIT
//     };
//     class account{
//         string name;
//         int balance;
//     public:
//         account();
//         account(string name, int balance);
//         ~account();
//         string getOwner();
//         void deposit(int money);
//         int withdraw(int money);
//         int check();
//     };
// }
// #endif


#include <iostream>
using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

namespace BANK{
    enum class MENU{DEPOSIT = 1, WITHDRAW, CHECK, QUIT};
    class account{
        string name;
        int balance;
    public:
        account();
        account(string name, int balance);
        ~account();
        void deposit(int m);
        string getOwner();
        int check();
        int withdraw(int m);
        
    };
}
#endif
