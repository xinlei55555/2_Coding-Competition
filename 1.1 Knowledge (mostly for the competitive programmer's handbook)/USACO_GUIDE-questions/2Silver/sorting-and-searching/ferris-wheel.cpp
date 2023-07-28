#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    ll n, mx;
    cin>>n>>mx;
    vector<ll> c(n);
    for(int i=0;i<n;i++) cin>>c[i];
    sort(c.begin(), c.end());

    //go using 2 sliding windows, that keep track from each side
    ll hi=n-1, lo=0, ans=0;
    while(hi>=lo){
        //* if the first and the last value together are smaller than 10
        if(c[hi]+c[lo] <= mx){
            lo++; hi--;
        }

        //*else, just add the largest and continue
        else{
            hi--;
        }
        ans++;
    }
    cout<<ans;
    return 0;

}



//!error, you must read carefully: Here, it is only possible to have 1 or 2 children in the gondola

/*
int main(){
    ll n, mx;
    cin>>n>>mx;
    vector<ll> children(n);
    vector<bool> vis(n, false);
    for(int i=0;i<n;i++) {cin>>children[i];}
    sort(children.begin(), children.end(), greater<int>());
    //knapsack;
    int ans=0, picked=0;
    while(picked<n){
        int curr=0;
        for(int j=0; j<n;j++){
            if(!vis[j] && curr+children[j]<=mx){
                curr+=children[j];
                //! not ==, its =
                vis[j]=true;
                picked++;
            }
        }
        ans++;
    }
    cout<<ans; 
    return 0;
}
*/
