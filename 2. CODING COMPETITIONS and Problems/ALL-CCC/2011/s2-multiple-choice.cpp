#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0; cin>>n;
    char c[n], rand; int ans=0;
    for(i=0;i<n;i++) cin>>c[i];
    for(auto x:c){
        cin>>rand;
        if(rand==x)ans++;
    } 
    cout<<ans;

    return 0;
}