//this program shows the switch case example

#include<iostream>
using namespace std;

int main()
{
   int age;
   
   cout<<"Enter your age"<<endl;
   cin>>age;

   switch (age)
   {
   case 18:
     cout<<"You are 18 years old!"<<endl;
    break;

    case 12:
     cout<<"You are 12 years old!"<<endl;
    break;
   
   default:
     cout<<"You are neither 18 nor 12 years old!"<<endl;
    break;
   }
    return 0;
}