#include <iostream>
#include <conio.h>

using namespace std;

class A {
public:
    void show() {
        cout << "This is class A\n";
    }
};

class B : public A {
public:
    void show() {
        cout << "This is class B\n";
    }
};

class C : public A {
public:
    void show() {
        cout << "This is class C\n";
    }
};

int main() {
    A *p, a;
    B b;
    C c;

    p = &b;
    p->show();

    p = &c;
    p->show();

    p = &a;
    p->show();

    getch();
    return 0;
}
