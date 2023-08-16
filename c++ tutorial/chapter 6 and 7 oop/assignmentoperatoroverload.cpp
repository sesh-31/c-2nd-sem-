#include <iostream>

using namespace std;

class Marks {
private:
    int m1;
    int m2;

public:
    // Default constructor
    Marks() {
        m1 = 0;
        m2 = 0;
    }

    // Parameterized constructor
    Marks(int i, int j) {
        m1 = i;
        m2 = j;
    }

    // Overloading of Assignment Operator
    void operator=(const Marks &M) {
        m1 = M.m1;
        m2 = M.m2;
    }

    void Display() {
        cout << "Marks in 1st Subject: " << m1 << endl;
        cout << "Marks in 2nd Subject: " << m2 << endl;
    }
};

int main() {
    Marks mark1(45, 89);
    Marks mark2(36, 59);

    cout << "Marks of first student: ";
    mark1.Display();

    cout << "Marks of Second student: ";
    mark2.Display();

    mark1 = mark2;

    cout << "Marks in 1st Subject after assignment: ";
    mark1.Display();

    return 0;
}
