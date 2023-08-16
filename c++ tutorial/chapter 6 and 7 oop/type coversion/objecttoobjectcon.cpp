#include<iostream>

using namespace std;

class Distance {
    int feet;
    int inch;
public:
    Distance(int f, int i) {
        feet = f;
        inch = i;
    }
    
    void display() {
        cout << "Feet = " << feet << endl << "Inches = " << inch;
    }
};

class Dist {
    int meter;
    int centimeter;
public:
    Dist(int m, int c) {
        meter = m;
        centimeter = c;
    }
    
    operator Distance() {
        int totalInches = meter * 39.3 + centimeter * 0.4; // Convert to inches
        int feet = totalInches / 12;
        int inch = totalInches % 12;
        return Distance(feet, inch);
    }
};

int main() {
    Dist d2(4, 50);
    Distance d1 = static_cast<Distance>(d2);  // Initialize d1 using the conversion operator
    d1.display();
    
    return 0;
}
