// FUNCTION POINTER

#include<iostream>
using namespace std;

void add(int a, int b ){
    cout<<a+b;
}

int main(){
    void(*ptr) (int,int);  //Function Pointer
    ptr = add;
    ptr(10,20);
    return 0; 
}