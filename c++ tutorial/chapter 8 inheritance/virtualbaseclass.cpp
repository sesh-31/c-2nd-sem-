#include <iostream>
using namespace std;

class Person {
protected:
    char name[20];
    int age;

public:
    void getdata() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : virtual public Person {
protected:
    int eid, salary;

public:
    void getdata() {
        Person::getdata();
        cout << "Enter Employee ID and salary: ";
        cin >> eid >> salary;
    }
    void display() {
        Person::display();
        cout << "Employee ID: " << eid << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Student : virtual public Person {
protected:
    int sid;
    char faculty[20];

public:
    void getdata() {
        Person::getdata();
        cout << "Enter student ID and faculty: ";
        cin >> sid >> faculty;
    }
    void display() {
        Person::display();
        cout << "Student ID: " << sid << endl;
        cout << "Faculty: " << faculty << endl;
    }
};

class TeachingAssistant : public Employee, public Student {
    char course[20];

public:
    void getdata() {
        Employee::getdata();
        Student::getdata();
        cout << "Enter course: ";
        cin >> course;
    }
    void displaydata() {
        Person::display();
        Employee::display();
        Student::display();
        cout << "Course: " << course << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.getdata();
    cout << "TA Details:" << endl;
    ta.displaydata();

    return 0;
}
