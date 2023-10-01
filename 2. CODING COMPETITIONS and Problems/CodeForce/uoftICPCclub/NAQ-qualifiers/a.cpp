#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
bool cmp(vector<ll> a, vector<ll> b){
    return a[2]<b[2];
}
int main(){
    ll n, k, c;
    cin>>n>>k>>c; 
    vector<vector<ll>> arr; 
    unordered_map<ll, ll> ts;
    // vector<ll> (1000001);
    vector<vector<ll>> ans;
    int j=0;
    for(int i=0;i<n;i++){ 
        ll a, b;
        cin>>a>>b;
        
        if(ts.find(b)==ts.end()) {
            if(j<k) {ans.push_back({a, b, i}); j++; ts.insert({b, 1});}
            else arr.push_back({a,b, i});
            
        }
        else {
            if(ts[b]<c){
                if(j<k) {ans.push_back({a, b, i}); j++;ts[b]++;}
            }
            else {arr.push_back({a,b, i});}
        }
    } 
    ll insert=0;
    for(int i=0;i<(k-j); i++){
        ans.push_back(arr[insert]);
        insert++;
    }
    sort(ans.begin(), ans.end(), cmp);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<"\n";
    }
    // for(int i=0;i<k;i++){
    //     arr[i]
    // }
    // ll exceptions=0;
    // for(auto x: ts){
    //     exceptions += c-x.second;
    //     // debug(exceptions)
    // }

    // vector<ll> all(100001, 3);
    // vector<ll> ans;
    // for(int i=0;ans.size()<=k && i<n;i++){
        
    //     if(all[arr[i][1]]-1<=0){
    //         if(exceptions <= 0) continue;
    //         else exceptions--;
    //     }
    //     ans.push_back(arr[i][0]);
    //     debug(exceptions)

    // }
    // for(auto x: ans) cout<<x<< "\n";

    
    return 0;
}