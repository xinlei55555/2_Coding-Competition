#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    ll n, k; cin>>n>>k;
    set<ll> a;
    for(int i=0;i<k;i++){
        ll x; cin>>x;
        a.insert(x);
    }
    for(int i=0;i<k;i++){
        ll x; cin>>x;
        if(a.find(x) == a.end()){
            n-=2;
        }
    }


    
    cout<<max(0LL, n)<<"\n";

    return 0;
}
