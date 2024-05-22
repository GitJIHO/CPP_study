#include <iostream>
using namespace std;

class Shape
{
protected:
    string name;   // 도형의 이름
    int width, height; // 도형이 내접하는 사각형
public:
    Shape(string n = "", int w = 0, int h = 0) : name{n}, width{w}, height{h} {}
    string getName() { return name; } // 이름 리턴
    virtual double getArea() = 0;     // 3.14*width*height; //width*height; //width*height/2;
};

class Oval : public Shape{
    public:
    Oval(string n, int w, int h) : Shape(n,w,h) {}
    string getName() { return name; } // 이름 리턴
    double getArea() {
        return 3.14*width*height;
    }
};

class Rectangle : public Shape{
    public:
    Rectangle(string n, int w, int h) : Shape(n,w,h) {}
    string getName() { return name; } // 이름 리턴
    double getArea() {
        return width*height;
    }
};

class Triangle : public Shape{
    public:
    Triangle(string n, int w, int h) : Shape(n,w,h) {}
    string getName() { return name; } // 이름 리턴
    double getArea() {
        return width*height/2;
    }
};


int main()
{
    Shape *p[3];
    p[0] = new Oval("호떡", 10, 20);
    p[1] = new Rectangle("노트", 30, 40);
    p[2] = new Triangle("삼각자", 30, 40);
    for (int i = 0; i < 3; i++)
        cout << p[i]->getName() << "의 넓이는 " << p[i]->getArea() << endl;
    for (int i = 0; i < 3; i++)
        delete p[i];
}