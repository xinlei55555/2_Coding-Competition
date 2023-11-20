#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<'\n';
int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll arr[n+1];
        string answer = "YES\n";
        arr[0]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            //check if i is a power of two. if not, then that means I won't be able to reach it
            //the binary & of a power of two, and of the number just under the power of two will give 0000000 (since it goes power of two: 10000 and power of two -1: 01111 or alternates)
            
        }
        for(int i=1;i<n;i++){
            //(i&(i-1)) != 0 is parenthesis sensitive!
            if((i & (i-1))!=0 && arr[i] > arr[i+1]) {answer = "NO\n"; debug(i); break;}
            cerr<<(i & (i-1))<<"\n";   
        }
        cout<<answer;
        // cout<<((((i & (i-1) != 0)) && arr[i] > arr[i+1]))<<'\n';
    }
    return 0;
}