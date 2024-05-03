//this program implies of while loop and print even numbers upto 100

#include<iostream>
using namespace std;

int main()
{
    int number=0;

    while( number<=100)
    {
        cout<<"The numbers are "<<number<<endl;
        number = number + 2;
    }

    return 0;
}