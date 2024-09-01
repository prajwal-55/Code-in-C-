#include <iostream>
using namespace std;

int update(int **p1){

    //p1=p1+1;
    //kuch change hoga -NO

    //*p1=*p1+1;
    //kuch change hoga -YES

    **p1=**p1+1;
    //kuch change hoga -YES
}

int main(){

    int i=9;
    int *p = &i;
    int **p1  = &p;

    /*
    cout<<endl<<"Sahi hai bhai "<<endl;

    cout<<"Printing p "<<p<<endl;
    cout<<"Address of p "<<&p<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p1<<endl<<endl;

    cout<<&i<<endl;
    cout<<&p<<endl;
    // cout<<&p1<<endl;
    cout<<*p1<<endl;
    */

    cout<<endl<<"Before"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p1<<endl;
    update(p1);
    cout<<endl<<"After"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p1<<endl;


    return 0;
}

