#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";


int main(){
    ll n; cin>>n;
    unordered_map<int, vector<int>> num;
    // vector<unordered_set<int>> arr;
    for(int i=0;i<n;i++){
        ll a, b;
        cin>>a>>b;
        if((b-a)<2) continue;
        for(int j=a; j<=b;j++){
            if(num.find(j)==num.end()) num.insert({j, {i}})
            else num[j].push_back(i);
        }
    }
    for(auto x: num){
        if(x.size()>=3){
            
        }
    }
    return 0;
}