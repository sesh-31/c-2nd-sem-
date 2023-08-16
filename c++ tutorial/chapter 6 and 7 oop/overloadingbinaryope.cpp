//overloading binary operator 
#include<iostream>
using namespace std;

class Distance {
private:
    int feet, inches;
public:
    Distance() {
        feet = inches = 0;
    }
    
    Distance(int f, int in) {
        feet = f;
        inches = in;
        feet += inches / 12;
        inches %= 12;
    }
    
    friend Distance operator +(Distance, Distance);
    
    void display() {
        cout << "(" << feet << "," << inches << ")" << endl;
    }
};

Distance operator +(Distance x, Distance y) {
    Distance r;
    r.feet = x.feet + y.feet;
    r.inches = x.inches + y.inches;
    r.feet += r.inches / 12;
    r.inches %= 12;
    return r;
}

int main() {
    Distance d1(5, 6), d2(7, 8), d3;
    d3 = d1 + d2; 
     // You can use the operator directly instead of d1.operator +(d2)
    
    cout << "d1=";
    d1.display();
    cout << "d2=";
    d2.display();
    cout << "d3=";
    d3.display();

    return 0;
}
