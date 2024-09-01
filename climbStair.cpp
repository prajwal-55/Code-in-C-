#include <iostream>
using namespace std;

int countDistinctWayToClimbStair(long long nStair){

    // base case
     if(nStair<0){
        return 0;
    }

    if(nStair==0){
        return 1;
    }
    
    //R.C

    int ans= countDistinctWayToClimbStair(nStair-1)+countDistinctWayToClimbStair(nStair-2);

    return ans;
}

int main(){

    int nStair;
    cin>>nStair;

    int ans =countDistinctWayToClimbStair(nStair);
    cout<<ans<<endl;

    
return 0;
}