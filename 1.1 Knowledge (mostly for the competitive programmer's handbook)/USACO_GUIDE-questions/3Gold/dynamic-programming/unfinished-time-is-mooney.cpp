//just keep a 2d array of all the possible solutions and combinations. Loop through all, and change you max
//~https://usaco.guide/problems/usaco-993-time-is-mooney/solution

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";



int main(){
    ll n, i, m,c;
    cin>>n>>m>>c;
    //!has to end back at city 1
        //check the price for one cycle (a.k.a how much profit)
            //then do the cycle as many times as possible, until no more profits.
    //BFS
        //keep mx
        //+DP
            //keep, for every city: current price, #prices going down
                            //if #prices going down>n, backtrack, stop and print the previous max
    vector<ll> prices (n);
    for(i=0;i<n;i++){
        cin>>prices[i];
    }
    ll a,b;
    adj.resize(n+1, vector<ll> {});
    for(i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    ll sub=pow(num_tours, 2)*c;

    vis.resize(n+1, false);
    vis[0]=true;
    //dfs    
    dfs(1);
        
    
    return 0;
}