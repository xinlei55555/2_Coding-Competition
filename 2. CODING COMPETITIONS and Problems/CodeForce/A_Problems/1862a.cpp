#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        // unordered_map<int, char> mp = {{0, 'v'}, {1,'i'},{2, 'k'}, {3, 'a'} };
        // vector<bool> (m, false);
        // vector<int > min_val = {4, -1};
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if()
        //     }
        // }
        vector<vector<char>> arr (n, vector<char> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        vector<int> el = {'v', 'i', 'k', 'a'};
        int idx=0, i=0, j;
        while(i<m){
            j=0;
            if(idx==4) break;
            while(j<n){
                if (arr[j][i]==el[idx]){idx++; break;};
                j++;
            }
            i++;
        }
        if(idx==4) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}