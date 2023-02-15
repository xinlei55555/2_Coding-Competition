#include <bits/stdc++.h>
using namespace std;

#define debug(x) //cerr<<#x<<" "<<x<<"\n";
typedef long long ll;


int main(){
    ll n, m, i;
    cin>>n>>m;

    //since this whole question is one-indexed, I am going to define everything as n+1, so to ignore index 0
        //parent tells me what is the previous node
        //level tells me how many nodes have passed

        //!also, start the level at INT_MAX, because when you are going to loop through, you are going to add 1 to level[x], which will start at 0
    vector<ll> parent(n+1), level(n+1, INT_MAX);
    vector<vector<ll>> adj(n+1); 
    ll a,b;
    for(i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b), adj[b].push_back(a);
    }
    //BFS
    deque<ll> d;
    d.push_back(1);
    level[1]=1;
    while(!d.empty()){
        ll x=d.front();
        d.pop_front();

        if(x==n) break;

        for(auto el:adj[x]){
            //!I do need to keep if the element were visited or not. In this case, to know, I can just look at if the value is still INT_MAX
            if(level[el]==INT_MAX){
                d.push_back(el);

                //!yes, for the first element the parent of the element will be the element itself.
                parent[el]=x;

                //instead of ++, which could mean that if many elements reach the same object, it will add infinitely
                    //just put curr ++;
                level[el] = level[x]+1;
 
            }
       }
    }
    //at the end, just check the element n;
    if(level[n]==INT_MAX) cout<<"IMPOSSIBLE\n";
    else{
        cout<<level[n]<<"\n";

        //loop backwards
        vector<ll> path;
        path.push_back(n);
        debug(n)
        while(path.back()!=1){
            //!std::bad_alloc means I am having an infinite for loop
debug(path.back())
            path.push_back(parent[path.back()]);
            
        }
        //since I stop before 1

        // path.push_back(1);
        reverse(path.begin(), path.end());
        for(auto x: path) cout<<x<<" ";
        
    }

    return 0;
}