#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>* v = new vector<int>; // dynamic allocation

    int n, a;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> a;
        v->push_back(a);  
    }

    cout << "Vector elements are:\n";
    for(int i = 0; i < v->size(); i++) {
        cout << v->at(i) << " ";
    }
    cout << endl;

    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int>* v = new vector<int>(n);  // pre-allocate space for n elements

//     cout << "Enter " << n << " elements:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> (*v)[i];  // use [] to assign value without push_back
//     }

//     cout << "Vector elements are:\n";
//     for(int i = 0; i < n; i++) {
//         cout << (*v)[i] << " ";
//     }
//     cout << endl;
//     
// return 0;
// }
