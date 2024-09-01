// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     //Write your code here

//     int n;
//     cin>>n;

//     int even=0,odd=0;
    
//     for(int i=0;i<=sizeof(n)+1;i++){

//         int rem=n%10;
//         if(rem%2==0){
//             //even number
//             even+=rem;
//         }
//         else{
//             //odd number
//             odd+=rem;
//         }
//         n=n/10;
//     }
//     cout<<even<<" "<<odd<<endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int n, even_sum = 0, odd_sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             even_sum += i;
//         } else {
//             odd_sum += i;
//         }
//     }

//     cout << "Sum of even numbers: " << even_sum << endl;
//     cout << "Sum of odd numbers: " << odd_sum << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define mod 1000000007

// int fib(int n) {
//     int f[n+1];
//     f[0] = 0;
//     f[1] = 1;
//     for (int i = 2; i <= n; i++)
//         f[i] = (f[i-1] + f[i-2]) % mod;
//     return f[n];
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << fib(n) << endl;
//     return 0;
// }

#include <iostream>
#define mod 1000000007
using namespace std;

// int fibonacci(int n) {
//     int a = 0, b = 1, c;
//     if (n == 0)
//         return a;
//     for (int i = 2; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return b%mod;
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << endl;
//     return 0;
// }
