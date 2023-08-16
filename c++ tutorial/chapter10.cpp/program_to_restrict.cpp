#include <iostream>
#include <conio.h>
using namespace std;

void test(int x) throw(int, double)
{ 
    if (x == 0)
        throw x;
    if (x == -1) // Fixed the comparison operator
        throw 1.0;
    if (x == 2)
        throw 'a';
}

int main()
{
    int n;
    cout << "Enter a number (0, -1, 2): ";
    cin >> n;

    try
    {
        test(n);
    }
    catch (int m)
    {
        cout << "Caught an integer\n";
    }
    catch (double d)
    {
        cout << "Caught a double\n"; 
    }
    catch (char c)
    {
        cout << "Caught a character\n"; 
    }

    getch();
    return 0;
}
