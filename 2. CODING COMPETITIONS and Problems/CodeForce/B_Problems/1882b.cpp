#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        unordered_set<ll> answer = {}, tmp; 
        vector<unordered_set<ll>> subsets = {};
        for(int i=0;i<n;i++){
            ll j; cin>>j;
            // ll init = answer.size();
            tmp = {};
            for(int k=0;k<j;k++){
                ll s;
                cin>>s;
                answer.insert(s);
                tmp.insert(s);
            }
            subsets.push_back(tmp);
            // ll x = abs(init-answer.size());
            // if(x!=0) mn = min(mn, x);
        }

        //this was just a pure brute force problem.

        ll mn = -100000;
        for(auto x: answer){
            unordered_set<ll> sum={};
            for(int i=0;i<n; i++){
                if(subsets[i].find(x) == subsets[i].end()){
                    for(auto x: subsets[i]) sum.insert(x);
                }
            }
            // cerr<<mn<<" "<<x<<" "<<sum.size()<<"\n";
            // set.size() doesn't return an int, so I think I need to convert it before!
            ll sz = sum.size();
            if (mn<=sz) mn = sz;

            
        }
        cout<<mn<<"\n";
    }
    return 0;
}