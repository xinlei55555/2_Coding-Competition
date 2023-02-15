/*
a few discoveries on upper_bound and lower_bound
    vector<int> arr={1,2,3,4,5,6,788,1213};

    auto x=upper_bound(arr.begin(), arr.end(), 1213);
    int i= distance(arr.begin(),x);
    debug(i) //8
    bool val= x==arr.end();
    debug(val) // true, the value of x is arr.end()

    x=lower_bound(arr.begin(), arr.end(), 0);
    i=distance(arr.begin(),x);
    debug(i) //0
    val= x==arr.end();
    debug(val) //0 (false)
*/
//!put the files in the right folder!
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
int main(){
    ifstream cin("angry.in");
    ofstream cout("angry.out");
    ll i, n; cin>>n;
    vector<ll> arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    for(auto x:arr) debug(x)

    //I could try binary search? check for the number of test cases;
        //my algorithm would be O(2nlogn);
    ll lo=0, hi=arr[n-1], mid, closest=arr[n-1], range;
    while(lo<=hi){
        mid=floor((hi-lo)/2)+lo;
        debug(mid)
        debug(hi)
        debug(lo)
        //simulate every possibility
        bool poss=false;
        for(i=0;i<n;i++){
            range=mid;
            ll right=i, left=i;
            //time to loop and to simulate, unless better approach
            while(range>0){
               
                range--;
            }
        }
        debug(poss)
        if(poss) {
            hi=mid-1;
            closest=min(closest, mid);
            debug(closest)
        }
        else lo=mid+1;
    }
    cout<<fixed<<setprecision(1)<<closest;
    return 0;
}