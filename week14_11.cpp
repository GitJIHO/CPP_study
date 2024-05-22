#include <iostream>
using namespace std;

// 단, 각각의 게이트는 ANDGate, ORGate, XORGate 클래스로 작성하며 AbstractGate를 상속받는다.
// 다형성을 적용한다.
// 논리형 상수 값 출력 시 : cout << boolalpha << true;

class AbstractGate
{ // 추상 클래스
public:
    virtual bool operation(bool x, bool y, bool z) = 0; // 순수 가상 함수
};

class ANDGate : public AbstractGate
{
    bool operation(bool x, bool y, bool z)
    {
        return x && y && z;
    }
};

class ORGate : public AbstractGate
{
    bool operation(bool x, bool y, bool z)
    {
        return x || y || z;
    }
};

class XORGate : public AbstractGate
{
    bool operation(bool x, bool y, bool z)
    {
        return x ^ y ^ z;
    }
};

class Manage
{
public:
    static void run();
};

void Manage::run()
{
    AbstractGate *ag = nullptr;
    int choice;
    bool b1, b2, b3;
    while (true)
    {
        cout << "\n연산 종류를 선택하세요 1.and, 2.or 3.xor 4.stop>> ";
        cin >> choice;
        if (choice == 4)
            break;

        cout << "(true:1, false:0) 게이트 입력 값 3개 >> ";
        cin >> b1 >> b2 >> b3;
        if (choice == 1)
        {
            ag = new ANDGate();
            cout << boolalpha << b1 << "," << b2 << "," << b3 << " => "
                 << ag->operation(b1, b2, b3) << endl;
            delete ag;
        }
        else if (choice == 2)
        {
            ag = new ORGate();
            cout << boolalpha << b1 << "," << b2 << "," << b3 << " => "
                 << ag->operation(b1, b2, b3) << endl;
            delete ag;
        }
        else if (choice == 3)
        {
            ag = new XORGate();
            cout << boolalpha << b1 << "," << b2 << "," << b3 << " => "
                 << ag->operation(b1, b2, b3) << endl;
            delete ag;
        }
        else
        {
            cout << "1~4의 숫자만 입력하세요 ";
            break;
        }
    }
}
int main()
{
    Manage::run(); // 객체 생성을 안하고 run을 부를수 있는 이유? run이 static(정적) 메소드이기 때문에
}