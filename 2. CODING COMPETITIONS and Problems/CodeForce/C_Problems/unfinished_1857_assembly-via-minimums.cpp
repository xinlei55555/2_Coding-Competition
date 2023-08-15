#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x)  //cerr<<#x<<" "<<x<<"\n";
#define MAX 1000000000

vector<int> a, b; ll n, val;

int main(){
    ll t;
    cin>>t;
    while(t--){
        a.clear(), b.clear();
        cin>>n;
        map<ll, ll> mp;
        for(ll i=0;i<((n)*(n-1)/2);i++)
        {
            cin>>val;
            (mp[val]==0)?mp[val]=1:mp[val]++;
            b.push_back(val);
        }
        if(mp.size()==1){
            for(int i=0;i<n;i++) cout<<b[0]<<" ";
        }

        else {
            a.push_back(MAX);
            n--;
            sort(b.begin(), b.end(), greater<>());
            
            for(auto x:b){
                a.push_back(x);
                n--;
                
            }

            for(int i=n;i!=0;i--){

            }
        }
        cout<<"\n";
    }
    
    return 0;
}