//using of hierachical inheritance concept

#include<iostream>
using namespace std;

class A
{
 public:
 void fun1()
 {
    cout<<"Executing function 1"<<endl;
 }
};

class B:public A
{
public:
void fun2()
{
    cout<<"Executing function 2"<<endl;
}
};

class C
{
  public:
  void fun3()
  {
    cout<<"Executing function 3"<<endl;
  }
};

int main()
{
    A obj1;
    obj1.fun1();
    
    B obj2;
    obj2.fun1();
    obj2.fun2();

    C obj3;
    obj3.fun3();
    return 0;
}