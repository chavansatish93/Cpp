//using inheritance concept

#include<iostream>
using namespace std;

class Human
{ 
    public:
    int height;
    int age;
    int Weight;

    public:
    int getAge()
    {
        return this->age;
    }


};

class male:public Human{

      public:
      string colour;

      void sleep()
      {
        cout<<"Male sleeping...!"<<endl;
      }
};

      int main()
      {
        male object1;
        cout<<object1.age<<endl;
        cout<<object1.Weight<<endl;
        cout<<object1.height<<endl;

        cout<<object1.colour<<endl;
        object1.sleep();
       
       
        
        

        return 0;
      }
