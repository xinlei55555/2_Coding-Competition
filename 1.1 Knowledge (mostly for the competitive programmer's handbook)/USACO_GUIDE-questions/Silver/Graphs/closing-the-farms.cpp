#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";

vector<int> adj[3001];
vector<bool> vis;
unordered_set<int> passed_val;

void DFS(int i){
    // for(auto x:vis) debug(x)

    //debug("\n")
    vis[i]=true;
    for(auto x:adj[i]){
        if(vis[x]==false && passed_val.find(x)==passed_val.end()){
            DFS(x);
        }
    }
}

string check_connec(int first_node){
    //debug(first_node)
    // debug(passed_values)
    DFS(first_node);
    //for(auto x:vis) debug(x)
    //there will always be one left, which is node at position 0...
    if(count(vis.begin(), vis.end(), false) - passed_val.size() > 0){
        return "NO\n";
    }
    return "YES\n";

}

int main(){
    ll n, m, i, a, b;
    ifstream cin("closing.in");
    ofstream cout("closing.out");
    cin>>n>>m;
    //adjacency list;
    for(i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    //start with if the farm is initially fully connected;
        //start from any node, should be able to reach all next nodes
    vis.resize(n+1, false);
    vis[0]=true;
    cout<<check_connec(1);

    //dfs for the rest of the closures
    for(i=0;i<n-1;i++){
        // debug(i)
        //all visited values are false;
            // fill(vis.begin(), vis.end(), false);
        vis.assign(vis.size(),false);
        vis[0]=true;

        //is the i-th farm fully connected after the a-th barn's closure?
        cin>>a;
        passed_val.insert(a);
        //this is not a good way to save the values that must not be passed!
            //instead, save them into a set!
        //adj[a].clear();

        for(int j=1;j<=n; j++){
            //if the first node is in the set of passed_val
            if(passed_val.find(j)==passed_val.end()){ 
                cout<<check_connec(j);
                break;
            }
        }
    }
    
    return 0;
}