#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a;
    char p[40], c[40], b[80];
    cout << "enter 1 for yes and 0 for no" << endl;
    cout << "would you like to keep the name of band ?" << endl;
    cin >> a;
    cout << endl;
    if (a == 1)
    {
        cout << "what is your favourite pet name ?" << endl;
        cin >> p;
        cout << endl;
        cout << "what is your favourite colour name ?" << endl;
        cin >> c;
        cout << endl;
        strcpy(b, p); // Copy p into b
        strcat(b, c);
        cout << "your band name is : " << b << endl;
    }
    else
    {
        cout << "thank you for participating ! ";
    }
    return 0;
}