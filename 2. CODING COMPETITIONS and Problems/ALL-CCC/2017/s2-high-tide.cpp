#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";

vector<ll> arr;

int main(){
    //sort
    ll i, n;
    cin>>n;
    arr.resize(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    //find middle
    ll mid=floor((n-1)/2);
    // for(auto x: arr) debug(x)
    // j will grow twice as slow.
    debug(mid)
    ll j=0;
    i=0;
    while(i<n){
        if(i%2==0){
            cout<<arr[mid-j]<<" ";
        }
        else{
            j++;
            cout<<arr[mid+j]<<" ";
        }
        i++;
    }
    return 0;
}