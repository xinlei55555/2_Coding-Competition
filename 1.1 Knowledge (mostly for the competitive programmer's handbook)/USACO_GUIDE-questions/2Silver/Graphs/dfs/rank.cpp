#include <bits/stdc++.h>
typedef  long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
using namespace std;

vector<vector<ll>> games;
vector<bool> vis;
// unordered_set<ll> in_cycle;
//basically, just looping inside, and for each element, if it is found again, means that it is a cycle.
ll ans=0;
bool found;

//simple O(n^2) approach
void dfs(ll i, ll initial){

    vis[i]=true;
    if(found) return;
    //somehow, I had to put this outside the loop. I think its because if I find something, I want it to stop the loop, not to continue for the other elements afterwards.
    if(i==initial) {ans++; found=true; return;}


    for(auto x: games[i]){
        if(!vis[x]) {
            dfs(x, initial);
        }
    }
}

int main(){
    ll k,n;
    cin>>n>>k;
    games.resize(n+1, vector<ll>({}));
    vis.resize(n+1, false);
    //I am setting at one more than the real, so that I can have the indexes as the value themselves
    
    ll a,b,c,d;
    for(int i=0;i<k;i++){
        cin>>a>>b>>c>>d;
        //i am keeping track of the wins
        if(c>d) {games[a].push_back(b);}
        else {games[b].push_back(a);}
    }

    // for every single element.
        //important: I am starting at one, so that I can exclude the first element.
    for(int i=1;i<=n;i++){
        // vis.assign(n+1, false);
        // vis[0]=true;
        //or
        fill(vis.begin()+1, vis.end(), false);
        found=false;
        
        for(auto x: games[i]) dfs(x, i);
    }
 
    cout<<ans;
    return 0;
}