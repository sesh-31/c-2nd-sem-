#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int size;
    cout << "Enter Size" << endl;
    cin >> size;

    try {
        char *mystring;

        if (size <= 0)
            throw 's';

        mystring = new char[size];

        for (int n = 0; n <= 100; n++) {
            if (n > size - 1)
                throw n;
        }
    } catch (int i) {
        cout << "Exception: ";
        cout << "index " << i << " is out of range" << endl;
    } catch (char c) {
        cout << "Exception: " << "Size must be non-zero positive number:" << endl;
    }

    getch();
    return 0;
}
