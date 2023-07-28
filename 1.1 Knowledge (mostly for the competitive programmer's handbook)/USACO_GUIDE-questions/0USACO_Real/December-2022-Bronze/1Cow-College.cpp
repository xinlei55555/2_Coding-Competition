#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" "<<x<<"\n";

int main(){
    long long i,n; cin>>n;
    long long arr[n];
    for(i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n, greater<int>());
    long long ans=0, val;
    for(i=0;i<n;i++) {ans=max(arr[i]*(i+1), ans); if(ans==arr[i]*(i+1)) val=arr[i];}
    cout<<ans<<" "<<val;
    return 0;
}