#include<iostream>
using namespace std;

int main(){


//pointer to int is created, and pointing to some garbage address

// int *p=0;
// cout<<*p<<endl;

/*
int i=5;

int *q =&i;
cout<<q<<endl;
cout<<*q<<endl;

int *p=0;

 p =&i;
cout<<p<<endl;
cout<<*p<<endl;
*/


/*
    int num =10;
    cout<<"num --> "<<num<<endl;

    int *ptr=&num;
    cout<<"*ptr --> "<<*ptr<<endl;
    cout<<"ptr --> "<<ptr<<endl;
    cout<<"&ptr --> "<<&ptr<<endl;
    cout<<"&num --> "<<&num<<endl;
*/

int num =8;
int a=num;
cout<<"a Before "<<num<<endl;
a++;
cout<<"a After "<<num<<endl;


int *p=&num;
cout<<"a Before "<<num<<endl;
(*p)++;
cout<<"a After "<<num<<endl;

// copying a pointer
int *q=p;
cout<<p<<" <---> "<<q<<endl;
cout<<*p<<" <---> "<<*q<<endl;

//important concept
int i=3;
int *t=&i;

//cout<<(*t)++<<endl;

*t=*t+1;
cout<<"*t --> "<<*t<<endl;
cout<<"Before t --> "<<t<<endl;
t=t+1;
cout<<"After t --> "<<t<<endl;

    return 0;
}