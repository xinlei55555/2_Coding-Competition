#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

vector<vector<ll>> adj;
vector<vector<ll>> cows;
vector<bool> vis;

void dfs(ll node){
    vis[node]=true;

    for(ll v: adj[node]){
        dfs(v);
    }
}
int main(){
    ll n, m;
    cin>>n>>m;
    adj.resize(n, vector<ll> ({}));
    cows.resize(n, vector<ll> ({}));
    fill(vis.begin()+1, vis.end(), false);
    ll x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        cows[i][0]=x;
        cows[i][1]=y;

    }
    for(int i=0;i<m;i++){
        cin>>x>>y;
        x--;y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }    

    //part 1: check for cycles
    for(auto x: adj){
        dfs(x);
    }
    //part 2: check for each cycle, what is the lowest perimeter;
    

    return 0;
}