#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n], b[n]; 
        cin>>arr[0];
        b[0]=(arr[0]==1)?2:1;
        for(int i=1;i<n;i++){
            cin>>arr[i];
            // cerr<<i<<"\n";
            b[i]=(arr[i]==b[i-1]+1)?arr[i]+1: b[i-1]+1;
            // cerr<<b[i]<<" ";
        }
        // sort(arr, arr+(sizeof(arr)/sizeof(int)));
        cout<<b[n-1]<<"\n";
    }
    return 0;
}