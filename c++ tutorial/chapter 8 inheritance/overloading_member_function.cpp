#include <iostream>
#include <conio.h>

using namespace std;

class A {
public:
    void show() {
        cout << "This is class A";
    }
};

class B : public A {
public:
    void show() {
        cout << "This is class B" << endl;
    }
};

int main() {
    B b;

    b.show();     // Invokes the member function from class B
    b.A::show();  // Invokes the member function from class A using scope resolution

    getch();
    return 0;
}
