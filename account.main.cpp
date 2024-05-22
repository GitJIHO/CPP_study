#include <iostream>
#include "account.h"

using namespace std;
using BANK::account;
using BANK::MENU;

int main() {
    account a("C++", 0);
    int menu, money;
    
    cout<<"20205233 이지호"<<endl;

    do{
        cout<<"-----------------------------"<<endl;
        cout<<"menu : 1.입금, 2.출금, 3.조회, 4.종료 >> ";
        cin>>menu;
    

    if(menu == static_cast<int>(MENU::QUIT))
        break;

    switch(menu) {
        case(static_cast<int>(MENU::DEPOSIT)):
        cout<<"입급액 >> ";
        cin >> money;
        a.deposit(money);
        cout<< a.getOwner() <<"의 입금액은 "<<money<<endl;
        cout<< a.getOwner() <<"의 잔액은 "<<a.check()<<endl;
        break;
        case(static_cast<int>(MENU::WITHDRAW)):
        cout<<"출금액 >> ";
        cin >> money;
        cout << a.getOwner() <<"의 출금액은 "<<a.withdraw(money)<<endl;
        cout<< a.getOwner() <<"의 잔액은 "<<a.check()<<endl;
        break;
        case(static_cast<int>(MENU::CHECK)):
        cout<<a.getOwner() <<"의 잔액은 "<<a.check()<<endl;
        }
    }while(true);
    return 0;
}
    

   