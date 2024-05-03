//this program implies of copy constructor


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

   Satish(int health, char level)
   {
    this-> health = health;
    this ->level = level;
   }

   //copy constructor
   Satish(Satish &temp) //to avoid loop for the compiler we have to use pass by reference '&'
   {
      this->health = temp.health;
      this->level = temp.level;
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
    cout<<"Health "<<this->health<<endl;
    cout<<"level "<<this->level<<endl;
    
  }
};

int main()
{
    Satish obj1(80,'A');
    obj1.print();

    cout<<"------------------"<<endl;

    //copy constructor
    Satish obj2(obj1);
    obj2.print();
    return 0;
}