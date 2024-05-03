//program to use some string functions

#include<iostream>
#include<string> //this is the library for the string
using namespace std;

int main()
{ 
    string name = "Satish";

    cout<<"The name is "<<name<<endl;
    cout<<"The length of string is "<<name.length()<<endl;
    cout<<"The substring name is "<<name.substr(1,4)<<endl;

    return 0;
}