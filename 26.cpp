// PRINT TABLE USING RECURSION

#include<iostream>
using namespace std;


void table(int n, int i){
    if(i>10) return;
    cout<<"10 * " << i<<"="<< n*i<<endl;
    return table(n,i+1);
}

int main(){
    int n;
    cin>>n;
    table(n,1);
    return 0;
}
