#include<iostream>
using namespace std;
 class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l, int b){
        length =l;
        breadth =b;

    }
    void operator++(){
        ++length;
        ++breadth;

    }
    void display()
  {
    cout<<"length="<<length<<"\n"<<"breadth="<<breadth<<endl;

  }
 };

int main(){
    Rectangle r1(5,6);
    ++r1;
    r1.display();
    
        return 0;
}