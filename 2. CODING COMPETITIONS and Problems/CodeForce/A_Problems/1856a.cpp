#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];int mx=-1;
        //!HE REDUCES THE WHOLE ARRAY AT ONCE!! CHECK THE PROMPT BETTER
        cin>>arr[0];
        for(int i=1;i<n;i++){

            cin>>arr[i];
            if(arr[i]<arr[i-1]){
                mx=max(mx, arr[i-1]);
            } 
        }
        cout<<max(0,mx)<<"\n";
    //     int ans=0, mn=arr[n-1];
    //     for(int i=n-2;i>=0;i--){
    //         mn=min(arr[i], mn);
    //         if(mn!=arr[i]){
    //             ans+=(arr[i]-mn);
    //         }
    //         cerr<<ans<<" ";
    //     }
    //     cerr<<"\n";
    //     cout<<ans<<"\n";
    }
    return 0;
}