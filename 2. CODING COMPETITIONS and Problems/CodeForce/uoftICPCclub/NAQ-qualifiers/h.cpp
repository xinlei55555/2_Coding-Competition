#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    long long n, k, p;
    cin>>n>>k>>p;
    //ceil works best for double, not for long long
    ll a = (((n-1)/p)+1);
    // debug(n/p)
    // debug(a)
     
    //  cout<<k-a<<"\n";
    // debug(a)
    
    set<ll> ans; 
    for(int i=1; i<=sqrt(n)+1;i++){
        // debug(i)
        if(n%i==0) {
            if(i>=a && i<=k) {ans.insert(i);} 
            if(n/i<=k && n/i>=a) {ans.insert(n/i);}
        }
        // for(auto x: ans) debug(x)
    }
    cout<<ans.size()<<" \n";
    for(auto x: ans) cout<<x<<"\n";

    return 0;
}