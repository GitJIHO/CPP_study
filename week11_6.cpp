#include <iostream>
using namespace std;

class Book
{
    string title;
    int price;

public:
    Book(string title = "", int price = 0);
    void show(string obj);
    string getTitle(); // title 반환
    Book& operator+=(int a);
    Book& operator-=(int b);
    bool operator==(int p);
    bool operator==(string p);
    bool operator==(const Book& p);
};

Book::Book(string title, int price):title{title},price{price}{}

void Book::show(string obj){
    cout << obj << ") title=" << title << ',' << "price=" << price << endl;
}
string Book::getTitle() {
    return title;
}
Book& Book::operator+=(int a){
    this->price+=a;
    return *this;
}
Book& Book::operator-=(int b){
    this->price-=b;
    return *this;
}
bool Book::operator==(int p){
    if(this->price == p) return true;
    else return false;
}
bool Book::operator==(string p){
    if(this->title == p) return true;
    else return false;
}
bool Book::operator==(const Book& p){
    if(this->price == p.price && this->title == p.title) return true;
    else return false;
}

int main()
{
    Book a("청춘", 20000), b("미래", 30000);
    a += 500; // 책 a의 가격 500원 증가
    b -= 500; // 책 b의 가격 500원 감소
    a.show("a");
    b.show("b");
    Book c("명품 C++", 30000), d("고품 C++", 30000);
    if (c == 30000)
        cout << "명품 C++ 정가 30000원" << endl; // price 비교
    if (c == "명품 C++")
        cout << "명품 C++ 입니다." << endl; // 책 title 비교
    if (c == d)
        cout << "두 책이 같은 책입니다." << endl; // title, price 모두 비교
    else
        cout << "두 책이 다른 책입니다." << endl;
}