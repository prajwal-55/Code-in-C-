#include <iostream>
using namespace std;

int main(){

 /*
    int arr[10]={1,2,3,4,5,6,7,8,9,0};

    cout<<" address of first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<" address of first memory block is "<<&arr[0]<<endl;

        
     cout<<"Value is "<<*arr<<endl;
     cout<<"Value is "<<*arr+1<<endl;
     cout<<"Value is "<<*(arr+1)<<endl;
     cout<<"Value is "<<*arr+6<<endl;
   // *arr[6] is Invalid
   //  arr[i]=*(arr+i) is Valid
   // i[arr] = *(i+arr) is Valid

   int i=4;
   cout<<i[arr]<<endl;   //5
       
   int temp[10];
   cout<<sizeof(temp)<<endl; //40
   cout<<sizeof(*temp)<<endl;
   cout<<sizeof(&temp)<<endl;


   //cout<<sizeof(temp)/sizeof(int)<<endl;  // 10

   int *ptr=&temp[0];
   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*ptr)<<endl;
   cout<<sizeof(&ptr)<<endl;
 

    int a[20]={4,5,3,8};
    cout<<" --> "<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    int *p=&a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    cout<<" --> "<<&p<<endl;

    // Symbol table ka content cannot be changed

*/

int brr[20];

//Error
   //brr=brr+1;

   int *ptr=&brr[0];
   cout<<ptr<<endl;
   ptr=ptr+1;
   cout<<ptr<<endl;

    return 0;
}