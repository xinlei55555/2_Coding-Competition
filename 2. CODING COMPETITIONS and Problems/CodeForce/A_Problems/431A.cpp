#include <bits/stdc++.h>
using namespace std;
main(){
    int arr[4], i, ans=0;
    char s;
    for(i=0; i<4; i++) cin>>arr[i];
    
    while(cin>>s) {i=s-'0'; ans+=arr[i-1]; }
    cout<<ans;
}