#include <iostream>
using namespace std;

class Fruit{
    string name;
    public:
    Fruit() = default;
    Fruit(string name):name{name}{}
    ~Fruit();
    string getName();
};

class FruitSeller{
    Fruit& fruit;
    const int PRICE;
    int num, myMoney;
public:
    FruitSeller();
    FruitSeller(Fruit &f, int price, const int& num, const int& money);
    ~FruitSeller();
    int cal();
    void sellresult();
};

Fruit oh("woww");
FruitSeller wow(oh, 10,4,60);
FruitSeller::FruitSeller(): fruit{oh}, PRICE{300}, num{5}, myMoney{2000} {}
FruitSeller::FruitSeller(Fruit &f, int price, const int& num, const int& money):
    fruit{f}, PRICE{price}, num{num}, myMoney{money}{}
FruitSeller::~FruitSeller(){
    cout<<"FruitSeller객체 소멸 완료"<<endl;
}
Fruit::~Fruit(){
    cout<<"Fruit객체 소멸 완료"<<endl;
}

int FruitSeller::cal(){
    return num*PRICE;
}

string Fruit::getName(){
    return name;
}

void FruitSeller::sellresult(){
    int total = cal();
    cout<<fruit.getName()<<" "<<num<<"개를 사면"<<total<<"원이고 거스름돈은 "<<myMoney-total<<"원 입니다."<<endl;
}

int main(){
    Fruit f{"orange"};
    FruitSeller fs{f,2000,6,20000};
    FruitSeller fs2;

    fs.sellresult();
    fs2.sellresult();
    wow.sellresult();
}