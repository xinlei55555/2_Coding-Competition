#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k;
    long long i,t;cin>>t;
    while(t--){
        cin>>n>>m>>k;
        long long arr[100002];
        long long mx=ceil(n/k);
        string ans="YES";
        if(m<k)ans="NO";
        for(i=0;i<m;i++){
            cin>>arr[i];
            if(arr[i]>mx||arr[i]<=1) ans="NO";
        }
        cout<<ans<<"\n"; 
        //for(auto x:arr) if(x)
    }
    return 0;
}