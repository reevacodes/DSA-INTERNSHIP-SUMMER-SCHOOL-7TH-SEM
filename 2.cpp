// WAP to take name,roll and cgpa of two student and print it.
// note:
// take data using getdata() function and print it using putdata() function.

#include<iostream>
using namespace std;

class btech{
    public:
    string name;
    int roll;
    float cgpa;
    void getdata(){
        getline(cin,name);
        cin>>roll;
        cin>>cgpa;
        cin.ignore();
    }

    void putdata(){
        cout<<"name: "<<name<<endl;
        cout<<"roll no: "<<roll<<endl;
        cout<<"cgpa: "<<cgpa<<endl; 
    }

};              

int main(){
    btech s1,s2;
    s1.getdata();
    s1.putdata();
    s2.getdata();
    s2.putdata();
    return 0;
}


/*
WAP to take name, roll, and cgpa of two student and print it.

note:
	take data using getdata() function and print it using putdata() function.
*/

// #include <iostream>

// using namespace std;

// class btech{
	
// 	public:
// 		int roll;
// 		float cgpa;
// 		string name;
// //		char name[20];
	
// 		void getdata();		// signature
// 		void putdata();		
// };

// void btech::getdata(){
			
// 	cout<<"Name: ";
// //	cin>>name;	// it shows an error due to single word input
// 	getline( cin, name );	// getline function is use to take sentense as input
// //	scanf("%[^\n]s", name);	// this is one of the  way to take sentense as input
			
// 	cout<<"ROll: ";
// 	cin>>roll;
			
// 	cout<<"CGPA: ";
// 	cin>>cgpa;
			
// 	cin.ignore();
// }
		
// void btech::putdata(){
			
// 	cout<<"Name: "<<name<<endl;
// 	cout<<"Roll: "<<roll<<endl;
// 	cout<<"CGPA: "<<cgpa<<endl;
// }

// int main(){
	
// 	btech s1, s2;
	
// 	s1.getdata();
// 	s2.getdata();
	
// 	s1.putdata();
// 	s2.putdata();
	
// 	return 0;
// }