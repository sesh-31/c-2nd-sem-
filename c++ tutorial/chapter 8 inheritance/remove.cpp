#include <iostream>

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
public:
    void show() {
        A::show();  // Call show() from class A
        B::show();  // Call show() from class B
    }
};

int main() {
    C c;

    c.show();  // Call the show() function in class C

    return 0;
}
