#include<iostream>
using namespace std;
class demo{
      int x;
      public: 
      void getdata(){
        cout<<"\n Enter number ";
        cin>>x;
      }
      void putdata(){
        cout<<"\n Value of x= "<<x;

      }
    void operator++(){//yedi postfix aa++in last  then (int) required !
        x=x+1;
    }
};
// tmeley normal variable lai j operation garna sakxau teslai tmele obj ma ni garna sakni banaunu lai 
// operator overloading ko  help linai parxa natra mildaina hai !
// we cannot acessed directly a user defined data type and only can acess a inbulit datatype so..

int main(){
    demo aa;

    aa.getdata();
    cout<<"\n original value = ";
    aa.putdata();
    ++aa;
    cout<<"\nvalue after increament =";
    aa.putdata();
    return 0;
}
// yedi post fix ma vayea mathi operator ++ ma (int ) vanera leknaai parnea xa (syntax nai samjha )