#include <iostream>
using namespace std;

class Circle{
int radius;
public:
weak_ptr<Circle> wp1;
Circle() : Circle(1) {}
Circle(int r) : radius{r} {}
~Circle() {
cout << "반지름" << radius << " 객체 소멸"<< endl; }
void setRadius(int r) { radius = r; }
int getRadius() { return radius; }
double getArea() {
return 3.14 * radius * radius;
}
int insert(shared_ptr<Circle> ssp){
    return 2223;
}
void display();
};


void Circle::display() {
    cout<<"   wow: "<<radius<<endl;
}
void sp(shared_ptr<Circle> sp){
    sp->setRadius(24);
    sp->display();
    cout<<sp.use_count()<<endl;
}
void sp2(Circle& pt){
    pt.setRadius(55);
    pt.display();
}


int main(){
shared_ptr<Circle> sp1 = make_shared<Circle>(13);
sp1->display();
sp(sp1);
sp1->display();
Circle *p = new Circle(22);
sp2(*p);
p->display();
shared_ptr<int> sp3 = make_shared<int>();
*sp3 = 99;
cout<<*sp3;

// sp1->setRadius(20);
// sp1->display();
// cout<<sp1.use_count()<<endl;
Circle *pArray = new Circle[3]; // 3개의 Circle 객체 배열의 동적 생성
pArray[0].setRadius(5); // 배열의 첫 번째 객체의 setRadius() 멤버 함수 호출
pArray[1].setRadius(7); // 배열의 두 번째 객체의 setRadius() 멤버 함수 호출
pArray[2].setRadius(9); // 배열의 세 번째 객체의 setRadius() 멤버 함수 호출
cout<<"=== 동적 할당 된 배열 원소 접근 ==="<<endl;
//동적 배열은 범위 기반 for 사용불가(배열 시작만 알고 크기를 알 수 없기 때문)
for (int i = 0; i < 3; i++) {
cout << (pArray + i)->getArea() << endl;
// cout << pArray[i].getArea()<<endl;
}
cout<<endl<<"=== 동적 할당된 배열 반환 ==="<<endl;
// 각 원소 객체의 소멸자 별도 실행-생성의 반대 순서
delete[] pArray; // pArray[2]-> pArray[1] -> pArray[0] 순서로 객체 소멸자 실행
delete p;
return 0;
}