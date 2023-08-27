#include<iostream>
using namespace std;
class Base{
    int data1;
    public:
           int data2;
           void setdata();
           int getdata();
           int getdata2();
           
};
 void Base:: setdata(void){
    data1 =10;
    data2=20;
 }
 int Base :: getdata(){
    return data1;

 }
 int Base :: getdata2(){
    return data2;
 }
 
 
class Derived : public Base{//class is derived publically 
     int data3;
     public:
     void process();
     void display();
        
};
void Derived :: process(){
    data3=data2*getdata();
}

void Derived :: display(){
    cout<<"value of data 1 is : "<<getdata()<<endl;// because  data 1 is private in class base so can't be accessible so 
    // getdata is the public so it is accessible in this way
    cout<<"value of data 2 is : "<<data2<<endl;
    cout<<"value of data 3 is : "<<data3<<endl;
}
int main(){
    Derived der;// Making derived class  object because it is accessible 
    der.setdata();
    der.process();
    der.display();
    return 0;
}
/* 
-> Default visibility mode is private
-> public visiblity : public member of the base class becomes Public members of the derived class 
-> Private visibility Mode : Public member of the base class becomes private member of the derived class 
-> for acessing Public member we should call inside a member function in public of derived class !
-> private member are never inherited 
*/
