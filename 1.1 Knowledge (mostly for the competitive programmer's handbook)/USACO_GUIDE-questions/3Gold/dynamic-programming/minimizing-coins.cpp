#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";


int main(){
    const int MOD = (int) 1e9 + 7;
    //error, numbers were too large!

    ll n, i, c, j;
    cin>>n>>c;
    ll coins[n];
    for(i=0; i<n;i++){
        cin>>coins[i];
    }

    //dp[i] represents the number of ways you can reach a certain place
    //the size of dp should be the target sum
    vector<ll> dp (c+1, 0);

    for(i=1;i<=c;i++){
        for(j=0;j<n;j++){
            if(i==coins[j]) dp[i]++;
            if(i-coins[j]>0){
                //the number of ways to reach the given coin is the sum of all the ways that (current coin-all the posisble coins)
                dp[i]+=dp[i-coins[j]];
                dp[i] %= MOD;

                // if(dp[i]<0) {debug(dp[i-coins[j]]) 
                // debug(dp[i])
                // debug(i-coins[j])
                // debug(coins[j])}
            }
        }
    }
    // for(auto x: dp) debug(x)
    cout<<dp[c];
    return 0;
}