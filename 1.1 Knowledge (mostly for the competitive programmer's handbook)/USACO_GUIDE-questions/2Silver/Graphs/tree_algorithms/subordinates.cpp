#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

ll n, val, ans[200001];
vector<ll> a[200001];

ll traverse(ll idx){
    // vector<ll> indexes;

    //sum represents the number of nodes under the current node, including itself.
    // for(ll i=1;i<=n;i++){
    //     if (a[i]==idx){
    //         indexes.push_back(i);
    //     }
    // }
    ll sum=1;
    for(ll x: a[idx]){
        sum+=traverse(x);
    }
    //if there is nothing to traverse, this means that we are at the end of the current node;
    ans[idx]=sum-1;
    return sum; 
}
int main(){
    cin>>n;
    //improvement, instead of inputting the value of the node previously, just add it to a list
    for(int i=2;i<=n;i++){
        cin>>val;
        a[val].push_back(i);
    }
    traverse(1);
    for(int i=1; i<=n;i++) cout<<ans[i]<<" ";
    return 0;
}