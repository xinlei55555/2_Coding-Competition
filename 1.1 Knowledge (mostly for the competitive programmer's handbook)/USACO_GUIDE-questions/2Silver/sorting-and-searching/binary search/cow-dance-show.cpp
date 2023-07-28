#include <bits/stdc++.h>
using namespace std;
//do not forget to comment that line, and remove the debug thingy
#define debug(x) 
typedef long long ll;
int main(){
    ofstream cout("cowdance.out");
    ifstream cin("cowdance.in"); 
    
    ll n, i, t;
    cin>>n>>t;
    vector<ll> arr(n), copy;
    //using binary search, try all values of k?
    //the largest value of K will be smaller or equal to t;

    // t is max 10^6; so looping through every single value of t possible...
    ///OHH, but we only need to find the value of k that is ideal, meaning that we have to find, through binary search, the values of n!
        //which is doable!
    for(i=0;i<n;i++){
        cin>>arr[i];
    } 
    copy=arr;

    ll ans=n, hi=n, lo=1, smallest, idx, curr, closest=100001;
    bool works;
    //somehow, the +1 is supposed to make so that the value is exactly the one we are looking for.
    //i is the number of places.
        //!the actual end condition is that if highest value == i, then the highest value is the closest to the actual value
    i=(hi+lo+1)/2;
    //!the thing with lo<=hi, is that it will always be true...
    while(lo<=hi){// hi-lo!=0;){
        //this is so that the algorithm doesn't overflow
        i=(floor(hi-lo)/2)+lo;
        debug(hi)
        debug(i)
        debug(lo)
        works=true; 
        //for every value after the given stage, trying the cows.
        
            //reset the array
        arr=copy;
        for(curr=i; curr<n;curr++){
            //always set the value not to an arbitrary number
            smallest=arr[0];
            //finding the smalllest value in the given range of values on the stage
            for(int j=0;j<i;j++){
                smallest=min(smallest, arr[j]);
                if(smallest==arr[j])idx=j;
            }
            debug(smallest)
            arr[idx]+=arr[curr];
            if(arr[idx]>t){
                works=false;
                break;
            }
        }
        
            
        //include i;
        debug(works)
        //important to exclude the current value (by doing +1 or -1);
        if(works){
            //here I am setting the closest value 
            closest=min(i, closest);
            hi=i-1;
        }
        if(!works) lo=i+1;
    }
    cout<<closest;
    //after this for loop, hi and lo will have the same value, which will be the right value.
    return 0;
}