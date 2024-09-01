#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int n){

    if(n==0|| n==1){
        return true;
    }
    
            if(arr[0]>arr[1]){
                return false;
            }
            else{
                bool remainPart= isSorted(arr+1, n-1);
                return remainPart;               
            }  
}

int main(){

    int n=5;
    int arr[5]={2,3,4,5,6};
    
    bool ans=isSorted(arr,n);

    if(ans)
        cout<<"Array is sorted "<<endl;
    else
        cout<<"Array is not sorted "<<endl;

    return 0;
}