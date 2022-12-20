#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t, n,m,i,j; cin>>t;
    vector<vector<long long>> arr(100001, {(100001, 0)}); 
    //i'll save an array of 100001 elements that contains the number of '1s' in these
    while(t--){
        cin>>n>>m;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
    } 
    return 0;
}