#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter the string: ";
    std::cin >> str;

    int n = str.length();
    int count = 0;

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
    }

    std::cout << "Number of distinct substrings of length 2: " << count << std::endl;

    return 0;
}







// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     int a,b;
//     cin>>a>>b;
//     if(a%3==0 ||b%3==0)cout<<0<<endl;
//     else if(a%3==b%3)cout<<1<<endl;
//     else cout<<2<<endl;
// }
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         solve();
//     }
    
// }