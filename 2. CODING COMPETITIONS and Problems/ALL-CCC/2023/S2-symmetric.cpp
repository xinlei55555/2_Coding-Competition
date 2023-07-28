#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";

int main(){
    ll i,n,j,k,f;
    cin>>n;
    vector<ll> arr(n);

    //always skip the first element
    vector<vector<ll>> diff(n, vector<ll> (n, 0));

    for(i=0;i<n;i++){
        cin>>arr[i];

    //I skip the first element (j=0, since min is always 0)
        
    }
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            diff[j][i-(j)]=abs(arr[i]-arr[i-(j)]);
            
            if(j>=3) {
                k=j-2;
                f=1;
                debug(k)
                debug(f)
                // while(k>=0){
                    diff[j][i-j]+=diff[k][i-(j)+f];
                    // debug(i-j+f)
                    // debug(j-k)
                    // debug(diff[i-j+f][j-k])
                    k-=2;
                    f++;
                // }
            }
        }
        
    }
        
    // for(i=0;i<n;i++) {
    //     debug(i)
    //     for(j=0;j<n;j++) {
    //         cerr<<diff[i][j]<<" ";
    //     }
    //     cerr<<"\n";
    // }

    for(i=0;i<n;i++){
        ll mn=INT_MAX;
        for(j=0;j<n-i;j++){
            mn=min(mn, diff[i][j]);
        }
        cout<<mn<<" ";
       // diff[i].begin()+(n-i))<<" ";
    }


    
        
    return 0;
}