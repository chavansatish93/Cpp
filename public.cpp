//this program uses the concept of access specifier

//public

#include<iostream>
#include<string>
using namespace std;
class StudentData{

public: //we can access all data members of public type from inside as well as outside of the class
 string Name ;
 int rollNum ; // we can assign the direct value here
 string dept ;
 char div;

//  string Name = "Satish" ;
//  int rollNum= 09 ; // we can assign the direct value here
//  string dept = "Entc" ;
//  char div = 'A';

};


int main()
{
     StudentData s1;
    // s1.Name = "Satish";  //we can call here and assign the values
    // s1.rollNum = 1;
    // s1.dept = "Entc";


// taking input from the user
    cout<<"Enter The the Name of the student: "<<endl;
    cin>>s1.Name;

    cout<<"Enter The the rollnum of the student: "<<endl;
    cin>>s1.rollNum;

    cout<<"Enter The the deptartment of the student: "<<endl;
    cin>>s1.dept;

    cout<<"Enter The division of the student: "<<endl;
    cin>>s1.div;

    cout<<"The name of the student is: "<<s1.Name<<endl;
    cout<<"RollNumber of the student is: "<<s1.rollNum<<endl;
    cout<<"Department of the student is: "<<s1.dept<<endl;
    cout<<"The division of the student is: "<<s1.div<<endl;
    return 0;
}