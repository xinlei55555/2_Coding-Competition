//!SEE MY NOTEBOOK FOR THE REASONING
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" "<<x<<"\n"; 
int main(){
    int i;
    //use long long, always!!!!
    long long n, x, ans=0;
    cin>>n>>x;
    //we gotta start by inserting an element,  which would be x, to the associations list. Indeed, if the WHOLE array's sum is equal to x, then the last element in the subarray will express it.
    map<long long, long long> associations={{x,1}};
    long long arr[n];

    cin>>arr[0];
    //don't forget to compare the first element too!
        //you wanna compare before adding, since, if the prefix sum itself is the value, then adding one would bias the result
    if(associations.find(arr[0])!=associations.end()) ans+=associations[arr[0]];
    associations[arr[0]+x]++;


    for(i=1;i<n;i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
        if(associations.find(arr[i])!=associations.end()) ans+=associations[arr[i]];

        //adding the given element + x to the unordered map
        associations[arr[i]+x]++;

    }

    cout<<ans;
    return 0;
}    




    //!double for loop
    // for(i=1;i<n;i++){
    //     cin>>pref[i];
    //     //~gonna get found anyways
    //     // //this means that there is one element that has value x
    //     // if(pref[i]==x) ans++;

    //     pref[i]+=pref[i-1];
    //     //if the sum of all elements until then are x
    //     // if(pref[i]==x) ans++;


    //     // //looping through every prefix that came before, and check for the value of the sum.
    //     // for(int size=1;size<=i;size++){
    //     //     // debug(pref[i])
    //     //     // debug(pref[i-size])
    //     //     if(pref[i]-pref[i-size]==x) ans++;
            
    //     //     // //the difference is bigger...
    //     //     // else if(pref[i]-pref[i-size]>=x) break; 
    //     // }
    // }
