#include<iostream>
using namespace std;

int main(){

    int a = 10, b = 20, c = 30, d = 40;
    int *arr[5] = {&a, &b, &c, &d};

    int i = 0;
    while(i!=4){
        cout<< *(arr+i)<<endl;
        cout<< **(arr+i)<<endl; // ele of array
        i++;
    }

    return 0;

}