#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    ll n, lph;
    cin>>n>>lph;
    vector<ll> lines(n);
    for(int i=0;i<n;i++){
        cin>>lines[i];
    }
    sort(lines.begin(), lines.end());
    ll ans=0, total=0;
    for(int i=0; total+lines[i]<=lph*5 && i<n;i++){
        total+=lines[i];
        ans++;
        // debug(total)
        // debug(ans)
    }
    cout<<ans;

    return 0;
}