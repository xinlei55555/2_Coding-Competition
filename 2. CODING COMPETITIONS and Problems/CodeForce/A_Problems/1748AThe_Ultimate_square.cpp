#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        //if(n%4==0) cout<<n/2;
        // cout<<n-(n%4)/2;
        // if(n%4==0) cout<<n/2;
        // else{
        //     // if((n-1)%4==0) cout<<(n-1)/2;
        //     // else cout<<n+1/2
        //     //integers, when rounded, are truncated by default.
        //     n=n/2;
        //     if(n%2==0) {n++;}
        //     cout<<n<<"\n";
        // }
        //!bruh, you should've tried more test cases
        
        cout<<(n+1)/2<<"\n";
    }
}