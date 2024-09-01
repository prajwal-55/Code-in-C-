#include<bits/stdc++.h>
using namespace std;

 class Hero{

    //properites
    private:
    int health;

    public:   
    char level;
    char *name;
    static int timeToComplete;

     Hero(){
        cout<<"Simple Constructor Called "<<endl;
         name = new char[100];
    }
    
    //Destructor
    ~Hero(){
        cout<<"Destructor function Called "<<endl;
    }

};

    //Initialise
    //dataType className :: fieldName = value;
    int Hero :: timeToComplete =5;

int main(){

    cout<<Hero::timeToComplete<<endl;

    Hero a;
    cout<<a.timeToComplete<<endl;

    Hero b;
    int timeToComplete = 10;
    cout<<a.timeToComplete<<endl;
    cout<<b.timeToComplete<<endl;
    
    return 0;
}