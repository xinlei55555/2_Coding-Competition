#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

//!!! always start by thinking case by case, greedy.

// int main(){
//     int n; cin>>n; 
//     vector<int> arr;
//     int mx = 0;
//     //find the longest decreasing sequene.
//     //use a difference array, and find the largest number of decreasing ones?

//     //use two pointers.

//     for(int i=0;i<n;i++){
//         if()
//     }

//     return 0;
// }
//!
/**!
I’ll share my approach, so the main observation is the following :
If the number $x$  
occurs before $x+1$  
then you can always take both of them in a single round 
and hence it won’t contribute anything to the answer but if $x$ comes after $x+1$ 
then we cannot take them  in the single round hence we add $1$ to the final answer.*/
int main(){
    int n,ans=1 ;
    cin >> n ;
    vector<int>a(n),b(n);
    for(int &x:a)
        cin >> x,x--  ;
    for(int i=0;i<n;i++)
        b[a[i]]=i ;
    for(int i=1;i<n;i++)
        ans+=b[i]<b[i-1];
    cout << ans  ;
}
