#include<iostream>
using namespace std;


int getMin(int num[],int size){

    int mini=INT32_MAX;

    for(int i=0;i<size;i++){

           mini=min(mini,num[i]);

        // if(num[i]<min){
        //     min=num[i];
        // }
    }
    return mini;

}
int getMax(int num[],int size){

    int maxi=INT32_MIN;

    for(int i=0;i<size;i++){

        maxi=max(maxi,num[i]);
        // if(num[i]>max){
        //     max=num[i];
        // }
    }
    return maxi;

}

int main(){

    int size;
    cin>>size;

    int num[100];
    
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"Minimun Number in the array is "<<getMin(num,size)<<endl;
     cout<<"Maximun Number in the array is "<<getMax(num,size)<<endl;
    return 0;
}