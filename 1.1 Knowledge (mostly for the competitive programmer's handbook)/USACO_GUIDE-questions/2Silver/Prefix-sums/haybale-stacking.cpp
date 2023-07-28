#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define debug(x)// cerr<<#x<<" "<<x<<"\n";

int main(){
    ll i, n, k;
    cin>>n>>k;
    debug("HI")
    vector<ll> arr(n+1, 0), diff(n+1, 0);
    for(i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
        diff[a]++;
        if(b+1<=n+1) diff[b+1]--;
        
    }
    for(auto x: diff) debug(x) 
    arr[0]=0;
    for(i=1;i<=n;i++){
        arr[i]=arr[i-1]+diff[i];
        debug(i)
        debug(arr[i])
        
    }

    sort(arr.begin(), arr.end());
    // for(auto x:arr) debug(x)
    debug((n+1)/2)
    debug(arr[1])

    //!make sure to take into account the extreme cases.
    ll med=(n+1)/2;
    cout<<arr[med];
    
    
   return 0;
}






























// //I messed up, I should've been using differnece arrays

// //!should be using difference arrays;
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define debug(x) cerr<<#x<<" "<<x<<"\n";
// int main(){
//     ll n, m, a, b, i;
//     cin>>n>>m;
//     vector<ll> diff(n+1, 0), arr(n+1, 0);
//     //creating the difference array
//         //initially, all 0, since all the differences are 0

//     for(i=0;i<m;i++){
//         cin>>a>>b;
//     //To remember, just think, the first element must be added 1, and the element just after has to be removed 1, IF only one element is affected!
//         diff[a]++;
//         diff[b+1]--;        
//     }

//     int sol[1000000];
// 	int tot = 0;
// 	for (int i = 0; i < n; i++) {  // build prefix sum array
// 		tot += diff[i];
// 		sol[i] = tot;
// 	}
// 	sort (sol, sol + n);  // sort to get median
// 	cout << sol[n / 2] << '\n';  // output the median



//     // //recreating the array, by creating a prefix sum;
//     // for(i=1;i<=n;i++){
//     //     arr[i]=arr[i-1]+diff[i];
//     //     debug(arr[i])
//     //     debug(n)
//     //     // debug(arr[i])
//     // }

//     // //finding the median

//     // sort(arr.begin()+1, arr.end());
//     // // for(auto x: arr) debug(x)
//     // cout<<arr[(n/2+1)] << '\n';
//     return 0;
// }
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     ifstream cin("stacking.in");
// //     ofstream cout("stacking.out");
// //     int n, k;
// //     cin>>n>>k; 
// //     int a,b, arr[n]={0};
    
// //     while(k--){
// //        cin>>a>>b;
       
// //        arr[a]++,arr[b]++; 
// //        //!~the b means I need to add an element to all the stacks before b!!!, not just the b stack...
// //         //Instead, I can use a prefix sum, and add 1 to the last element of the range. 
// //       //!I should use a difference array....;

       
// //     }
// //     sort(arr,arr+n);
// //     cout<<(n%2==0? arr[n/2]: (arr[(n-1)/2]+arr[(n+1)/2])/2);
// //     return 0;
// // }