#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    ifstream cin("hps.in");
    ofstream cout("hps.out");

    ll n, k, i;
    cin>>n>>k;
    char arr[n];

    //k will be the number of times she will change
    //the n will represent the number of games played
        //k will represent how many times bessie used her changing powers
        //and the last dimension represents the current symbol bessie must use.
    // and then, you can just calculate every possibility. At the end, you can choose amongst all the possibilities the one that had the best outcome
    ll dp[n][k][3];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        
    }
    return 0;
}