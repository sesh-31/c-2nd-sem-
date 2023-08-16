#include <iostream>
using namespace std;
class rectangle
{
private:
    int length, breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    friend void operator++(rectangle &r);
    void display()
    {
        cout << "length=" << length << endl
             << "breadth=" << breadth;
    }
};
void operator++(rectangle &r)
{
    ++r.length;
    ++r.breadth;
}
int main()
{
    rectangle r1(5, 6);
    ++r1;//operator ++r1
    r1.display();
    
    return 0;
}