#include<iostream>
using namespace std;

class Data{
    public:
    void Greet(){
        cout<<"Say Hello";
    }
    void negGreet();
};

void Data::negGreet(){
    cout<<"Dont say hello";
}

int main(){
    Data acc;
    acc.Greet();
    cout<<endl;
    acc.negGreet();
    return 0;
}

