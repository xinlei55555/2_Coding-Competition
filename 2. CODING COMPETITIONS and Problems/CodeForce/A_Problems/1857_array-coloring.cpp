#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x)  cerr<<#x<<" "<<x<<"\n";

int main(){
    ll t; cin>>t;
    while(t--){
        ll sum=0, n, num_odd=0, num_even=0; cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++) {cin>>a[i]; sum+=a[i]; num_odd+=(a[i]%2!=0); num_even+=(a[i]%2==0);}
        if(sum%2==0){
            if(num_odd%2==0) cout<<"YES";
            else cout<<"NO";
        } 
        if(sum%2!=0){
            cout<<"NO";
        }        
        cout<<"\n";
    }
    return 0;
}