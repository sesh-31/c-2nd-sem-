#include<iostream>
using namespace std;

class Time {
    int hr, min;
public:
    void getdata() {
        cout << "Enter hour and minute: ";
        cin >> hr >> min;
    }
    
    void display() {
        cout << hr << " hr " << min << " min " << endl;
    }
    
    int operator<(Time t) {
        if (hr < t.hr)
            return 1;
        else if (hr == t.hr && min < t.min)
            return 1;
        else
            return 0;
    }
};

int main() {
    Time t1, t2;

    cout << "Enter details for t1:" << endl;
    t1.getdata();

    cout << "Enter details for t2:" << endl;
    t2.getdata();

    if (t1 < t2) {
        cout << "t1 is smaller" << endl;
    } else {
        cout << "t2 is smaller" << endl;
    }

    return 0;
}
