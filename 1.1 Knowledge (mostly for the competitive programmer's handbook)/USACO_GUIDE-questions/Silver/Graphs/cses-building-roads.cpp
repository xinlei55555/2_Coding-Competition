//!solution: https://japlslounge.com/posts/cses/building_roads/1.htm
#include <bits/stdc++.h>
using namespace std;
#define debug(x) // cout<<#x<<" "<<x<<"\n";

vector<int> adj[200001];
bool vis[200001]={false};

void DFS(int i){
    debug(i)
    // if(vis[i]==true) return;
    vis[i]=true;
    //looping and checking all the connected values of this node
    for(int x:adj[i]){
        //skip if already visited
        if(vis[x]==true) continue;

        //I visited (i put this line of code earlier)
        // vis[x]=true;
        //and I directly proceed to finish off the rest of the edges
            //!another way would've been to save a vector<int> to_be_visited, and save the given values in it, then for dfs, search directly from this vector's newest element, for BFS, search from this oldest element
        DFS(x);
    }
}
int main(){
    int n, m, i, a,b;
    cin>>n>>m;
    //!I need to create,n order to save the edges, an adjacency list
        //~an array of vector
        //I am initializing it a size higher, since a and b are 1-indexed.
        //!I could have just used an array, since only one road per element!
    

    for(i=0;i<m;i++){
       cin>>a>>b;
       adj[a].push_back(b);
       adj[b].push_back(a); 

    }
    // for(int i=0;i<n; i++) for(int j=0;j<adj[i].size();j++) debug(adj[i][j])
    //!Note the actual value of the elements will have to be +1;
    //k=n-1-m
    //that's wrong!
    // cout<<n-1-m<<"\n";

    //!solution, I will just loop through all the components using dfs.
        //~if the current component does not have new components that are in connected to it, then we may assume they are disconnected, so we can connect them.
    //looping through the visited array
    vector<int> heads_of_lost;
    //!I start the loop at 1 and end at n, since the values that I am given start at one and end at n;
    for(int i=1;i<=n;i++){
        debug(i)
        debug(vis[i])
        if(vis[i]==false){
            //if vis[i] is false, and that I am looping back here, this means that the component was not connected
            heads_of_lost.push_back(i);
            //then I loop through all the edges of the value
            DFS(i);
        }
    }

    cout<<heads_of_lost.size()-1<<"\n";
    for(int i=0; i<heads_of_lost.size()-1; i++){
        cout<<heads_of_lost[i]<<" "<<heads_of_lost[i+1]<<"\n";
    }
    return 0;
}
    //2d matrix representing the connections between the cities
    // vector<vector<int>> arr(n, vector<int>(n, 0));
    // int val=0;
    // for(i=0;i<m;i++){
    //     cin>>a>>b;
    //     arr[a][b]++;
    //     val++;
    // }
    // int ans=n*n-n-val;
    // for(i=0; i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(arr[])
    //     }
    // }
//     return 0;
// }