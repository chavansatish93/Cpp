//in this program we are using static and dynamic memory allocation

#include<iostream>
using namespace std;

class Satish{
  public:
  int marks=97;
  int id=1122;
};
int main()
{
  Satish s1; //static memory allocation

  Satish *s = new Satish; //dynamically allocation

  cout<<"---The calling of memory Statically----"<<endl;
  cout<<"The marks of Satish is: "<<s1.marks<<endl;
  cout<<"The id of Satish is: "<<s1.id<<endl;
  cout<<"\n";

  cout<<"---The calling of memory Dynamically----"<<endl;
  cout<<"The marks of Satish is: "<<(*s).marks<<endl;
  cout<<"The id of Satish is: "<<(*s).id<<endl;
  cout<<"\n";

  cout<<"---The calling of memory using arrow operator----"<<endl;
  cout<<"The marks of Satish is: "<<s->marks<<endl;
  cout<<"The id of Satish is: "<<s->id<<endl;
    return 0;
}