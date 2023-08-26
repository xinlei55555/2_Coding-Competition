#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll  n, m, d, mx; vector<ll> arr;

void solve(ll prev_idx, ll num_vis, ll prev_score, ll curr_idx){
    if(curr_idx>=n) return;
    
    //either skip, or continue
    solve(prev_idx, num_vis, prev_score, curr_idx+1);
    
    prev_score+=arr[curr_idx]-(curr_idx-prev_idx)*d;
    if(num_vis==m) {mx=max(mx, prev_score);cerr<<mx<<" "; return ;}

    solve(prev_idx, num_vis+1, prev_score, curr_idx+1);
}

int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m>>d;
        arr.assign(n, 0);
        mx=-1e10;
        for(int i=0;i<n;i++) cin>>arr[i];
        
        for(int i=0;i<n-m;i++){
            solve(i, 1, arr[i]-(i*d), i+1);
        }
        cout<<mx<<"\n";cerr<<"\n";
        arr.clear();
    }
    return 0;
}