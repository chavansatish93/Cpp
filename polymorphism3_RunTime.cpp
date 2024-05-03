//this program implies the use of run time concept with method overriding concept

#include<iostream>
using namespace std;


class Animal
{
    public:
    void speak()
    {
        cout<<"Animal class function is called...."<<endl;
    }

};

class Dog:public Animal
{
public:
void speak()//if this function is not define then it will execute the class animal function
{
    cout<<"Dog class function is called..."<<endl;
}
};
int main()
{
    Dog d;
    d.speak();
    return 0;
}
