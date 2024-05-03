//use of hybrid inheritance

#include<iostream>
using namespace std;


class A{
public:
void fun1()
{
  cout<<"---calling class A---"<<endl;
  cout<<"Function 1..."<<endl<<endl;
}
};


class B:public A{
public:
void fun2()
{
    cout<<"---calling class A and B---"<<endl;
    cout<<"Function 2..."<<endl<<endl;
}
};

class C:public A
{
public:
void fun3(){
    cout<<"---calling class A and C---"<<endl;
    cout<<"Function 3..."<<endl<<endl;
}
};

class D:public C{
public:
void fun4(){
  cout<<"---calling class C and D---"<<endl;
  cout<<"Function 4..."<<endl<<endl;
}
};

class E:public C 
{
public:
void fun5(){
    cout<<"---calling class E and C---"<<endl;
    cout<<"Function 5..."<<endl<<endl;
}
};
int main()
{
    A a;
    a.fun1();

    B b;
    b.fun1();
    b.fun2();

    C c;
    c.fun1();
    c.fun3();

    D d;
    d.fun1();
    d.fun3();
    d.fun4();

    E e;
    e.fun1();
    e.fun3();
    e.fun5();
    return 0;
}