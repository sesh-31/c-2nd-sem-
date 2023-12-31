#include <iostream>

using namespace std;

class Student {
    int roll;
    char name[20];

public:
    void getStudent() {
        cout << "Enter roll number and name of student" << endl;
        cin >> roll >> name;
    }

    void displayStudent() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

class Marks : public Student {
    int sub1, sub2, sub3;

public:
    void getMarks() {
        cout << "Enter Marks in three subjects" << endl;
        cin >> sub1 >> sub2 >> sub3;
    }

    void displayMarks() {
        cout << "Subject1: " << sub1 << endl;
        cout << "Subject2: " << sub2 << endl;
        cout << "Subject3: " << sub3 << endl;
    }

    int findTotalMarks() {
        return sub1 + sub2 + sub3;
    }
};

class Result : public Marks {
    float total, percentage;

public:
    void getdata() {
        getStudent();
        getMarks();
        total = findTotalMarks();
        percentage = total / 3;
    }

    void displaydata() {
        displayStudent();
        displayMarks();
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result r;
    r.getdata();

    cout << "Student Details" << endl;
    cout << endl;

    r.displaydata();

    return 0;
}
