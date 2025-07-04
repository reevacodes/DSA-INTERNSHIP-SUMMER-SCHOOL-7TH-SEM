#include<iostream>
using namespace std;

class Data{
    public:
    int age;
    string name;
    Data(){
        cout<<"Hello world"<<endl;
    }

    // Data(int a, string n="poor people"){
    //     age = a;
    //     name = n;
    // }

    // Data(int age, string name){ //Error: compiler will be confused which is the arg
    //     age = age;
    //     name = name;
    // // }

    Data(int age, string name){
        this->age = age;
        this->name = name;
    }

    void Print(void);
};

void Data::Print(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}

int main(){
    Data acc;
    // acc.Print();
    // Data obj(21);
    Data obj(21,"Raey");
    obj.Print();
    return 0;
}