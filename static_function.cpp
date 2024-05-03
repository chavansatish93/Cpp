//use of static function

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
    static int TimeToComplete;

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

    static int random()
    {
        return TimeToComplete;
    }

    void print() {
        cout << endl;
        cout << "[Name: " << this->name << ", ";
        cout << "Health: " << this->health << ",";
        cout << "Level: " << this->level << "]" << endl;
    }
};

int Satish::TimeToComplete=10;

int main() {
    
    cout<<Satish::random()<<endl;
}
