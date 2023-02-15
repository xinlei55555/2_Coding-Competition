//!ok, so you can either use ternary search (which is like binary search, but with three parts)
// or you can check, for every midpoint, if the value of the right, and of the left, is smaller or bigger
    //ternary search is basically for searching when you only know the progress of the slope, not necessarily the numbers to the left and right. (Therefore the numbers don't grow uniformly)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
vector<vector<ll>> arr;

ll time(ll c){
    sum=
    for(auto x: arr){

    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i, p,w,d;
    cin>>n;
    arr.resize(n, vector<ll> (3));

    //don't use array of ll
    ll p_max=-1, p_min=1000001;
    for(i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
        p_max=max(arr[i][0], p_max);
        p_min=min(arr[i][0], p_min);
    }

    //binary search
    ll mn=1000000001, lo=p_min, hi=p_max, mid;
    ll time_left, time_right, time;
    while(lo<hi){
        mid=floor((hi-lo)/2)+lo;

        time_left=time_l(c);
        time_right=time_r(c);
        mn=min(time_left+time_right, mn);

        if(time_left>time_right){
            lo=hi;
        }
        else hi=lo;


    }
    return 0;
}