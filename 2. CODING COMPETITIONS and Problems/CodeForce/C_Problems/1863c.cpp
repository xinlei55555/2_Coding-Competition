#include <bits/stdc++.h>
using namespace std;
//!//! BRO OMG NEXT TIME NOTICE THAT IT's N ELEMENTS, and that YOU Can TEChNICALLY ONLY HAVE 1 missing element!!!

int main(){
    int t; cin>>t;
    while(t--){
        int n, k, mx=-1;
        unordered_set<int> num;
        cin>>n>>k;
        vector<int> arr(n); 
        vector<int> ans(n+1);
        for(int i=0;i<n;i++) {cin>>ans[i+1]; num.insert(ans[i+1]); }//mx=max(mx, arr[i]);}
        // mx++; 
        // int init=arr[0];
        // cerr<<init<<" init \n";
        //first_shift
        
        for(int i=0;i<=n; i++) {
            if(num.find(i)==num.end()){
                ans[0]=i;
            }
        }
        // for(int i=1;i<=n;i++){
        //     ans[i]=arr[i-1];
        // }
        // for(int i=0;i<n+1;i++){
        //     //insert all numbers that are small, but not in the current array.
        //     int l=0;
        //     while(l<=n){
        //         if(num.find(l)==num.end()){
        //             ans[i]=l;
        //             // if(l==init) init =i;
        //             num.insert(l);
        //             num.erase(arr[i]);
        //             break;
        //         }
        //         l++;
        //     }
        // }
        int idx=1;
        // for(int i=0;i<ans.size();i++) {if(ans[i]==init) {idx =i; break;}}

        // cerr<<idx<<" idx 2 \n";
        int start = idx-k;
        if(idx-k<0) start=ans.size()-(abs(idx-k)%ans.size());
        // int end = start+n;
        // cerr<<"HI";
        // cerr<<start<<" start \n";
        for(int i=0;i<n;i++) cout<<ans[(start+i)%ans.size()]<<" ";
        cout<<"\n";
        // for(int i=0;i<ans.size();i++) cerr<<ans[i]<<" ";
        
        // cerr<<"\n";
    }
    return 0;
}

int main1(){

    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        set<int> num;
        

        int arr[n]; 
        for(int i=0;i<n;i++){
            cin>>arr[i];  num.insert(arr[i]);
        }
        // int l=0, val;
        // while(l<=n+1){
        //     if(num.find(l)==num.end()){
        //         val=l;
        //         // num.insert(l);
        //         // num.erase(arr[j]);
        //         break;
        //     }
        //     l++;
        // }
        // cout<<val<<" ";
        // // sort(arr, arr+n);
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                int l=0;
                while(l<=n+1){
                    if(num.find(l)==num.end()){
                        num.erase(arr[j]);
                        arr[j]=l;
                        num.insert(l);
                        break;
                    }
                    l++;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}