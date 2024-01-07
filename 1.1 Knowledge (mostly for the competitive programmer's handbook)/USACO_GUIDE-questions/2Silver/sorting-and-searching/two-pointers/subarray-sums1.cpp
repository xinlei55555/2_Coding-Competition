#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";

int main(){
    ll n; cin>>n;
    ll sum; cin>>sum;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll first =0, second =0;
    ll curr=arr[0];
    ll answer=0;
    while(first<n and second<n){
        // cerr<<curr<<" "<<"\n";
        debug(first)
        debug(second)
        if(curr==sum){
            debug("HI")
            answer++;
        }
        if(curr>=sum and first<second){
            curr-=arr[first];
            first++;
        }
        else{
            second++;
            curr+=arr[second];
        }
    }
    cout<<answer;
    return 0;
}