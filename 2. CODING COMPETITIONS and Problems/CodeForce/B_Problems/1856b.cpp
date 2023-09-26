#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t; cin>>t;while(t--){
        ll n, sum=0; cin>>n;
        ll arr[n];
        // unordered_set<ll > el;
        //I wanna count how many 1s appear, because those are the ones that I can't change
        ll ones=0;
        for(ll i=0;i<n;i++) {cin>>arr[i];ones+=(arr[i]==1);sum+=arr[i];}
        bool answer=true;
        //you need a certain number of elements to cover for if some are missing.
        if(n==1 || ((sum-=n)<ones))answer=false;
        (answer)?cout<<"YES\n":cout<<"NO\n";
         
    }
   return 0;
}