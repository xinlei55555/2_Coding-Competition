#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    int t; cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(c%2!=0) a++;
        // ll atot=a, btot=b; 
        if(a>b) cout<<"First\n";
        else cout<<"Second\n";

    }
    return 0;
}