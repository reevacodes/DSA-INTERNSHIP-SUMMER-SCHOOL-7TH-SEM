#include <iostream>
using namespace std;

void func(int num){
	
	if( num > 5 )
		return;
	
    cout<< num <<endl;
	
	func( num+1 );
}

int main(){
	
	func( 1 );
	
	return 0;
}
