// SUM OF ELEMENTS OF A VECTOR

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int main(){
//     int sum=0;
//     vector<int>v={10,3,5,8,6};
//     for(int i=0;i<v.size();i++){
//         sum=sum+v[i];
//     }
//     cout<<sum;
//     return 0;
// }

// LARGEST ELEMENT IN A VECTOR

// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v = {10,3,5,8,6};
//     int max=INT_MIN;
//     for(int i=0;i<v.size();i++){
//         if(v[i]>max){
//             max=v[i];
//         }
//     }
//     cout<<max;
//     return 0;
// }

// REVERSE OF A VECTOR

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int main(){
//     vector<int> v = {10,3,5,8,6};
//     for(int i=v.size()-1;i>=0;i--){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

// ALL POSSIBLE SUBARRAYS

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int main(){
//     vector<int>v = {10,3,5,8,6};
//     for(int i=0;i<v.size();i++){
//         for(int j=i;j<v.size();j++){
//             for(int k=i;k<=j;k++){
//                 cout<<v[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }

// INTERSECTION OF 2 VECTORS

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {3, 4, 5, 6, 7};

    vector<int> result;

    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v2.size(); j++) {
            if (v1[i] == v2[j]) {
                result.push_back(v1[i]);
                break; // avoid duplicates from v2
            }
        }
    }

    // Print result
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
