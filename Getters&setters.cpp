//This program uses the concept of getters and setters

#include<iostream>
using namespace std;

class Satish{
private:
 int health;
 char level;
public:

//generating getters 
int gethealth()
{
    return health;
}

char getlevel()
{
    return level;
}

//generating setters
void sethealth(int h)
{
    health = h;
}

void setlevel(char ch)
{
    level = ch;
}

};

int main()
{
    Satish s1;
    s1.sethealth(70);
    s1.setlevel ('A');

    cout<<"The health is: "<<s1.gethealth()<<endl;
    cout<<"The health is: "<<s1.getlevel()<<endl;
    return 0;
}