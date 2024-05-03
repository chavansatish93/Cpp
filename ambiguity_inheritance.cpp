//this program implies the ambiguity arises in inheritance

#include<iostream>
using namespace std;

class A
{
    public:
    void fun()
    {
        cout<<"This is function of A"<<endl;
    }

};

class B
{
    public:
    void fun()
    {
        cout<<"This is function of B"<<endl;
    }

};

class C:public A, public B
{
    
};

int main()
{
    C obj1;
    //obj1.fun(); this will create ambiguity in inheritance
    obj1.A::fun();
    obj1.B::fun();
    return 0;
}