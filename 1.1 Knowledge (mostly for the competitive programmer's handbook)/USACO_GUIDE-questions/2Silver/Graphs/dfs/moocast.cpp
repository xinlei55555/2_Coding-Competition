#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

vector<ll> cow[200];
vector<bool> vis;

ll mx=1, curr, n;
bool distance(ll node, ll i){
    return cow[node][2]>=sqrt(pow(cow[node][0]-cow[i][0],2)+pow(cow[node][1]-cow[i][1], 2));
}
void DFS(ll node){
    // debug(node)
    vis[node]=true;
    // for(auto x:vis) debug(x)
    curr++;
    mx=max(mx, curr);
    for(int i=0;i<n;i++){
        if(vis[i]==false && distance(node, i)) DFS(i);
    }
}
int main(){
    ifstream cin("moocast.in");
    ofstream cout("moocast.out");

    ll i, x, y, p;
    cin>>n;
    for(i=0;i<n;i++){
        //x, y, p
        cin>>x>>y>>p;
        cow[i].push_back(x);cow[i].push_back(y);cow[i].push_back(p);        
    }
    
    vis.resize(n);

    //I could try for each element in the cow array, and try to reach all others;
    for(i=0;i<n;i++){
        vis.assign(vis.size(),false);
        //start curr at 0, and it will gradually increase!
        curr=0;
        DFS(i);
    }
    cout<<mx;
    return 0;
}