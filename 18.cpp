// POINTER ARITHMETIC

#include<iostream>
using namespace std;

int main(){
    int num1 = 20;
    int num = 30;
    int *ptr = &num1;

    cout<<ptr<<endl;
    ptr++;
    cout<<ptr;
    return 0; 
}