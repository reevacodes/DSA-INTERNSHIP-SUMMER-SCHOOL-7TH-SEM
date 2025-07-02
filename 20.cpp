#include<iostream>
using namespace std;

int main(){
    
    int *ptr1;
    float *ptr2;
    char *ptr3;

    cout<<sizeof(ptr1)<<endl; // 4 - for 32 & 8 - for 64(depends on system arch.)
    cout<<sizeof(ptr2)<<endl; //4
    cout<<sizeof(ptr3)<<endl; //4

    return 0;
}