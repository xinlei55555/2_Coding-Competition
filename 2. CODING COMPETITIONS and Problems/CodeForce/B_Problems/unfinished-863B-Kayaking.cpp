#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    cin>>n;
    n*=2;
    int arr[n];
    if(n<2){cout<<0;}
    for(i=0; i<n;i++){
        cin>>arr[i];

    }sort(arr, arr+n);
    for(auto x:arr) cout<<x<<" ";
    // mx[1] contains the largest element difference, mx[0] contains the second largest element difference
    //int prev_max,mx=0, diff, ans=0;
    // for(i=1; i<n; i+=2){
    //     diff=arr[i]-arr[i-1];
    //     //I add the difference to the answer;
    //     ans+=diff;
    //     prev_max=mx;
    //     //I find the max;
    //         //if the max changes, I will substract the residue from the previous max to the new ans
    //     mx=max(mx, diff);
    //     if(mx=diff) {ans-=(mx-prev_max);continue;}

    //}

    //!I must rerun, since there is a possibility that the two maxes are at the beginning and the end!
    
    // int ans2=0;
    // for(i=1; i<n-1; i+=2){
    //     ans2+=arr[i+1]-arr[i];

    // }
    
    //! ok, yes, I was wrong. You must use a triple for loop, since there, if you wanna know that the current difference is the optimal one, you'll have to check how it compares to the next difference, and to the next, and etc. etc
    //hide first kayak
    // int j, k,tmp_idx,l,ans,mn=2147483647, tmp[2]={0};
    // for(i=0;i<n;i++){
    //     for(j=i+1; j<n;j++){
    //         k=0;
    //         tmp_idx=0;
    //         while(tmp_idx<2){
    //             if((k!=i&&k!=j)){tmp[tmp_idx]=arr[k]; tmp_idx++;}
    //             k++;
    //         }
    //         ans+=(tmp[1]-tmp[0]);
    //     }
    // }
    // for(i=0;i<n-1; i++){
    //     for(j=i+1; j<n; j++){
    //         ans=0;
    //         //now that I have two of the kayaks hidden, i can try to determine the sum of the values;
    //         k=1;
    //         while( i<n){
    //             if((k-1==j || k-1==i) && k!=j){
    //                 if(k+1==n) break;
    //                 k+=2;
    //                 continue;
    //             }
    //             else if(k-1!=i && (k==j || k==i)){
    //                 if(k+1==n) break;
    //                 ans+=arr[k+1]-arr[k-1];
    //                 k+=2;
    //                 continue;
    //             }
    //             else if(k-1==i && k==j){k++;continue;}
    //             else ans+=arr[k]-arr[k-1];
    //             k++;
    //         }
    //         cout<<"HI";
    //         mn=min(ans, mn);
    //     }
    // }
    cout<<mn;
    return 0;
}