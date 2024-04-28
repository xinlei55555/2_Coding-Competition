#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr<<#x<<" "<<x<<"\n";
typedef long long ll;

void print(ll x){
    for(int i=1;i<=x;i++){
        cout<<i<<" ";
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        ll n, sum=0, op=0;
        vector<ll> lst = {};
        cin>>n;
        op = n;
        for(int i=0;i<n;i++){
            if (n*(n+1)/2 > n*i){
                op+=1;
                sum += n*(n+1)/2;
                lst.push_back(i);
            }
            else{
                sum += n*i;
            }
        }
        cout<<sum<<" "<<op<<"\n";
        //! weird, number of operations does not correspond...

        //outputting the type of operation
        ll type = 1;
        for(int i=1;i<=n;i++){
            cout<<type<<" "<<i<<" ";
            print(n);
            cout<<"\n";
        }
        type = 2;
        for(int i=0;i<n-op; i++){
            cout<<type<<" "<<lst[i]<<" ";
            print(n);
            cout<<"\n";
        }
    }

    return 0;
}