//use of function overloading in polymorphisn

#include<iostream>
using namespace std;


class A
{
    //same name function but with different signature
    public:
    void add(int a,int b)
    {
        cout<<"The addition is : "<<a+b<<endl;
    }

    void add(int a,int b,int c)
    {
        cout<<"Same name function but no of argument/signature is different:"<<endl;
        cout<<"The addition is : "<<a+b+c<<endl;
    }

};


int main()
{
    A obj;
    obj.add(10,20);
    obj.add(10,20,30);
    return 0;
}