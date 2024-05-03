//copy assignment 

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Satish {
private:
    int health;

public:
    char *name;
    char level;

    // Default constructor
    Satish() {
        cout << "Default constructor called...!" << endl;
        name = new char[100];
    }

    // Parameterized constructor
    Satish(int health, char level) {
        this->health = health;
        this->level = level;
    }

    // Copy constructor (Shallow Copy)
    
    Satish(const Satish &temp) {
    this->health = temp.health;
    this->level = temp.level;
    this->name = new char[strlen(temp.name) + 1]; // Allocate new memory
    strcpy(this->name, temp.name); // Deep copy the name
}

    // Destructor to release dynamically allocated memory
    ~Satish() {
        cout<<"Destructor called....!"<<endl<<endl;
        delete[] name;
    }

    int gethealth() {
        return health;
    }

    char getlevel() {
        return level;
    }

    void sethealth(int h) {
        health = h;
    }

    void setlevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    void print() {
        cout << endl;
        cout << "[Name: " << this->name << ", ";
        cout << "Health: " << this->health << ",";
        cout << "Level: " << this->level << "]" << endl;
    }
};

int main() {
    Satish s1;
    s1.sethealth(30);
    s1.setlevel('A');
    char name[7] = "Babbar";
    s1.setName(name);
    //s1.print();

    // Use shallow copy constructor
    Satish s2(s1); 
    //s2.print();

    //s1.name[0] = 'G';
    //s1.print();
    //use of deep copy constructor

    //s2.print();
    s1=s2;//copy assignment
    s1.print();
    s2.print();




    return 0;
}
