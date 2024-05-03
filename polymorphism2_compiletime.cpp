//this program implies of operator overloading

#include<iostream>
using namespace std;


class Satish{
 
 public:
 int a;
 int b;

 public:
 int add()
 {
    return a+b;
 }

 void operator+(Satish &obj)
 {
    int value1 = this->a;
    int value2 = obj.a;
    cout<<"The output: "<<value2 - value1<<endl;
 }
};
int main()
{
    Satish obj1,obj2;

    cout<<"Enter the value of obj1 : "<<endl;
    cin>>obj1.a;

    cout<<"Enter the value of obj2 : "<<endl;
    cin>>obj2.a;
   
   //  obj1.a = -2;
   //  obj2.a = -5;
    obj1 + obj2;
    
    return 0;
}