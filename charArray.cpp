#include <iostream>
using namespace std;

int main(){

    int arr[10]={2,4,8,9,24};
    char ch[6] = "abcde";
    
    cout<<arr<<endl;
    // attention here

    cout<<ch<<endl;

    char *c =&ch[0];
    //prints entire string
    cout<<c<<endl;

    char temp = 'z';
    char *p =&temp;

    cout<<p<<endl;

    return 0;
}