#include <iostream>
using namespace std;

int factorial(int n){

    if(n==0){
        return 1;
    }

    //  int Smallprblm= factorial(n-1);
    //  int Lagerprblm=n*Smallprblm;
    //  return Lagerprblm;

    return n*factorial(n-1);
}

int main(){

    int n;
    cin>>n;
    
    int ans=factorial(n);
    cout<<factorial(n)<<endl;

    return 0;
}