#include <bits/stdc++.h>
using namespace std;

class Hero
{

    // properites
private:
    int health;

public:
    char level;
    char *name;
    static int timeToComplete;

    Hero()
    {
        cout << "Simple Constructor Called " << endl;
        name = new char[100];
    }

    // Paramerterised Constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {

        this->level = level;
        this->health = health;
    }

    // Copy Constructor
    Hero(Hero &temp)
    {

        char *ch = new char[(strlen(temp.name) + 1)];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy Constructor Called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {

        cout << endl
             << "Name " << this->name << ", "
             << "Health " << this->health << ", "
             << "Level " << this->level << endl;
        cout << endl;
    }

    int setHealth(int h)
    {
        health = h;
    }
    char setLevel(char ch)
    {
        level = ch;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    char setName(char name[])
    {
        strcpy(this->name, name);
    }

    // Static Function
    static int random()
    {
        return timeToComplete;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor function Called " << endl;
    }
};

// Initialise
// dataType className :: fieldName = value;
int Hero ::timeToComplete = 4;

int main()
{

    cout << Hero::random() << endl;

    return 0;
}