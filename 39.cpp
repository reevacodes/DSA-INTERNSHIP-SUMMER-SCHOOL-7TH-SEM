// Pass by pointer- swapping

#include<iostream>
using namespace std;

void swap(int x,int y);

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a,b;
    a =5, b=6;
    // swap(a,b);
    swap(&a,&b);
    cout<<"a :"<<a<<", b: "<<b;
}