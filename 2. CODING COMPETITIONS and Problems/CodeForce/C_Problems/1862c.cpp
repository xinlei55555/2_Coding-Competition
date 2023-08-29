#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int arr1[n], arr2[n];
        // if(n==1) {cin>>arr[0];cout<<"YES\n"; continue;}
        // else{
        //     cin>>arr[0]>>arr[1];
        //     int interval=arr[1]-arr[0]; 
        //     bool works=true ;
        //     for(int i=2;i<n;i++) {cin>>arr[i]; if(arr[i]-arr[i-1]!=interval) {works=false;cout<<"NO\n"; break;}}
        //     if(works) cout<<"YES\n";
        // }
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        int idx=n-1;
        for(int i=1;i<=n;i++){
            while(i>arr1[idx]){idx--;}
            arr2[i-1]=idx+1;
        }
        // for(int i=0;i<n;i++) cerr<<arr2[i]<<" ";
        // cerr<<"\n";
        bool works=true;
        for(int i=0;i<n;i++){
            if(arr1[i]!=arr2[i]) {works=false;break;}
        }
        if(works) cout<<"YES\n";
        else cout<<"NO\n";
   }
    return 0;
}