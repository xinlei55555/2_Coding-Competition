#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        long long  n, diff=1e10, mn=false;
        cin>>n;
        //!For codefroces,always declare a longer size array than what is necessary.
        vector<long long> arr(501);
        cin>>arr[0];
        for(int i=1;i<n;i++){
            cin>>arr[i];
            //do not use break; or it might skip some stuff
            if(arr[i]-arr[i-1]<0) {mn=true;}
            diff=min((arr[i]-arr[i-1]+2)/2, diff);
        }
        if(mn) cout<<"0\n"; 
        //floor can cause stackoverflow, and its kind of useless, since I have long long
        else cout<<diff<<"\n";
    }
}