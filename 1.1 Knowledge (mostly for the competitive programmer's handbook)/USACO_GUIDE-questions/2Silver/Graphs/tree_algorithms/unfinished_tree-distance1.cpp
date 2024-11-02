#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#debug(x) cerr<<#x<<" "<<x<<"\n";

unordered_map<ll, vector<ll>> tree;
vector<ll> vis;
vector<ll> ans;

// key observations:
// if a vertex has a longest path to another edge, then it is mutual.
void dfs(){

}


int main(){
    ll n, a, b;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a>>b;
        if(tree.find(a) != tree.end()){
            tree.insert({a, {}});
        }
        if(tree.find(b) != tree.end()){
            tree.insert({b, {}});
        }
        tree[a].push_back(b);
        tree[b].push_back(a);

        //probbaly dfs...
        dfs(1)
    }

    return 0;
}