#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

vector<vector<ll>> same;
vector<vector<ll>> diff;
vector<ll> ans;
vector<bool> vis;

void dfs(ll i, ll curr, bool same){
    vis[i]=true; 
    ans[i]=curr;
    for(auto x:same[i]){
        if(!vis[x]){

        }
    }
}

int main(){
    ifstream cin("revegetate.in");
    ofstream cout("revegetate.out");
    ll i,n,m,a,b;
    cin>>n>>m;
    char c;
    same.resize(n);
    diff.resize(n);
    ans.resize(n);
    vis.resize(n);


    for(i=0;i<m;i++){
        cin>>c>>a>>b;
        if(c=='S') {
            same[a].push_back(b);
            same[b].push_back(a);
        }
        else{
            diff[a].push_back(b);
            diff[b].push_back(a);
        }
    }

    //populate all the "sames"
    for(i=0;i<n;i++){
        if(!vis[i]){
            dfs(i, 0);
        }
    }
    return 0;
}