#include <bits/stdc++.h>
using namespace std;
//!READ WELL, ONLY ONE OPERATION ALLOWED tt
int main(){
    int t, n,i;
    cin>>t;
    while(t--){
        // ios_base::sync_with_stdio(0);
        // cin.tie(0);
        bool hap=false;
        cin>>n;
        char arr[n];
        cin>>arr[0];
        for(i=1;i<n;i++){
            cin>>arr[i];
            if(arr[i-1]!=arr[i] && hap==false){
                hap=true;
                if(arr[i-1]=='R') cout<<"0\n";
                else cout<<i<<"\n";

                
            }
        }
        if(hap==false) cout<<"-1\n";
        
    }
    return 0;
}