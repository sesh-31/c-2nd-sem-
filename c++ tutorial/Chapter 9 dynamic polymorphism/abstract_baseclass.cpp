#include <iostream>
#include <conio.h>

using namespace std;

class Polygon {
protected:
    int width, height;

public:
    void setvalues(int a, int b) {
        width = a;
        height = b;
    }

    virtual int area() = 0;
};

class Rectangle : public Polygon {
public:
    int area() {
        return (width * height);
    }
};

class Triangle : public Polygon {
public:
    int area() {
        return (width * height / 2);
    }
};

int main() {
    Rectangle rect;
    Polygon *poly = &rect;
    Triangle trgl;

    poly->setvalues(4, 5);
    cout << "Area of Rectangle: " << poly->area() << endl;

    poly = &trgl;
    poly->setvalues(6, 5);
    cout << "Area of Triangle: " << poly->area() << endl;

    getch();
    return 0;
}
