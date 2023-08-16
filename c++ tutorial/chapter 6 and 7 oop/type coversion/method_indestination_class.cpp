#include<iostream>
using namespace std;

class Distance {
    int meter;
    float cm;
public:
    Distance(int m, int c) {
        meter = m;
        cm = c;
    }
    
    int getmeter() {
        return meter;
    }
    
    float getcentimeter() {
        return cm;
    }
};

class dist {
    int feet;
    int inch;
public:
    dist() {
        feet = inch = 0;
    }
    
    dist(int f, int i) {
        feet = f;
        inch = i;
    }
    
    dist(Distance d) {
        int m, c;
        m = d.getmeter();
        c = static_cast<int>(d.getcentimeter()); // Convert cm to int
        feet = m * 3.3;
        inch = c * 0.4;
        feet = feet + inch / 12;
        inch = inch % 12;
    }
    
    void display() {
        cout << feet << "ft " << inch << "inches" << endl;
    }
};

int main() {
    Distance d1(6, 40);
    dist d2 = d1; // Conversion constructor from Distance to dist
    d2.display();
    
    return 0;
}
