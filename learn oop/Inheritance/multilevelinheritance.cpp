#include<iostream>

using namespace std;
class Student {
    protected:
    int roll ;
    public:
    void setroll(int);
    void getroll();

};
void Student::setroll(int r){
    roll=r;
}
void Student :: getroll(){
    cout<< "Roll number: " <<roll <<endl;
}
class Exam : public Student{
    protected:
    float maths ;
    float physics;
    public:
    void setmarks(float, float);
    void getmarks();
    
};
 void Exam :: setmarks(float m1, float m2){
     maths =m1 ;
     physics=m2;
 }
 void Exam:: getmarks(){
    cout<<"the marks in physics and math is : "<< maths<<endl<<physics<<endl;
 }
 class Result : public Exam{
   float percent;
   public: 
   void display(){
    cout<<"your percentage is : "<<(maths + physics )/2;
   }

 };
int main(){
    Result susila;
    susila.setroll(420);
    susila.getroll();
    susila.setmarks(94.5,93.5);
    susila.getmarks();
    susila.display();

    return 0;
}
/*    
   notes: 
   If we are inheriting B from A and c from B then 
   1. A is the base class for B and B is the base class for c
   2. A--> B--> c is called as inheritance path 
   i hope you got it easily 
   thank you ! 
*/