// CUSTOM COPY CONSTRUCTOR

#include<iostream>
using namespace std;

class Data {
    public:
    string name;
    int age;

    // Parameterized Constructor
    Data(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Custom Copy Constructor
    Data(Data &reObj) {
        this->name = reObj.name;
        this->age = reObj.age;
    }

    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Data obj("Raey", 21);
    obj.printDetails();

    Data obj2(obj); // Copy constructor call
    obj2.printDetails();

    return 0;
}
