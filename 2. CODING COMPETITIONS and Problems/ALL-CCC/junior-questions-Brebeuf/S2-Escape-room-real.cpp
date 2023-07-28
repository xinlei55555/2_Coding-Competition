#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";

ll mx;
//due to the deque and all that, only use BFS when you are trying to find minimal path, for the rest, just use DFS (faster)
    //!here, I created a visited array that simply indicates if a product was already visited.
//don't even need vis!
vector<bool> vis;

//this will be a special way to keep the values. I will keep all values that are at n*m. This will remove the "factor" part. 
vector<vector<ll>> adj;

bool ind=false;

//yet, to practice, I am going to do BFS
void DFS(ll val){
    vis[val]=true;
    if(ind) return;

    //segmentation fault, the code continued to print yes infinitely!
    if(val==mx && !ind){cout<<"yes\n"; ind=true; return;}

    //!always put the rest in else, so that it stops when it finds!
    else {
        for(auto x: adj[val]){
            //RUNTIME ERROR, you can't call on a variable that is larger than the mx!!!!!!!
                //THEREFORE runtime error is when you try to call on a variable that doens't exist, or on an inexistant index.
            if(!vis[x] && x<=mx) DFS(x);
        }
    }
}

int main(){
    ll n, m;
    cin>>n>>m;
    mx=m*n;
    vis.resize(mx+1, false);
    adj.resize(mx+1);//, vector<ll>{});
    ll a;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a;
            adj[i*j].push_back(a);
        }
    }

    DFS(1);

    if(!ind) cout<<"no\n";
    return 0;
}