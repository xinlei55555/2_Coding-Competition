#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

unordered_map<ll, vector<ll>> tree; vector<bool> vis;


pair<ll, ll> traverse(ll node, ll depth){
    //answer represents the <max depth, node value>
    vis[node] = true;
    // depth += 1;
    pair<ll, ll> answer = {depth + 1, node};

    // cerr<<answer.first<<" " <<answer.second<<"\n";
    for(auto x: tree[node]){
        if(!vis[x]){    
            pair<ll, ll> tmp = traverse(x, depth);
            answer = (tmp.first>answer.first)? tmp: answer;
        }
        // if (answer.first == tmp){
        //     answer.second = node             
        // } 
    }
    return answer;
}

int main(){
    ll n; cin>>n;
    for(int i=0;i<n-1;i++){
        ll a, b;
        cin>>a>>b;
        if (tree.find(a) != tree.end()){
            tree[a].push_back(b);
        }
        else{
            tree[a] = {b};
        }
        
        if (tree.find(b) != tree.end()){
            tree[b].push_back(a);
        }
        else{
            tree[b] = {a};
        }
    }
    
    // for(auto it: tree){
    // debug(it.first)
    // for(auto x: it.second){
    //     cerr<<x<<" \n";
    // }}
    // map<ll, vector<ll>>::iterator it = tree.begin();
    // while (it != tree.end()){
    //    debug(it->first);
    //    for(auto y: it->second){
    //         cout<<y<<" ";
    //    }
    //    it++;
    // }
    

    //traversing the subtree: 
    //hum, i NEED TO FIND the root, then traverse to the longest depth, and then, traverse again for the final answer.
    //I will just assume that 1 is the root. 
    pair<ll, ll> longest, answer;
    // fill(vis.begin(), vs.end(), 0);
    vis = vector<bool> (n, false);
    longest = traverse(1, 1);
    cerr<<longest.first<<" " <<longest.second<<"\n";

    vis = vector<bool> (n, false);
    answer = traverse(longest.second, 1);
    cout<<answer.second<<"\n";
    return 0;
}