#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    int i,n;
    cin>>n;
    //i save the value of the curr 
    ll dp [n], mn[n]={0};
    for(i=0;i<n;i++){
        cin>>dp[i];
    }
    mn[1]=mn[0]+abs(dp[1]-dp[0]);
    for(i=2;i<n;i++){
        //in this case, it doesn't matter how the frog got there, as long as the costs
        mn[i]=min(mn[i-1]+abs(dp[i]-dp[i-1]), mn[i-2]+abs(dp[i]-dp[i-2]));
    }
    cout<<mn[n-1];
    return 0;
}