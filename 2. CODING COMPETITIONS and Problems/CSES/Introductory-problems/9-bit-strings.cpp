
//basically, I found this solution online. But you cannot compute directly 2^something very large, and expect modulo to work.
    //instead, you can run a loop to calculate the modulo
    //!https://japlslounge.com/posts/cses/bit_strings/1.htm
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, mod = 1E9+7;
    cin>>n;
    //!to avoid overflow, the value A % mod, A must be smaller than 2^63

    //!When using a power, always use the static_cast<int> to transform things into ints.
    // cout<<(static_cast<int>(pow(2,n))%mod);

//I will use the following two properties of modulo
    //!(A*B) % MOD = ((A % MOD) * (B % MOD)) % MOD
    //!a^b mod m = ((a mod m) ^ b) mod m
    int answer=1;
    for(int i=0;i<n;i++){
        answer*=2;
        answer%=mod; 
    }
    cout<<answer;



    // cout<< static_cast<int>(pow((2%mod), n)) % mod;
    return 0;
}   