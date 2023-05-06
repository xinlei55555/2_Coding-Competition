#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";


int main(){
    ll i,n, ans=0;
    cin>>n;
    vector<ll> arr(n), arr2(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            ans+=3;
            if(i>=1 && arr[i-1]==1) ans-=2;
        } 
    }
    
    for(i=0;i<n;i++){
        cin>>arr2[i];
        if(arr2[i]==1){
            ans+=3;
            if(i>=1 && arr2[i-1]==1) ans-=2;
            if(arr[i]==1 && i%2==0) ans-=2;
        } 
    }

    cout<<ans;
    return 0;
}