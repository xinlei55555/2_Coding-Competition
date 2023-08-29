#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int>> arr(n+1, (n, vector<int>(n+1)));
        vector<int> ans(n+1, 0);
        for(int i=1;i<=n-1;i++){
            for(int j=1;j<=n;j++){
                cin>>arr[i][j];
                // cerr<<arr[i][j];
                if(arr[i][j]==1) {for(int k=max(1, j-((n)-i)); k<min(n+1, j+((n)-i)); k++){cerr<<k<<" "; ans[k]++;}}
            }
            // cerr<<"\n";
        }
        int val;
        for(int i=0;i<n;i++){
            cin>>val; 
            ans[i]+=val;
            if(ans[i]%2!=0) ans[i]++;
            // ans[i]+=val; 
        }
        sort(ans.begin(), ans.end());
        cout<<ans[ans.size()-1];
        cout<<"\n";
    }
    return 0;
}