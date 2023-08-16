#include <iostream>
#include <conio.h>
using namespace std;

class A
{
protected:
    int adata;

public:
    A(int a)
    {
        adata = a;
    }
};

class B : public A
{
    int bdata;

public:
    B(int a, int b) : A(a)
    {
        bdata = b;
    }
    void showdata()
    {
        cout << "adata = " << adata << endl
             << "bdata = " << bdata << endl;
    }
};

int main()
{
    B b(5, 6);
    b.showdata();
    getch();
    return 0;
}
