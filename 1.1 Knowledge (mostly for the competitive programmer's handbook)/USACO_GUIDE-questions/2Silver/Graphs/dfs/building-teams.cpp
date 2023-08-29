#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";
vector<vector<ll>> adj;
vector<bool> vis;
vector<ll> team;

bool id=false;
void dfs(ll idx, bool ind){
    vis[idx]=true;
    team[idx]=ind;
    // ind=(ind==1? 2:1);

    for(auto x: adj[idx]){
        debug(idx)
        debug(ind)
        debug(x)
        debug(team[x])
        //if the elements that are looping are NOT the opposite, then it can't be in the same team!
            //only check for those who have been visited, and check if the visited elements that are friend with the current element have NOT been marked correctly
        if(vis[x]==true && team[x]==ind) {id=true; break;}//(ind == 2 && team[x] == 1) ||(ind == 1 && team[x] == 2)) {cout<<"IMPOSSIBLE";id=true; return;}
        else if(vis[x]==false){
            //!ind, makes 0 if 1 and 1 if 0
            dfs(x, !ind);
        }
    }
}
int main(){
    ll t, n,i;
    cin>>t>>n; 
    debug(t)
    debug(n)
    ll a,b;
    adj.resize(t);
    team.resize(t);
    vis.resize(t, false);
    debug("HI")
    for(i=0;i<n;i++){
        cin>>a>>b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
        
        //checking if impossible
            // if a thing has more than 2 elements, than there are three, meaning that two of them will be together.
        // if(adj[a].size()>2 || adj[b].size()>2) {cout<<"IMPOSSIBLE"; return 0;}
    }
    for(i=0;i<team.size();i++){
        if(id==true) break;
        if(vis[i]==false) dfs(i, 1);
    }

    if(!id) for(auto x: team) cout<<x+1<<" ";

    //!print at the end, don't try to end the loop earlier, it's a pain
    else if(id) cout<<"IMPOSSIBLE";
    return 0;
}