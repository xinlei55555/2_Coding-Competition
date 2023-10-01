#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    ll n, a,b; bool at=false, bt=false;
    cin>>n>>a>>b;
    // vector<ll> arr[n];
    ll el;
    ll ans=0;
    for(int i=0;i<n-1;i++){
        cin>>el;
        if(el==a) at=true;
        if(el==b) bt=true;
        if(el<a || el>b) ans=-1;
        // debug(at)
        // debug(bt)
    }
    if(ans==-1 || (!at && !bt)) cout<<-1;
    else if(!at) cout<<a;
    else if(!bt) cout<<b;
    else{
        for(int i=a;i<=b;i++) cout<<i<<"\n";
    }

    return 0;
}