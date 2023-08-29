#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

bool prime(ll a){
    if(a==2) return true;
    for(ll i=2;i<=sqrt(a); i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ll n, i, val, b,a;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>val;
        for(a=val; a>=2;a--){
            if(prime(a)){
                //if j is a prime, go the other way around
                b=val+(val-a);
                if(prime(b)){
                    cout<<a<<" "<<b<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}