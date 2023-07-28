#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream cout("cowqueue.out");
    ifstream cin("cowqueue.in");
    int n; cin>>n;
    //!OK NEVER TRUST THAT A MAP IS PROPERLY SORTED!!!!! 
    //map<int, int> queue;
    vector<pair<int,int>> queue;
    int a, b;//!i use a map, not an unordered map, since the map helps me sort every element out.
    while(n--){
        cin>>a>>b;
        queue.push_back({a,b});
        //queue.insert({a,b});
    }sort(queue.begin(), queue.end());
    int curr=0;
    for(auto x:queue){
        curr=max(curr, x.first);
        curr+=x.second;
    }
    cout<<curr;
    return 0;
}