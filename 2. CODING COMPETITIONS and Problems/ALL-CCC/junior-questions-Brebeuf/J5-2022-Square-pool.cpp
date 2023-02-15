//Basically, you go to a tree, and check up and left. You check the LONGEST time it has with a tree.
    //then, you continue with a second row
    //when the size of the width is bigger than the height, there is a possible square (at height^2)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    //prefix sum and binary search? (2n logn)
    ll n, k, i;
    cin>>n>>k;
    //prefix sum 
    vector<vector<ll>> arr(n+1, vector<ll>(n+1, 0));
    vector<ll> 
    //inputting a 2d prefix sum takes O(k.n^2) (too long)
    // for(i=0;i<k;i++){
    //     cin>>r>>c; 
    //     for(int j=0;j<n;j++){

    //     }

    // }
    
    return 0;
}



    //transforming the square into two linear arrays, then using sliding window (linear time)
        //doesn't take into account the second test case;
/*
    ll i, n, k,a, b;
    bool row[500000]={false}, col[500000]={false};
    cin>>n>>k;
    for(i=0;i<k;i++){
        cin>>a>>b;
        row[a]++;
        col[b]++;
    }

    //fiding the longest continuous subarray of 0
    ll curr=0, mx=0;//first_idx=0, second_idx=1, curr=0, mx=1;
    ll curr2=0, mx2=0;
    for(i=1;i<=n;i++){
        debug(col[i])
        if(col[i]==0) curr++;
        if(col[i]>0) curr=0;
        mx=max(mx, curr);
        debug(curr)
        debug(mx)

        debug(row[i])
        if(row[i]==0) curr2++;
        if(row[i]>0) curr2=0;
        mx2=max(mx2, curr2);
        debug(curr2)
        debug(mx2)

    }


    cout<<min(mx, mx2);
    return 0;
}
*/