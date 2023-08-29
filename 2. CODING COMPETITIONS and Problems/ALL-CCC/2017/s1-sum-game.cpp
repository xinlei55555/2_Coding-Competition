#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) //cerr<<#x<<" "<<x<<"\n";
int main(){
    ll n;
    cin>>n;
    debug(n)
    //!basically, the max size of an array is 100000, don't go over
    ll arr[100001], arr2[100001];
    arr[0]=0;
    arr2[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    for(int i=1;i<=n;i++){
        cin>>arr2[i];
        arr2[i]+=arr2[i-1];
    }

    for(int i=n;i>=0;i--){
        if(arr[i]==arr2[i]) {cout<<i<<"\n"; break;}
    }
    return 0;
}