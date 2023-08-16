#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inch;

public:
    Distance(int f, int i) {
        feet = f;
        inch = i;
    }

    Distance(float m) {
        feet = int(m);
        inch = int(12 * (m - feet));
    }

    void display() {
        cout << "Feet = " << feet << endl << "Inch = " << inch;
    }
};

int main() {
    float f = 2.6;
    Distance d = f;
    d.display();
    return 0;
}
