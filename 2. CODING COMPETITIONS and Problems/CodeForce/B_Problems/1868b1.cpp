#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;int sum=0;
        int arr[n]; 
        //array of bits that are size 32
        bitset<32> bit[n]; for(int i=0;i<n;i++){cin>>arr[i]; sum+=arr[i]; bit[i]=bitset<32>(arr[i]);}
        //since we are working with powers of 2, we can work with bitmasks.
        //then, check if the number of elements that are 2^0 is either nobody, or everybody.
        
        
    }
    return 0;
}