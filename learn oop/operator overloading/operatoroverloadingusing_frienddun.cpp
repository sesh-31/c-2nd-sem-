#include<iostream>
using namespace std;

class demo {
    int a, b;
public:
    demo(int x, int y) {
        a = x;
        b = y;
    }

    void show() {
        cout << "a=" << a << " b=" << b << endl;
    }

    friend void operator-(demo& ob);
};

// Friend function to overload the unary minus operator
void operator-(demo& ob) {
    ob.a = -ob.a;
    ob.b = -ob.b;
}

int main() {
    demo ob(-10, -20);
    ob.show();
    -ob;  // Using the overloaded unary minus operator
    ob.show();
    return 0;
}
