#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    //!I gotta use long long int!
    long long arr[n], i, ans=0, ok=0,a=0;
    //this ensures that I will add a positive number
    for(i=0;i<n;cin>>arr[i++]);
    //!max must be the same type.
    for(i=0; i<(n-1); i++) {ok=max(arr[i]-arr[i+1], a);arr[i+1]+=ok;ans+=ok;}
    cout<<ans;

    //!another method would have been to keep the current local max of the function.
        //then, substract the current value to the local max
        // as soon as we find another local max
            //use it as the new max.

    return 0;
}