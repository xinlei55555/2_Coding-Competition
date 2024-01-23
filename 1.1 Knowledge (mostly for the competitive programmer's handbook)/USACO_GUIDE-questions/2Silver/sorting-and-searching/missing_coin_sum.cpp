#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
int main(){
    //first sort, then
    //prefix sum
    //then start at 1, and check for the next sum that is not contiguous
    //store all the sums in a set? then loop and check if sum is in the set?

    //nvm, one can convince oneself using induction that if a given answer can be attained by summing all element before, then all elements at ans + ans-1 can be attained.

    ll n, ans = 1; cin>> n;
    vector<ll> arr (n); 
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    ll x;
    for(int i=0;i<n;i++){
        x = arr[i]; 
        if(ans >= x) ans += x;
        else {cout<<ans<<"\n"; return 0;}
        // debug(ans)
    }
    cout<<ans<<"\n";
    return 0;
}