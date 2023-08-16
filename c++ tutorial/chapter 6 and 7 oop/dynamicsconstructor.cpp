#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std ;
class String {
    char* name;
    int length;

public:
    String() {
        length = 0;
        name = new char[length + 1];
    }

    String(char *s) {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }

    void display(void) {
        cout << "\nName:-" << name;
    }

    void join(String &a, String &b) {
        length = a.length + b.length;
        delete[] name;
        name = new char[length + 1];
        strcpy(name, a.name);
        strcat(name, b.name);
    }
};

int main() {
    String fn("GOAT\t");
    String In("MESSI");
    String n;
    n.join(fn, In);
    n.display();
    getch();
    return 0;
}