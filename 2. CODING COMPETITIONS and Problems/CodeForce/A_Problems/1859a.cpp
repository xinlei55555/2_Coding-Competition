#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    int t; cin>>t;
    while(t--){
        ll n, idx=-1; cin>>n;
        vector<ll> a(n, 0), b={}, c={};
        for(int i=0; i<n; i++) {cin>>a[i]; }
        sort(a.begin(), a.end());
        b.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i-1]<a[i]) idx=i;
            if(idx==-1) b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        if(idx==-1) cout<<idx<<"\n";
        else {
            cout<<b.size()<<" "<<c.size()<<" \n";
            for(auto x:b) cout<<x<<" ";
            cout<<"\n";
            for(auto x:c) cout<<x<<" ";
            cout<<"\n";
        }
    }
    return 0;
}