#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

int main(){
    int t; cin>>t;
    while(t--){
       //if a number can be divided by three, I don't think you can make it work
        int n; cin>>n;
        if(n<7 || n == 9){ 
            cout<<"NO\n";
            // else{
            //     cout<<"YES\n"<<4<<" "<<1<<" "<<n-5<<"\n";
            // }
        }
        else{
            if(n%3==0) cout<<"YES\n"<<1<<" "<<4<<" "<<n-5<<"\n";
            else cout<<"YES\n"<<1<<" "<<2<<" "<<n-3<<"\n";
        }
    }
    return 0;
}