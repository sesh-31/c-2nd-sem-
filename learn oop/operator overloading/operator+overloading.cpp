#include<iostream>
using namespace std;
class demo{
    int a;
    public:
    void getdata(){
        cout<<"enter a number "<<endl;
        cin>>a;
    }
    void putdata(){
        cout<<"\n value="<<a;
    }
    demo operator+(demo bb){
        demo cc;
        cc.a=a+bb.a;
        return cc;
    }
};
int main(){
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;//aa bata + function lai call garieako xa bb argument patieako xa 
    aa.putdata();
    bb.putdata();
    cc.putdata();

    return 0;
}