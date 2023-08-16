#include <iostream>
#include <conio.h>

using namespace std;

class Shape {
protected:
    float pl, b;

public:
    void setvalue(float x, float y) {
        pl = x;
        b = y;
    }
};

class Square : public Shape {
public:
    void find_perimeter() {
        float p = 4 * pl; // Corrected missing variable declaration
        cout << "Perimeter: " << p << endl;
    }
};

int main() {
    Shape bo, *bp;
    Square s;

    bp = &s;
    bp->setvalue(3, 3);
     //bp->find_perimeter(); // This line is invalid as 'find_perimeter()' is not inherited from Shape
    s.find_perimeter();   // Calls Square's function directly

    getch();
    return 0;
}
