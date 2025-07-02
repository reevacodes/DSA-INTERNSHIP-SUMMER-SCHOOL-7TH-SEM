#include<iostream>
using namespace std;

int main(){
    int *ptr = nullptr;
    {
        int num=20;
        ptr = &num;
        cout<<num<<endl;
        cout<<ptr<<endl;
        cout<<*ptr<<endl;
    }
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}