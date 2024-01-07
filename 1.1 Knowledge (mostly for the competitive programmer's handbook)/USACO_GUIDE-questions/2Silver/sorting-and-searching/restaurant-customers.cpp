//https://cses.fi/problemset/task/1619
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

struct event{
    ll id;
    ll time;
    bool arrival;
};

bool cmp(event a, event b){
    return a.time<b.time;
}

int main(){
    ll n;
    cin>>n;
    vector<event> arr(n*2);
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        arr.push_back({i, a, true});
        arr.push_back({i, b, false});
    }
    // debug(arr.size())
    sort(arr.begin(), arr.end(), cmp);

    ll mx = 0;
    //contains the id of the elements currently in the restaurant
    unordered_set<ll> curr;
    for(int i=0;i<arr.size();i++){
        if(arr[i].arrival){
            curr.insert(arr[i].id);
        }
        else{
            curr.erase(arr[i].id);
        }
        mx = (curr.size()>mx)?curr.size():mx;
    }
    cout<<mx<<"\n";


    return 0;
}