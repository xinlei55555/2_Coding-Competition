#include <bits/stdc++.h>
using namespace std;

//! faster than linear time, you can definitely just divide the number by 2. If the result, at the end, is 1, then the number is divisible by 2. If not, then it has an odd operator
//!another method
    //*determining the divisibility of powers of 2
    /*
    You can use bitwise operators. Basically, by transforming the number into its bitwise equivalent
    Ex: Determine if the number is divisible by 8
    You can transforme it into its bitwise
    --> then you can chekc. Since 8=2^3, if the number BEFORE 3, is composed of 0, then that means that the number is divisible by 8, since the only part that isn't divisible by eight,is if the number has +2, or +4 or +1
    */
//!another method, used in this case is
//The only possibility for any number n>1 not to have an odd divisor is for n to be a power of two. 
//In binary representation, this means that the number has only one 1 bit and all other bits are 0 (i.e. 410=1002,12810=10000002. 
//Another property: the number n−1 will have all ones (i.e. 310=112,12710=1111112 but it will have one less digit than n. 
//Thus, if you apply logical AND operation to n∧(n−1), the result will be zero only if n is a power of two. 
//This is just one line of code regardless of n.

/*
The bitwise AND operator (&) compares each bit of the first operand to the corresponding bit of the second operand. 
If both bits are 1, the corresponding result bit is set to 1. 
Otherwise, the corresponding result bit is set to 0.*/

#include<iostream>
main(){
    int64_t a,b;
    cin>>a;
    //this will cout YES if there is still SOMETHING left. 
        //b-1 will be different from b, (see up for how)
    while(cin>>b) cout<<(b&b-1?"YES\n":"NO\n");}

// main(){
//     int t;
//     int64_t x;
//     for(cin>>t; t--;){
//         cin>>x;
//         int i=3;
//         if(x/2<i) {cout<<"NO\n";continue;}
        
//         //odd number, automatically yes
//         //if(abs(round(x/2)-(x/2))>0.0000001||x==3) {cout<<"YES\n"; continue;}
        
//         if(x%2!=0||x==3) {cout<<"YES\n"; continue;}
//         while(i<(x/2)){
//             if(x%i==0) {cout<<"YES\n"; break;}
//             else if(i==ceil(x/2)) {cout<<"NO\n"; break; }
//             i+=2;
//         }            
        
//     }
// }