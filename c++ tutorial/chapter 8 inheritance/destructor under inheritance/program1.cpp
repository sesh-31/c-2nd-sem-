#include <iostream>
#include <conio.h>

using namespace std;

class A {
public:
    ~A() {
        cout << "Class A Destructor" << endl;
    }
};

class B : public A {
public:
    ~B() {
        cout << "Class B Destructor" << endl;
    }
};

class C : public B {
public:
    ~C() {
        cout << "Class C Destructor" << endl;
    }
};

int main() {
    C c; // Creating an object of class C

    // Destructor is called at the end of the scope (end of main function)
    getch();
    return 0;
}
