#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

// two things.  
unordered_map<ll, vector<ll>> tree; 

// instead of saving the "visited value", I can use that as the maximum value of the given height.
// just like in the surjection in the CSC240 exam...
vector<ll> vis;

void dfs(ll node){
    for(ll n: tree[node]){
        // update the value of the position in the list
        if(vis[n] == -1){
            vis[n] = vis[node] + 1;
            dfs(n);
        }
    }
}

int main(){
    ll n, a, b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(tree.find(a) != tree.end()){
            tree.insert({a, {}});
        }
        if(tree.find(b) != tree.end()){
            tree.insert({b, {}});
        }
        tree[b].push_back(a);
        tree[a].push_back(b);
    }
    vis.assign(n+1, -1);

    vis[1] = 1;
    dfs(1);

    // then, find the maximum in the list between 1 and n.
    ll x = 0, idx = 1;
    for(int i=1;i<=n;i++){
        x = max(x, vis[i]); 
        if(x == vis[i]){
            idx = i;
        }
    }
    

    // then reassign, and restart the dfs.
    vis.assign(n+1, -1);
    vis[idx] = 0;
    debug(idx)

    dfs(idx);
    x = 0, idx = 1;
    for(int i=1;i<=n;i++){
        x = max(x, vis[i]); 
        if(x == vis[i]){
            idx = i;
        }
    }
    // for(auto elmn: vis){debug(elmn)}
    cout<<vis[idx]<<"\n";
    return 0;
}
