#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<char> arr(n);ll one = 0;
        for(int i=0;i<n;i++){cin>>arr[i]; if(arr[i] == '1') one++;}
        if(one == n) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}