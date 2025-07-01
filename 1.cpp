#include<iostream>
using namespace std;

class btech{
    public:
    int roll;
    float cgpa;
    btech(){
        cin>>roll;
        cin>>cgpa;
    }

    void display(){
        cout<<"roll no: "<<roll;
        cout<<"cgpa: "<<cgpa; 
    }

};

int main(){
    btech s1;    // non DMA
    // btech *s1 = new btech   --DMA (we use arrow operator (->) in this)
    s1.display();
    return 0;
}