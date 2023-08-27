#include<iostream>
using namespace std;
class Time{
    int hour;
    int minutes;
    public:
    Time (int t){
        hour=t/60;
        minutes=t%60;

    }
    void display(){
        cout<<hour<<"hrs and "<<minutes<<"minutes"<<endl;    
    }
};

int main(){
    Time t1(90);
    t1.display();
    return 0;
}