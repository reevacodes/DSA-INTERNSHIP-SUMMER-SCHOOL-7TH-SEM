#include<iostream>
using namespace std;

int main(){
    int a=5;
    cout<<a<<endl;
    // int &r;   error: 'r' declared as reference but not initialized
    int &r = a;

    r =7;
    cout<<r<<endl;
    cout<<a<<endl;
    return 0;
}