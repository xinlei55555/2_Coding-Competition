#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;;
        int arr[n]; cin>>arr[0];
        vector<int> ans={arr[0]};
        for(int i=1;i<n;i++) {cin>>arr[i];if(arr[i]<arr[i-1]) {ans.push_back(1);} ans.push_back(arr[i]);}
        cout<<ans.size()<<"\n";
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";cout<<"\n";
        ans.clear();
    }
    return 0;
}