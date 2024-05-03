//this program implies the use of constructors

#include<iostream>
using namespace std;

class Satish{
   private:
   int health;

   public:
   char level;


   //default constructor
   Satish()
   {
    cout<<"default constructor called...!"<<endl;
   }

   //parameterised constructor

   Satish(int health)
   {
    cout<<"this-> keyword..!: "<<this<<endl; //address 
    this->health = health; //this keyword used to store the current object address
   }

   Satish(int health, char level)
   {
    this-> health = health;
    this ->level = level;
   }
   int gethealth(){
    return health;
  }

  char getlevel(){
    return level;
  }

  void sethealth(int h){
       health = h;
  }

  void setlevel(char ch)
  {
    level = ch;
  }

  void print()
  {
    cout<<health<<endl;
    cout<<level<<endl;
  }
};

  
int main()
{
    cout<<"Before calling object...."<<endl;
    Satish obj1(70);
    obj1.sethealth(80);
    obj1.setlevel('A');

    cout<<"The health is : "<<obj1.gethealth()<<endl;
    cout<<"The level is : "<<obj1.getlevel()<<endl;

    cout<<"The address of Satish is : "<<&obj1<<endl;

    cout<<"---------Contents of obj1-----------"<<endl;
    obj1.print();//calling obj1

    Satish temp(55,'B');
    cout<<"----------contents of temp----------"<<endl;
    temp.print(); //calling temp
    return 0;
}