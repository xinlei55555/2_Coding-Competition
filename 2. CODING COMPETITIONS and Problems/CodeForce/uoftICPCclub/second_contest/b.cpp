#include <bits/stdc++.h>
using namespace std;
// #define INF 300000001
typedef long long ll;

//!!ERROR< gotta use Longlong, not int
int main(){
    ll t; cin>>t;
    while(t--){
        ll w, h; cin>>w>>h;
        ll hmx=0, wmx=0;
        //x
        for(ll i=0;i<2;i++){
            ll k; cin>>k;
            ll arr[k];
            for(ll i=0;i<k;i++){cin>>arr[i];}
            wmx=max(wmx, arr[k-1]-arr[0]);
        }
        //y
        for(ll i=0;i<2;i++){
            ll m; cin>>m;
            ll ar[m];
            for(ll i=0;i<m;i++){cin>>ar[i]; }
            hmx=max(hmx, ar[m-1]-ar[0]);
        }
        cout<<max(hmx*w, h*wmx)<<"\n";

    }
    return 0;
}