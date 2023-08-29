#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x)// cerr<<#x<<" "<<x<<"\n";

vector<ll> arr, test;
vector<vector<ll>> air;
ll mn=20000000;
void check(vector<vector<ll>> &cop, int i){
    if(i==air.size()){
        debug(cop.size())
        ll curr=0;
        test=arr;
        //DO YOUR CHECKING THING with the cop, AND RETURN THE INTEGER;
        for(int k=0;k<cop.size();k++){
            curr+=cop[k][3];
            for(int j=cop[k][0];j<=cop[k][1];j++){
                test[j]-=cop[k][2];
            }
        }
        for(auto x:test) {if(x>0) return;}
        debug(curr)
        mn=min(curr, mn);
        //!don't return curr here!
        return;
    }
    check(cop, i+1);
    cop.push_back(air[i]);
    check(cop, i+1);
    cop.pop_back();
}

int main(){
    ll n, i, m,j;
    cin>>n>>m;
    arr.resize(101,0);
    air.resize(m, vector<ll>(4));

    ll s,t,c;
    //costs 100 max
    for(i=0;i<n;i++){
        cin>>s>>t>>c;
        for(j=s;j<=t;j++){
            arr[j]+=c;
        }
    }

    for(i=0;i<m;i++){
        cin>>air[i][0]>>air[i][1]>>air[i][2]>>air[i][3];
    }

    
    //!checking all combinations;
    vector<vector<ll>> cop;
    check(cop,0);

    cout<<mn;
    return 0;
}
    // sort(air.begin(), air.end());
    // do{
    //     copy=arr;
    //     for(i=0;i<air.size();i++){
            
    //     }
    // }
    // while(next_permutation(air.begin(), air.end()));
