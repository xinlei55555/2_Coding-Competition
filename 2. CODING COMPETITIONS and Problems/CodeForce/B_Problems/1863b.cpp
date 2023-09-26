#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        unordered_set<int> prev;
        vector<int> p(n, 0); int ans=0;
        for(int i=0;i<n;i++){
            cin>>p[i];
            if (p[i]==n) {prev.insert(p[i]); continue;}
            else {
                //!don't use ++, ig you mean +1
                // cerr<<(prev.find(p[i]+1)!=prev.end())<<"\n";
                if(prev.find(p[i]+1)!=prev.end()) ans++;
                prev.insert(p[i]);
            }
        }
        // for(auto x: prev) cerr<<x<<" ";
        // for(int i=0;i<n;i++) cerr<<p[i]<<" ";
        cout<<ans<<"\n";
    }

    return 0;
}