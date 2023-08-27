#include <iostream>
using namespace std;
 
class Test{
public:
    int a;
 
    // This function will take
    // object as arguments and
    // return object
    Test add(Test Ta, Test Tb)
    {
        Test Tc;
        Tc.a = Ta.a + Tb.a;
 
        // returning the object
        return Tc;
    }
};
int main()
{
    Test T1, T2, T3;
 
    // Values are initialized
    // for both objects
    T1.a = 50;
    T2.a = 100;
    T3.a = 0;
 
    cout << "Initial Values \n";
    cout << "Value of object 1: " << T1.a
         << ", \nobject 2: " << T2.a
         << ", \nobject 3: " << T3.a
         << "\n";
 
    // Passing object as an argument
    // to function add()
    T3 = T3.add(T1, T2);
 
    // Changed values after
    // passing object as an argument
    cout << "New values \n";
    cout << "Value of object 1: " << T1.a
         << ", \nobject 2: " << T2.a
         << ", \nobject 3: " << T3.a
         << "\n";
 
    return 0;
}