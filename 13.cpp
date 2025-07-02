// DOUBLE POINTER

#include<iostream>
using namespace std;

int main(){

    int num = 20;
    int *ptr = &num;
    int **pptr = &ptr;

    cout<<ptr<<endl;
    cout<<&num<<endl; 
    cout<<pptr<<endl;
    cout<<**pptr<<endl;
    cout<<***(&pptr)<<endl;
    cout<<*(&pptr)<<endl;
    cout<<*(&num)<<endl;
    cout<<**(&ptr)<<endl;

    return 0;
}
