//this program uses the if else and else if conditons

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter the value of num1"<<endl;
    cin>>num1;

    cout<<"Enter the value of num2"<<endl;
    cin>>num2;

    if(num1>num2)
    {
        cout<<"The greater number is "<<num1;
    }

    else if(num2>num1)
    {
        cout<<"The greater num is "<<num2;
        cin>>num2; 
    }

    else
    {
        cout<<"The numbers are equal ";
    }
    return 0;
}