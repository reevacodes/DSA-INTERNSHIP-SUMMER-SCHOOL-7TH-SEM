// Padding in C++ means the extra empty bytes the compiler adds between variables in a struct or class to make the data align properly in memory. This helps the computer access data faster but can increase the size of the object.

#include<iostream>
using namespace std;

class btech{
    int roll; //8
    char ch1; //8
    double cgpa; //8
    char section; // stored in char ch1
};

int main(){
    btech s1;
    cout<< sizeof(s1);

    return 0;
}