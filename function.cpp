//this program use the function and prints the results

#include<iostream>
using namespace std;

int sum(int a,int b,int c)
{
    int add;
    add = a+b+c;
    return add;
}
int main()
{
    int a,b,c;

    cout<<"Enter the value of a,b and c"<<endl;
    cin>>a>>b>>c;

    cout<<"The function returns the sum "<<sum(a,b,c)<<endl;
    return 0;
}