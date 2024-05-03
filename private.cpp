//porgram to demensrtate the private access modifiers

#include<iostream>
#include<string>
using namespace std;

class private_mode{
    private:  // we cannot access these data members from outside of the class
    string name = "satish"; // despite we can access within class using function
    string branch = "EnTC";
    int RollNum = 1;
   
   public:
   void data()
   {
     cout<<"The name is: "<<name<<endl;
     cout<<"Branch of student is: "<<branch<<endl;
     cout<<"RollNum of the student is: "<<RollNum;
   }
};

int main()
{
   private_mode p;
   cout<<"The content of the class are:"<<endl;
   p.data();
    return 1;
}