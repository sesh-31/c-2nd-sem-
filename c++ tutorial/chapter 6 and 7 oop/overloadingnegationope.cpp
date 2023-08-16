/*#include<iostream>
using namespace std;
int main (){

    return 0;
}*/
#include <iostream>
using namespace std;
 
 class point{
    int x,y;
    public:
    void getdata(){
     cout<<"enter X and y coordinate"<<endl;
     cin>>x>>y;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
   point operator-(){
    point t;
    t.x=-x;
    t.y=-y;
    return t;

   }
 };
int main()
{   point p,q;
    p.getdata();
    q=-p;
    cout<<"q=";
    q.display();
    return 0;
}