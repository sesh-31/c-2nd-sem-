#include<iostream>
using namespace std;
class Test
{
private:
    int x,y;
public:
    Test()
    {  x=0;
       y=0;
        cout<<"Memory is allocated"<<endl;
    }
    ~Test()
    {   cout<<"x=\t"<<x<<"\ty=\t"<<y;
        cout<<"\nmemory is deallocated"<<endl;
    }
};
int main()
{
    {   
        Test p;
    }//life time of p finishes here, and destructor is called
    return 0;
}