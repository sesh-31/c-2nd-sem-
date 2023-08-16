#include <iostream>
using namespace std;

class Base {
private:
    int x;
protected:
    int y;
public:
    int z;
};

class Derived : public Base {
public:
    void getdata() {
        cout << "Enter x, y, and z" << endl;
        cin >> y; // y is protected and can be accessed
        cin >> z; // z is public and can be accessed
    }
};

int main() {
    Derived d;
    d.getdata();

    /*x is private and cannot be accessed directly
     y is protected and cannot be accessed directly
     z is public and can be accessed*/
   // cout << "y=" << d.y << endl;
    cout << "z=" << d.z << endl;

    return 0;
}
