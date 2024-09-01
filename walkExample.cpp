#include <iostream>
using namespace std;

void reachHome(int src,int dest){

    cout<<"Source "<<src<<" Destination "<<dest<<endl;

    //base call
    if(src==dest){
        cout<<"Bhai tu Pochla Ghari "<<endl;
        return;
    }

    // processing - ek step aage badhjao
    src++;

    //resurivce call
    reachHome(src,dest);


}

int main(){

    int src=1;
    int dest=10;

    reachHome(src,dest);


    return 0;
}