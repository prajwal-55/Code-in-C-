#include <iostream>
using namespace std;

int print(int *p){

    cout<<*p<<endl;
}


int update(int *p){

    //p=p+1;
    //cout<<"Inside Function "<<p<<endl;

    *p=*p+1;
    //cout<<"Inside Function "<<*p<<endl;
}

int getSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
    sum+=i[arr];
  }
  return sum;
}

int main(){

/*
    int value= 9;
    int *p =&value;

    // print(p);

    //  cout<<"Before Update "<<p<<endl;
    //  update(p);
    //  cout<<"After Update "<<p<<endl;

     cout<<"Before Update "<<*p<<endl;
     update(p);
     cout<<"After Update "<<*p<<endl;
*/
    int arr[5]={8,4,9,2,7};
    //  cout<<"Sum of the Array is "<<getSum(arr,5)<<endl;
    // cout<<"Sum of the Array is "<<getSum(arr+2,3)<<endl;

     int a=7;
     int *c=&a;
     cout<<a<<" "<<*c<<endl;
    
    
    return 0;
}