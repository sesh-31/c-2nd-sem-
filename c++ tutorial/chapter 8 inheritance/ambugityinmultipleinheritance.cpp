#include <iostream>
#include <conio.h>

using namespace std;

class A {
public:
    void show() {
        cout << "This is class A" << endl;
    }
};

class B {
public:
    void show() {
        cout << "This is class B" << endl;
    }
};

class C : public A, public B {
};

int main() {
    C c;

    c.A::show();   // OK, explicitly calling the show() from class A
    // c.show();    // Ambiguous - will not compile
    c.B::show();   // OK, explicitly calling the show() from class B

    getch();
    return 0;
}
//can be removed by : next program remove.cpp

