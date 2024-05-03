//this program use the concept of class and accessing contents


class Satish
{
   int Name;//properties

};

class Myself{
//empty class return the value of object as 1 bytes
};


#include<iostream>
using namespace std;

int main()
{
   //creation of object
   Satish n1 ;
   Myself m1;
    cout<<"The size of n1 object is: "<<sizeof(n1)<<endl; 
    cout<<"The size of m1 object is: "<<sizeof(m1)<<endl; 
    return 0;
}