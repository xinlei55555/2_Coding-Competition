/*
Following the editorial, we build a prefix sum array $p$ on the existing array.

We know that subarray formed by $[l, r)$ is a good subarray if r-l=element_at_r- element_at_l
Rearranging this equation leads to $p_r-r=p_l-l$, so we build
a map (sum_dist) on values of $p_i-i$ for all valid $i$.

Then, we iterate over all values of the map and check how many unordered pairs
we can build with the number of values of $i$ that have the same value of $p_i-i$

*/
//!codeforce doesn't care about cerr
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> arr(n+1, 0); char val;
        for(int i=1;i<=n;i++) {cin>>val; arr[i]=(val-'0')+arr[i-1];}

        ll first=0, second=1, answer=0;
        
            //if(arr[second]-arr[first] == second-first)//
            //if you reorder, it becomes arr[second]-second == arr[first]-first;
        unordered_map<ll, ll> sum_dist;
        for(int i=0;i<=n;i++){
            sum_dist[arr[i]-i]++;
        }
        ll ans=0;
        for(auto it=sum_dist.begin();it!=sum_dist.end();it++){
            //!OMg THIS IS COMBINATORIcs --> n choose 2
             ans+=((it->second)*((it->second)-1)/2);cerr<<it->first<<" "<<it->second<<" | ";
        }
        cout<<ans<<"\n";cerr<<"\n";
    } 
    return 0;
}














//!old method, too slow
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio;
//     cin.tie(0);

//     long long t, n,i,j;
//     char s[100001];
//     long long arr[100001];
//     unordered_map<long long, long long> diff;
//     cin>>t;
//     while(t--){
//         long long ans=0;
//         cin>>n;
//         cin>>s[0];
//         arr[0]=s[0]-'0';
        
//         diff.insert({arr[0],1});

//         //if the first element alone is 1
//         //if(arr[0]==1) ans++;

//         for(i=1;i<n;i++){
//             cin>>s[i];
//             arr[i]=s[i]-'0';
//             arr[i]+=arr[i-1];
            
//             //that means that the element itself represents the sum of ALL elements before
//             // if(i+1==arr[i]) ans++;

//             //looping to determine how many good subarrays;
//             // for(j=0;j<i; j++){
//             //     // arr[i]-arr[j] is the sum of the elements between the two indexes
//             //     if((i-j)==(arr[i]-arr[j])) ans++;
//             // }

//             j=arr[i]-i;
//             //other method
//             if(diff.find(j)==diff.end()) diff.insert({j,1});
//             else{
//                 diff[j]++;
//             }

//         }
//         for(auto x:diff) {ans+=(x.second-1); cout<<x.first<<" "<<x.second<<"\n";}
//         // for(i=0;i<n;i++) cout<<arr[i]<<" ";
//         // cout<<"\n";
//         cout<<ans<<"\n";
//         diff.clear();
//     }

//     return 0;
// }