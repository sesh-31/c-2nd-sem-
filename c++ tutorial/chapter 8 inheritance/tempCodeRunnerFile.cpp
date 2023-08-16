#include <iostream>

using namespace std;

class Teacher {
    int tid;
    char subject[20];
public:
    void getTeacher() {
        cout << "Enter Teacher ID and subject" << endl;
        cin >> tid >> subject;
    }
    
    void displayTeacher() {
        cout << "Teacher ID: " << tid << endl;
        cout << "Subject: " << subject << endl;
    }
};

class Staff {
    int sid;
    char level[10];
public:
    void getStaff() {
        cout << "Enter Staff ID and level" << endl;
        cin >> sid >> level;
    }
    
    void displayStaff() {
        cout << "Staff ID: " << sid << endl;
        cout << "Level: " << level << endl;
    }
};

class Coordinator : public Teacher, public Staff {
    char level[10];
public:
    void getdata() {
        getTeacher();
        getStaff();
        cout << "Enter level" << endl;
        cin >> level;
    }
    
    void displaydata() {
        displayTeacher();
        displayStaff();
        cout << "level:" << level << endl;
    }
};

int main() {
    Coordinator c;
    c.getdata();
    cout << "Coordinator details:" << endl;
    c.displaydata();
    
   
    return 0;
}
