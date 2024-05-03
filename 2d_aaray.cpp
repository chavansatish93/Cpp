//this program implieses the 2d array concept

#include<iostream>
using namespace std;

int main()
{
    int arr[2][3]={ {1,2,3},{4,5,6}};

  for (int i = 0; i < 2; i++)
  {
       for ( int j = 0; j < 3; j++)
       {
         cout<<"The value of the array at "<<i<<","<<j<<" is "<<arr[i][j]<<endl;
       }
       
  }
  

    return 0;
}