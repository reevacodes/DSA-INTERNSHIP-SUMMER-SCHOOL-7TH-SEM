#include<iostream>
using namespace std;

class Data{
    private:
    int age;
    string name;

    public:
    void getData(void){
        cout<<"name : "; cin>>name;
        cout<<"age : "; cin>>age;
    }
    void Print(void);
};

void Data::Print(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}

int main(){
    Data obj;
    obj.getData();
    obj.Print();
    return 0;
}