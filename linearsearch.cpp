#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int arr[10]={34,87,8,34,24,66,78,23,67,4};

    int key;
    cout<<"Enter the Element for the Search ";
    cin>>key;

    bool found =search(arr,10,key);

    if(found==key){
        cout<<"Key is Present "<<endl;
    }else{
        cout<<"Key is Absent "<<endl;
    }

    return 0;
}