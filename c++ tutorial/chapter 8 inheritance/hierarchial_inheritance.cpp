#include <iostream>

using namespace std; // Add this line to avoid writing std:: repeatedly

class Employee {
protected:
    int eid, salary;

public:
    void getEmp() {
        cout << "Enter id and salary of employee" << endl;
        cin >> eid >> salary;
    }

    void displayEmp() {
        cout << "Emp ID: " << eid << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Engineer : public Employee {
public:
    char dept[10];

    void getdata() {
        getEmp();
        cout << "Enter Department" << endl;
        cin >> dept;
    }

    void display() {
        displayEmp();
        cout << "Department: " << dept << endl;
    }
};

class Typist : public Employee {
public:
    int ts; // typing speed

    void getdata() {
        getEmp();
        cout << "Enter typing speed" << endl;
        cin >> ts;
    }

    void display() {
        displayEmp();
        cout << "Typing Speed: " << ts << endl;
    }
};

int main() {
    Engineer e;
    Typist t;

    e.getdata();
    t.getdata();

    cout << "Employee Details" << endl;
    cout << endl;

    e.display();
    t.display();

    return 0;
}
