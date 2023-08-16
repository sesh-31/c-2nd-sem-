#include <iostream>
#include <cstring>
using namespace std;
class Student {
    int roll;
    char *name;

public:
    Student() {
        name = NULL;
        roll = -1;
    }

    Student(int r, char *n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        roll = r;
    }

    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

class Marks : public Student {
protected:
    int sub1, sub2, sub3;

public:
    Marks() {
        sub1 = sub2 = sub3 = 0;
    }

    Marks(int r, char *n, int x, int y, int z) : Student(r, n) {
        sub1 = x;
        sub2 = y;
        sub3 = z;
    }

    void displayMarks() {
        cout << "Subject1: " << sub1 << endl;
        cout << "Subject2: " << sub2 << endl;
        cout << "Subject3: " << sub3 << endl;
    }
};

class Result : public Marks {
    int total;
    float percentage;

public:
    Result() {
        total = 0;
        percentage = 0;
    }

    Result(int r, char *n, int x, int y, int z) : Marks(r, n, x, y, z) {
        total = sub1 + sub2 + sub3;
        percentage = float(total) / 3;
    }

    void displayResult() {
        displayStudent();
        displayMarks();
        cout << "Total marks: " << total << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

int main() {
    Result r(1, "Roshan", 56, 87, 92);
    cout << "Result Details" << endl;
    r.displayResult();
    return 0;
}
