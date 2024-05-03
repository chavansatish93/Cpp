//use of multi-level inheritance

#include<iostream>
using namespace std;

class Animal{

public:
int age;
int weight;

public:
void sound()
{
    cout<<"Barking"<<endl;
}
};

class Dog:public Animal{


};

class GermanShepherd:public Dog
{

};


int main()
{
    GermanShepherd g;
    g.sound();
  
    return 0;
}