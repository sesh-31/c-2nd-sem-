#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "class A constructor :\n ";
    }
};

class B : public A {
public:
    B() {
        cout << "class B constructor : \n";
    }
};

class C : public B {
public:
    C() {
        cout << "class C constructor : ";
    }
};

int main() {
    C x; 

    return 0;
}
