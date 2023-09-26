//!!!!!#ALWAYS THINK IN TERMS OF ABSOLUTE VALUES!!!!!
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
 
int main(){
    ll t; cin>>t;
    while(t--){
        ll a[2], b[2], c[2];
        cin>>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1];
        ll abx = b[0]-a[0], aby=b[1]-a[1], acx=c[0]-a[0], acy=c[1]-a[1];
        if(abx * acx < 0){
            if(aby * acy < 0) cout<<"1\n";
            else cout<<min(abs(aby), abs(acy))+1<<"\n";
        }
        else if(aby * acy < 0){
            if(abx * acx < 0) cout<<"1\n";
            else cout<<min(abs(abx), abs(acx))+1<<"\n";
        }
 
        //one is inside the other
        else cout<<min(abs(abx),abs( acx)) + min(abs(aby), abs(acy))+1<<"\n";
    }
    return 0;
}