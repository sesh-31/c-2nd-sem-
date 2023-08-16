#include <iostream>
#include <conio.h> // Assuming you're using conio.h for getch()

using namespace std;

int main() {
    double Operand1, Operand2, Result;
    char opr;

    cout << "To proceed, enter\n";
    cout << "First Number: ";
    cin >> Operand1;

    cout << "An Operator: ";
    cin >> opr;

    cout << "Second Number: ";
    cin >> Operand2;

    try {
        if (opr != '+' && opr != '-' && opr != '*' && opr != '/') {
            throw opr;
        }

        switch (opr) {
            case '+':
                Result = Operand1 + Operand2;
                cout << "\n" << Operand1 << " + " << Operand2 << " = " << Result;
                break;
            case '-':
                Result = Operand1 - Operand2;
                cout << "\n" << Operand1 << " - " << Operand2 << " = " << Result;
                break;
            case '*':
                Result = Operand1 * Operand2;
                cout << "\n" << Operand1 << " * " << Operand2 << " = " << Result;
                break;
            case '/':
                if (Operand2 == 0) {
                    throw "Division by zero not allowed";
                }
                Result = Operand1 / Operand2;
                cout << "\n" << Operand1 << " / " << Operand2 << " = " << Result;
                break;
            default:
                throw opr;
        }
    }
    catch (const char* Str) {
        cout << "\nBad Operation: " << Str;
    }
    catch (const char n) {
        cout << "\nOperation Error: '" << n << "' is not a valid operator";
    }

    cout << "\n\n";
    getch(); // Assuming you want to wait for a key press before exiting
    return 0;
}
