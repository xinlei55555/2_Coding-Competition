//!just run a sliding window after another!
// (sort first)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

int main(){
    ifstream cin("diamond.in");
    ofstream cout("diamond.out");
    ll n, k,i;
    cin>>n>>k;
    ll arr[n];
    //basically, trying to find the largest two subarrays which where the first and last element have a difference of less than k
    //using a prefix sum seems to me a bit useless, since you'll be calculating the sums of subarrays
    //basically also keep track of the two biggest values of diamonds;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    // for(auto x:arr) debug(x)

    ll j=1, curr=1, prev_idx;
    // vector containing the value of the previous max, and the i-th value
    vector<ll> prev_max={0,0}, mx={0,0};
    i=0;
    while(j<n){
        debug(j)
        debug(i)
        if(arr[j]-arr[i]<=k && i<=j) {
            curr++;
            
            //I also need to save the j element of the maxes, so that the elements that cross between can be removed.
            // if(ind){
                //directly swap                                                        // this is important, here, I only swap max and previous_max IF previous_map does not interlap with max's elements
            //     if(curr>prev_max[0]) {prev_max[0]=curr; prev_max[1]=i;if(prev_max[0]>mx[0] && mx[1]+mx[0]<prev_max[1]) {swap(prev_max, mx);}}
            //     else if(curr>mx[0]) {mx[0]=curr; mx[1]=i;}
            //     j++;
            //     continue;
            // }
            //!basically, you can swap... but when swapping, you gotta also check, if one of the values has an i-th index within another's i -> i+#, then that means that I must add an intermediary step, where I only keep the max between the two
            j++;
            if(i>=prev_max[1]){
                if(prev_max[0]<curr){
                    prev_max[0]=curr;
                    prev_max[1]=i;
                    continue;
                }
                else{
                    continue;
                }
            }
            else if(i>=mx[1]){
                if(mx[0]<curr){
                    mx[0]=curr;
                    mx[1]=i;

                    //here, I have set the max values, can continue;
                    continue;
                }
                else{
                    continue;
                }
            }
            cerr<<"hi\n";
            //else
            prev_max[0]=max(curr, prev_max[0]);
            if(prev_max[0]==curr) {
                prev_max[1]=i; 
                if(prev_max[0]>mx[0]) {
                    swap(prev_max, mx);
                }
            }
            //this means that the data is being repeated... that means that the second max must not be changed
            
        }
        else{
            // if(i<j) i++;
            // else j++;
            //mx[1]+mx[0]=j
            if(i<=j)i=max(prev_max[1]+prev_max[0], mx[1]+mx[0])+1;
            else j++;
            curr=1;
        }
        debug(prev_max[1])
        debug(mx[1])
        debug(prev_max[0])
        debug(mx[0])

    }
    //if still places where
    cout<<mx[0]+prev_max[0];
    return 0;
}
//     //using two pointers and keeping the two maximum numbers of elements;
//     i=1;
//     ll a=0, largest=0, largest2=0, curr_diff, idx=-1;
//     //keeping the two largest elements
//     while(i<n){
//         curr_diff=arr[i]-arr[a];
//         if(curr_diff>k){
//             //i'll add from the last second index
//             if(a<idx ) {
//                 a=idx;
//                 if(i<=idx){
//                     i=a;
//                 }

//             }
//             else{
//                 a++;
//             }
//         }
//         debug(curr_diff)
//         debug(idx)
//         debug(a)
//         debug(i)

//     //basically, there is a problem with idx, and if I continue, i will turn crazy
//         if(i-a+1>largest && curr_diff<=k){
//             largest2=largest;
//             largest=i-a+1;
//             debug(idx)
//             idx=i+1;
//             if(i-a+1>largest2 && curr_diff<=k && idx<=a){
//                 largest2=i-a+1;
//             }
//         }

        
     
//         //if curr_diff is smaller, you can save the current number of elements
//         i++;
    
//         debug(largest)
//         debug(largest2)
//     }
//     debug(largest)
//     debug(largest2)
//     cout<<largest+largest2;
//     return 0;
// }