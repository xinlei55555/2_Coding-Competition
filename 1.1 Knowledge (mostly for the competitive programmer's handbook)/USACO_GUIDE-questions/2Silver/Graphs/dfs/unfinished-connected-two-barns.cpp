#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

vector<ll> adj[100001];
vector<bool> vis;
set<ll> existed;

void dfs(int i){
    vis[i]=true;
    for(auto x:adj[i]){
        if(vis[x]==false){
            dfs(i);
        }
    }
}

int main(){
    ll t,n,i,m,a,b;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(i=0;i<m;i++){
            cin>>a>>b;
            existed.insert(a);
            existed.insert(b);

            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        //try to visit the most tests possibles;
            //find the two largest gaps in the vis vector
            //if only one gap, separate the gap into two, and add those.
            // else 
            // join the the two gaps
        vis.resize(n+1, false);
        vis[0]=true;
        for(i=0;i<n;i++){
            //not yet visited, and the element is in the list of connections;
            if(vis[i]==false && existed.find(i)!=existed.end()){
                dfs(i);
            }
        }

        //checking for the spaces in vis;
            //i'll run two sliding windows, to determine 
        for(i=0;i<vis.size();i++){
            if(vis[i]==false){

            }
        }
    }
    return 0;
}