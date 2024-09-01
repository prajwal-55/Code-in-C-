#include<iostream>
using namespace std;

void update(int arr[],int size){

    cout<<endl<<"inside the Function"<<endl;

    arr[0]={120};

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Going back to main function"<<endl;
}

int main(){

    int arr[3]={2,4,0};

    update(arr,3);

    cout<<"Printing in the main Function"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
