#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll arr[n]; cin>>arr[0] >>arr[1];
        // ll ans=1, prev=arr[1], prev_num=1, next_num=1;

        //!! AA THIS IS WHAT I DID WRONG, I should have kept the number of elements in each layer, since the chunks of sorted can occur under a every element of the layer!
        // vector<int> layers = {1}
        // vector<int> layers   
        for(ll i=2;i<n;i++){
            cin>>arr[i];
            //the previous is the lowest of the level
            if(prev>arr[i]) {
                // vector<int> prev={};
                prev_num--;
                if(prev_num<=0) {ans++;prev_num=next_num;next_num=0;}
            }
            else{
                next_num++;
            }
            prev=arr[i];
            
        }  
        if(n==1) cout<<0<<"\n";
        cout<<ans<<"\n";
    }
    return 0;
}