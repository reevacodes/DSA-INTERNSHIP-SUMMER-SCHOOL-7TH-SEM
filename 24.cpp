#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>>v;
    v.push_back({10,20,30});
    v.push_back({40,50,60});

    for(auto i:v){
        for(auto y:i){
        cout<<y<<" ";
        }
        cout<<endl;
    }

}