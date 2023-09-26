#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s; int val=0;
        for(int i=0;i<s.size();i++){val+=(s[i]=='N');}
        if (val==1) cout<<"NO\n";
        
        else cout<<"YES\n";

    }

    return 0;
}