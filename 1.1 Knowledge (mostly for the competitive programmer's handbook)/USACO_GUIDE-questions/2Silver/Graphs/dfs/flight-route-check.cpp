//!complete solution is that you only need to check 1 node. If that node can reach everything else (from both u->v and v->u way, then every node can reach it!)
    //then, if that node can't reach everything, just print that node, and one other node it did not reach!
//!The theorem used here is that if one vertex can both reach and be reached by all others, then every vertex in this graph can reach all others.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

vector<ll> adj[200001];
vector<ll> rev[200001];
vector<bool> vis;

//depth first search;
void DFS(int i){
    vis[i]=true;
    for(auto x: adj[i]){
        if(!vis[x]){
            DFS(x);
        }
    }
}

//!next time, instead of using a whole new function, my function could simply take an index.
    //then, in the adj vector itself, I could have pushed to two indexes, which would represent the reverse and the  normal order of the elements. 
void DFS_rev(int i){
    vis[i]=true;
    for(auto x: rev[i]){
        if(!vis[x]){
            DFS_rev(x);
        }
    }
}

int main(){
    ll n, m, i;
    cin>>n>>m;
    ll a,b;
    for(i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b);

        //adding to the reverse version;
            //!if you can't reach a node in the reverse version of the graph from a first node, that means that
            //you cannot go from that node to another.
        rev[b].push_back(a);
    }
    //checking using the normal adj,starting from the first node. 
        //~If I can reach every other node using that first node, then I go into the revers
        //~if I can't reach every other node, print the node I can't reach, and close the loop;
    
    //I am setting new elements to false;
    vis.resize(n+1, false);
    vis[0]=true;   

    //run DFS from 1

    DFS(1);

    //checking if anyting left
        //!don't forget the equal, since we are dealing with more than 1 (0 is included)
    for(i=0;i<=n;i++){
        if(!vis[i]){
            cout<<"NO\n"<<1<<" "<<i<<"\n";
            return 0;
        }
    }

    vis.assign(vis.size(), false);
    vis[0]=true;

    DFS_rev(1);
    for(i=0;i<=n;i++){
        if(!vis[i]){
            cout<<"NO\n"<<i<<" "<<1<<"\n";
            return 0;
        }
    }

    cout<<"YES\n";
    return 0;
}
//!basically, you are exceeding time-limit!
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define debug(x) //cerr<<#x<<" "<<x<<"\n";

// //min is the minimum number of values that are connected, if mn=n, then everything is connected, for everything
// ll n, m,i,a,b, curr, mn=1000001;
// vector<ll> adj[200001];
// vector<bool> vis ;

// void DFS(int i){
//     vis[i]=true;
//     // for(auto x:vis) debug(x)
//     curr++;
//     for(ll x: adj[i]){
//         if(vis[x]==false){
//             DFS(x);
//         }
//     }

// }
// int main(){
//     cin>>n>>m;
//     for(i=0;i<m;i++){
//         cin>>a>>b;
//         //one way flight!
//         adj[a].push_back(b);
//     }
    
//     vis.resize(n+1, true);
//     // for(int i=0;i<=n;i++) {for(int j=0;j<adj[i].size();j++) { debug(i) debug(adj[i][j])}}
    
//     //trying all, and seeing if there is a configuration where all the vis are visited.
//     for(i=1;i<=n;i++){
//         curr=0;
//         // vis.assign(assign.size(), false);
//         //all, except the first value, which remains true (0 is true)
//         fill(vis.begin()+1, vis.end(), false);

//         //b will be the previous start node
//             //a is the start node of the configuration where there were the most traversed elements
//         b=i;
//         // cerr<<"first node: ";
//         debug(i)
//         DFS(i);

//         mn=min(curr, mn);

//         //meaning that the minimum is reaching everything
//         if(mn==n) continue;

//         //saving a value that has not been reached;
//         for(int j=0;j<vis.size();j++){
//             if(vis[j]==false) {
//                 debug(j)
//                 a=j;
//                 break;
                
//             }
//         }
//         debug(a)
//         debug(b)
//         debug(mn)
        
//     }
    
//     if(mn==n) {cout<<"YES\n"; return 0;} 
//     cout<<"NO\n"<<b<<" "<<a;
//     return 0;
// }