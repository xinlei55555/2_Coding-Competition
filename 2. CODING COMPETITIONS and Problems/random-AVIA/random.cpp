#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";


int main(){
    int n;
    cin>>n;
    vector<vector<ll>> ans[n];
    vector<vector<ll>> arr;
    vector<vector<bool>> vis;
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            cout<<arr[i][j];
        }
    }

    //BFS


    for(auto x:arr) {for(auto y : x) {debug(y)}}

    return 0;
}