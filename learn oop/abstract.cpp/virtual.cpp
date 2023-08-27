#include<iostream>
#include<string.h>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display(){}// hami le xutta xuttai rup ma display lai use garne xam 1) vidoe lai 2) text
};
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){// constructor in derived class written as like this 
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    
class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){// title ra rating chai mathi kai class bata leau tara 
            words = wc;// word afnai  class bata aaos (mathilo video length ma chai CHWVideo length batai aaos )
        }// base class ko constructor le s ra r lai run garxa ! 
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();// mathi virtual vayera matrai payeko 
    tuts[1]->display();// mathi virtual vayera matrai payeko 

    return 0;
}
/* 
    rules for virtual functions: 
    1. they cannot be static 
    2. they are accessed by object pointer 
    3. virtual function can be friend of another class 
    4. a function in base class might not be used 
    5. if a function is defined in a base class, there is no neccessary of redefining it in the derived class   
*/