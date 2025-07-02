#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    int i = 0;
    while(i!=5){
        cout<<arr+i<<endl;   //address of all index of an array
        cout<<*arr+i<<endl;  //value of an array
        i++;
    }
    return 0;
}