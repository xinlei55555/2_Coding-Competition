#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<"\n";
vector<vector<ll>> adj;
//instead of a vis, the deque is enough. But you also use a distance array.
    //but in my case, I will save the 
ector<vector<

//for BFS, same as DFS, but you add a deque, which tells you what to visit next;
deque<ll> d;

void BFS(ll node){
    d.pop_front();
    
}

int main(){
    //dfs or BFS, lemme try BFS
    ll n,m,i;
    cin>>n>>m;

    vis.resize(n+1);
    vis[0]=true;

    ll a,b;
    for(i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    //technically for BFS, I wouldn't even need a function!
    while(d.size()!=0){
        BFS(d.front());
    }
    
        // cout<<(mn==-1? "IMPOSSIBLE":)
    return 0;
}