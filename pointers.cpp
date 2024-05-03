//th << "The name is " << string << endl;pointers

#include<iostream>
using namespace std;

int main()
{
    int a = 56;
    int *ptr ;
    ptr = &a;

    cout<<"The value of a is "<<a<<endl;
    cout<<"\n";

    cout<<"The value of a using ptr is "<<*ptr<<endl;
    cout<<"\n";

    cout<<"The address of a is "<<&a<<endl;
    cout<<"\n";

    cout<<"The address of a using ptr is "<<ptr<<endl;
    cout<<"\n";
    
    cout<<"The address of ptr itself is "<<&ptr<<endl;

    return 0;
}

