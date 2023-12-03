#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int c, k, s;
        cin>>c>>k>>s;
        if(c>=k) cout<<c<<"\n";
        else{
            int curr = s+c;
            if(curr<k) {curr+=((k-curr)*2);
            cout<<curr<<"\n";}
            else cout<<k<<"\n";
        }
    }
    return 0;
}